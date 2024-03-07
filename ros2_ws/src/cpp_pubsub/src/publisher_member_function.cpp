#include <chrono> // we gonna create a synchronous timer with a callbak function 
#include <functional> // for std::bind(), we will send a class's method as a callback function
#include <memory> // for std::make_shared(), we gonna create our class via shaerd_ptr in main()
#include <string> // for std::to_string(), to convert integers in string

// we need rclcpp/rclcpp.hpp to be able use ROS2
#include "rclcpp/rclcpp.hpp"
#include <rclcpp_components/register_node_macro.hpp>
// we need String.hpp to publish string messages
#include "std_msgs/msg/string.hpp"

#include "tutorial_interfaces/msg/num.hpp" // our custom topic

using namespace std::chrono_literals; // to be able use 1000ms

/*
    This example creates a subclass of Node and uses std::bind() to register a member function
    as a callback from the timer.
*/

// we need to inherit from class Node to be able use ROS2,
 class MinimalPublisher : public rclcpp::Node {
// every this in the code is referring to the Node
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<tutorial_interfaces::msg::Num>::SharedPtr publisher_;
    size_t count_;
public:
    MinimalPublisher(const rclcpp::NodeOptions & options)
    : Node("minimal_publisher", options), count_(0)
    {
        // "topic" - is the name of our topic, 10 - the required queue size to limit messages in the event of a backup
        publisher_ = this->create_publisher<tutorial_interfaces::msg::Num>("topic", 10);
        // cerate timer to call timer_callback method every second
        timer_ = this->create_wall_timer(
            1000ms,
            std::bind(&MinimalPublisher::timer_callback, this));
    }
private:
    void timer_callback() {
        // create our message
        auto message = tutorial_interfaces::msg::Num();
        message.num = this->count_++;
        RCLCPP_INFO_STREAM(this->get_logger(), "Publishing: '" << message.num << "'"); // print every published message in console
        publisher_->publish(message);
    }
 };

// we gonna use this node as a component
RCLCPP_COMPONENTS_REGISTER_NODE(MinimalPublisher)