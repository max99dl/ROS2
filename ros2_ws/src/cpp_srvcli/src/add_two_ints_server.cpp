#include <memory>
#include <functional>

#include "rclcpp/rclcpp.hpp"
#include <rclcpp_components/register_node_macro.hpp> // to be able use components
#include "tutorial_interfaces/srv/add_three_ints.hpp" // our custom srvice

class MinimalServer : public rclcpp::Node
{
    rclcpp::Service<tutorial_interfaces::srv::AddThreeInts>::SharedPtr server_;
public:
    MinimalServer(const rclcpp::NodeOptions & options)
    : Node("add_three_ints_server", options)
    {
        // cerate service with topic name "add_three_ints" and callback function add
        using std::placeholders::_1;
        using std::placeholders::_2;
        server_ = this->create_service<tutorial_interfaces::srv::AddThreeInts>(
            "add_three_ints", std::bind(&MinimalServer::add, this, _1, _2));
        
        // prints a log message when it's ready
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to add three ints.");
        // make the service available
    }
private:
    // this callback function will execute then it is received request from client
    void add(const std::shared_ptr<tutorial_interfaces::srv::AddThreeInts::Request> request,
             std::shared_ptr<tutorial_interfaces::srv::AddThreeInts::Response> response)
    {
        response->sum = request->a + request->b + request->c;
        RCLCPP_INFO(this->get_logger(), "Incoming request\na: %ld" " b: %ld" " c: %ld",
                    request->a, request->b, request->c);
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%ld]",
                    (long int)response->sum);
        // the response will pass to the client automatically when function add has finished
    }
};


RCLCPP_COMPONENTS_REGISTER_NODE(MinimalServer)
