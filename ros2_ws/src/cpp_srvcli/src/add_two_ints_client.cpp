#include "rclcpp/rclcpp.hpp"
#include "tutorial_interfaces/srv/add_three_ints.hpp"

#include <memory> // fro std::shared_ptr
#include <cstdlib> // atoll
#include <chrono> // for 1s
#include <iostream> // to interact with users

using namespace std::chrono_literals;


class MinimalClient : public rclcpp::Node
{
    rclcpp::Client<tutorial_interfaces::srv::AddThreeInts>::SharedPtr client_;
public:
    MinimalClient()
    : Node("add_three_ints_client")
    {  
        // use the same service topic name as in the server.
        client_ = this->create_client<tutorial_interfaces::srv::AddThreeInts>("add_three_ints");
        create_and_send_request();
    }
private:
    void create_and_send_request() {
        // create a request and fill it with data
        auto request = std::make_shared<tutorial_interfaces::srv::AddThreeInts::Request>();
        std::cout << "Enter three ints in format: X Y Z" << std::endl;
        std::cin >> request->a >> request->b >> request->c;

        // the loop gives the client 1 second to search for service node in the network.
        // If it can't find any, it will continue waiting.
        while (!client_->wait_for_service(1s))
        {
            if(!rclcpp::ok()) {
                // if the client is canceled (e.g. Cntrl+C), return yhe error message.
                RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
                return;
            }
            RCLCPP_INFO(this->get_logger(), "service not available, waiting again...");
        }

        // at this step we found the service, and can send a request
        auto result = client_->async_send_request(request);
        /*
            this can be intermediate code, we can do some calculations until we don't need the result
        */

        // wait for result, the node spins until it receives the response or fail
        if(rclcpp::spin_until_future_complete(this->get_node_base_interface(), result) ==
            rclcpp::FutureReturnCode::SUCCESS)
        // we awake when the result is received, so we can check the result 
        {
            RCLCPP_INFO(this->get_logger(), "Sum: %ld", result.get()->sum);
        } else {
            RCLCPP_ERROR(this->get_logger(), "Failed to call service add_three_ints");
        }
    }
};


int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
		std::make_shared<MinimalClient>();
    rclcpp::shutdown();
		return 0;
}

