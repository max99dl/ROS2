#include <memory>
#include <string>
#include "rclcpp/rclcpp.hpp"


class SampleNodeWithParameters : public rclcpp::Node
{
    std::shared_ptr<rclcpp::ParameterEventHandler> param_subscriber_;
    std::shared_ptr<rclcpp::ParameterCallbackHandle> cb_handle_;
    std::shared_ptr<rclcpp::ParameterCallbackHandle> cb_handle2_;
public:
    SampleNodeWithParameters()
    : Node("node_with_parameters")
    {
        // declare a parameter
        this->declare_parameter("an_int_param", 0);

        // create a parameter subscriber that can be used to monitor parameter changes
        // (for this node's parameters as well as other node's parameters)
        param_subscriber_ = std::make_shared<rclcpp::ParameterEventHandler>(this);

        // set a callback for this node's integer parameter, "an_int_param"
        auto callback = [this](const rclcpp::Parameter & param) {
            RCLCPP_INFO(
                this->get_logger(),
                "callback: Received an update to parameter \"%s\" of type %s: \"%ld\"",
                param.get_name().c_str(),
                param.get_type_name().c_str(),
                param.as_int());
        };
        // we will call callback lambda function whenever an_inparam is updated.
        // it is very important to save the handle that returns add_parameter_callback
        cb_handle_ = param_subscriber_->add_parameter_callback("an_int_param", callback);

        // another callback lambda
        auto callback2 = [this](const rclcpp::Parameter & param) {
            RCLCPP_INFO(
                this->get_logger(),
                "callback2: Received an update to parameter \"%s\" of type %s: \"%.02lf\"",
                param.get_name().c_str(),
                param.get_type_name().c_str(),
                param.as_double());
        };

        auto remote_node_name = std::string("parameter_blackboard");
        auto remote_param_name = std::string("a_double_param");
        cb_handle2_ = param_subscriber_->add_parameter_callback(remote_param_name, callback2, remote_node_name);
    }
};


int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SampleNodeWithParameters>());
  rclcpp::shutdown();

  return 0;
}