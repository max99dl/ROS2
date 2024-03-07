#include <memory> // for std::make_shared()

#include "rclcpp/rclcpp.hpp"
#include "tutorial_interfaces/msg/num.hpp" // our custom topic
#include <rclcpp_components/register_node_macro.hpp> // to be able use macro


using std::placeholders::_1;

class MinimalSubscriber : public rclcpp::Node
{
rclcpp::Subscription<tutorial_interfaces::msg::Num>::SharedPtr subscriber_;
public:
    MinimalSubscriber(const rclcpp::NodeOptions & options)
    : Node("minimal_subscriber", options)
    {
        // we will call topic_callback each time the publisher is publishing message data
        subscriber_ = this->create_subscription<tutorial_interfaces::msg::Num>(
            "topic", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
    }
private:
    void topic_callback(const tutorial_interfaces::msg::Num &message) const {
        RCLCPP_INFO_STREAM(this->get_logger(), "I Heard: '" << message.num << "'");
    }
};



RCLCPP_COMPONENTS_REGISTER_NODE(MinimalSubscriber)
/*
int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MinimalSubscriber>());
    rclcpp::shutdown();
    return 0;
}
*/
