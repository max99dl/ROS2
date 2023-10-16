#include "rclcpp/rclcpp.hpp"
#include "matrix_interface/srv/matrix3x3.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  if (argc != 10) {
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "use pattern by input nine numbers");
      return 1;
  }

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("matrix_resolver_client");
  rclcpp::Client<matrix_interface::srv::Matrix3x3>::SharedPtr client =
    node->create_client<matrix_interface::srv::Matrix3x3>("matrix3x3");

  auto request = std::make_shared<matrix_interface::srv::Matrix3x3::Request>();
  request->first  = atoll(argv[1]);
  request->second = atoll(argv[2]);
  request->third  = atoll(argv[3]);
  request->four   = atoll(argv[4]);
  request->five   = atoll(argv[5]);
  request->six    = atoll(argv[6]);
  request->seven  = atoll(argv[7]);
  request->eight  = atoll(argv[8]);
  request->nine   = atoll(argv[9]);

  while (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  }

  auto result = client->async_send_request(request);
  // Wait for the result.
  if (rclcpp::spin_until_future_complete(node, result) ==
    rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "determinant: %lf", result.get()->result);
  } else {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service matrix_3x3");
  }

  rclcpp::shutdown();
  return 0;
}
