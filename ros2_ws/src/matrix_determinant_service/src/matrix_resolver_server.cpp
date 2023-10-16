#include "rclcpp/rclcpp.hpp"
#include "matrix_interface/srv/matrix3x3.hpp"
#include "matrix_interface/msg/message.hpp"

#include <memory>

using std::placeholders::_1;
using std::placeholders::_2;


class MatrixPublisherNode : public rclcpp::Node {
public:
	MatrixPublisherNode() : Node("matrix_publisher_node") {
		publisher_ = create_publisher<matrix_interface::msg::Message>(
			"matrix_topic", 10);
		server_ = create_service<matrix_interface::srv::Matrix3x3>(
			"matrix3x3", std::bind(&MatrixPublisherNode::determinant, this, _1, _2));
	}

	void determinant(const std::shared_ptr<matrix_interface::srv::Matrix3x3::Request> request,
          	std::shared_ptr<matrix_interface::srv::Matrix3x3::Response> response)
	{
  	double answer = request->first * (request->five*request->nine - request->six*request->eight);
  	answer -= request->second * (request->four*request->nine - request->six*request->seven);
  	answer += request->third * (request->four*request->eight - request->five*request->seven);

  	matrix_interface::msg::Message data;

  	if(static_cast<int>(answer) % 2){
		data.message = "odd";
  		publisher_->publish(data);
  	}else{
		data.message = "even";
  		publisher_->publish(data);
 	 }

 	 response->result = answer;
	}
private:
	rclcpp::Publisher<matrix_interface::msg::Message>::SharedPtr publisher_;
	rclcpp::Service<matrix_interface::srv::Matrix3x3>::SharedPtr server_;
};


int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = std::make_shared<MatrixPublisherNode>();
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to calculate a determinant");
	

  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
