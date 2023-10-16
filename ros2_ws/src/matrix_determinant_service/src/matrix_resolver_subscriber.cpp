#include "rclcpp/rclcpp.hpp"
#include "matrix_interface/msg/message.hpp"

#include<memory>
#include<functional>

using std::placeholders::_1;

class MatrixSubscriber : public rclcpp::Node
{
public:
  MatrixSubscriber()
  : Node("MatrixSubscriber"){
  	subscription_ = this->create_subscription<matrix_interface::msg::Message>(
		"matrix_topic", 10, std::bind(&MatrixSubscriber::topic_callback, this, _1));
  }
private:
  void topic_callback(const matrix_interface::msg::Message msg){
  	RCLCPP_INFO(this->get_logger(), "%s", msg.message.c_str());
  }
  rclcpp::Subscription<matrix_interface::msg::Message>::SharedPtr subscription_;
};


int main(int argc, char* argv[])
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<MatrixSubscriber>());
	rclcpp::shutdown();
	return 0;
}
