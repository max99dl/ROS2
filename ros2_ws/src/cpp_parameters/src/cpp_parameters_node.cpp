#include <memory>
#include <chrono>
#include <functional>
#include <string>
#include <vector>

#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;

class MinimalParam : public rclcpp::Node
{
rclcpp::TimerBase::SharedPtr timer_;
public:
    MinimalParam()
    : Node("minimal_param_node")
    {
        // create a parameter description varibale
        auto param_description = rcl_interfaces::msg::ParameterDescriptor{};
        // fill the param_description with some description
        param_description.description = "Example of the string parameter";
        // create parameter where my_parameter - name of the parameter, world - default value for this parameter
        this->declare_parameter("my_parameter", "world", param_description);

        timer_ = this->create_wall_timer(
            1000ms, std::bind(&MinimalParam::timer_callback, this));
    }
private:
    void timer_callback() {
        // save value of the parameter my_parameter in string
        std::string my_param = this->get_parameter("my_parameter").as_string();

        RCLCPP_INFO(this->get_logger(), "Hello %s", my_param.c_str());

        std::vector<rclcpp::Parameter> all_new_parameters{
            rclcpp::Parameter("my_parameter", "world")};
        // set the parameter my_parameter back tp the default string value world;
        // this ensure it is always reset back to the original,
        // if the user changed the parameter externally
        this->set_parameters(all_new_parameters);
    }
};


int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MinimalParam>());
    rclcpp::shutdown();
    return 0;
}
