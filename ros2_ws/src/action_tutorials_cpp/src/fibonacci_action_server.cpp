#include <memory>
#include <functional>
#include <thread>

#include "rclcpp/rclcpp.hpp"
#include "action_tutorials_interfaces/action/fibonacci.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"

namespace action_tutorials_cpp
{

class FibonacciActionServer : public rclcpp::Node
{
public:
    // rename our action type for easyer to read
    using Fibonacci = action_tutorials_interfaces::action::Fibonacci;
    // rename goal server handler function
    using GoalHandlerFibonacci = rclcpp_action::ServerGoalHandle<Fibonacci>;

    // create our node with some options
    explicit FibonacciActionServer(const rclcpp::NodeOptions &options = rclcpp::NodeOptions())
    : Node("fibonacci_action_server", options)
    {
        using namespace std::placeholders;
        // use this to create an action server
        /*
        An action server requires 6 things:
        --  the template action type name: Fibonacci.
        --  a ROS2 node to add the action to: this.
        --  the action name: 'fibonacci'.
        --  a callback function for handling goals: handle_goal.
        --  a callback function for handling cancellation: handle_cancel.
        --  a callback function for handling goal accept: handle_accept.
        Note that all of the callbacks need to return quickly, otherwise we risk starving the executor!!!
        */
        this->action_server_ = rclcpp_action::create_server<Fibonacci>(
            this,
            "fibonacci",
            std::bind(&FibonacciActionServer::handle_goal, this, _1, _2),
            std::bind(&FibonacciActionServer::handle_cancel, this, _1),
            std::bind(&FibonacciActionServer::handle_accepted, this, _1)
        );
    }
private:
    // type of action server
    rclcpp_action::Server<Fibonacci>::SharedPtr action_server_;
    
    // the callback function for handling new goals
    rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID &uuid,
        std::shared_ptr<const Fibonacci::Goal> goal)
    {
        RCLCPP_INFO(this->get_logger(), "Received goal request with order %d", goal->order);
        (void)uuid;
        // just accept all goals
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    // the callback function for handling cancellations
    rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<GoalHandlerFibonacci> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
        (void)goal_handle;
        // just tell the client that it accepted the cancellation
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    // the callback function accepts the new goals and starts processing it
    void handle_accepted(const std::shared_ptr<GoalHandlerFibonacci> goal_handle)
    {
        using namespace std::placeholders;
        // Since the execution is a long-running operation, we create a thread to do the actual work,
        // and return from handle_accepted quickly.
        std::thread{std::bind(&FibonacciActionServer::execute, this, _1), goal_handle}.detach();
    }

    // execute this method in new thread
    void execute(const std::shared_ptr<GoalHandlerFibonacci> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "Executing goal...");

        // This work thread processes on sequence number of the Fibonacci sequence every second,
        // publishing feedback update for each step.
        rclcpp::Rate loop_rate(1);
        const auto goal = goal_handle->get_goal();
        auto feedback = std::make_shared<Fibonacci::Feedback>();
        auto & sequence = feedback->partial_sequence;
        sequence.push_back(0);
        sequence.push_back(1);
        auto result = std::make_shared<Fibonacci::Result>();

        for (int i = 1; (i < goal->order) && rclcpp::ok(); i++)
        {
            // check if there is a cancel request
            if(goal_handle->is_canceling()) {
                result->sequence = sequence;
                goal_handle->canceled(result);
                RCLCPP_INFO(this->get_logger(), "Goal canceled");
                return;
            }

            // Update sequence
            sequence.push_back(sequence[i] + sequence[i-1]);
            // Publish feedback
            goal_handle->publish_feedback(feedback);
            RCLCPP_INFO(this->get_logger(), "Publish feedback");
        
            loop_rate.sleep();
        }

        // check if goal is done
        if(rclcpp::ok()) {
            // when it has finished processing, it marks the goal_handle as succeeded, and quits
            result->sequence = sequence;
            goal_handle->succeed(result);
            RCLCPP_INFO(this->get_logger(), "Goal succeeded");
        }
    }
};

} // action_tutorials_cpp

RCLCPP_COMPONENTS_REGISTER_NODE(action_tutorials_cpp::FibonacciActionServer)