cmake_minimum_required(VERSION 3.8)
project(cpp_pubsub)

# Default to c++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(tutorial_interfaces REQUIRED)

set(dependencies
	"rclcpp"
	"rclcpp_components"
	"tutorial_interfaces"
)

# to be able run our node using ros2 run
add_library(talker_component SHARED src/publisher_member_function.cpp)
ament_target_dependencies(talker_component ${dependencies})
# we gonna create plugins and use plugins
add_library(listener_component SHARED src/subscriber_member_function.cpp)
ament_target_dependencies(listener_component ${dependencies})

#declare our components
rclcpp_components_register_node(
	talker_component
	PLUGIN "MinimalPublisher"
	EXECUTABLE talker
)
#declare our components
rclcpp_components_register_node(
	listener_component
	PLUGIN "MinimalSubscriber"
	EXECUTABLE listener
)

# if we want to register several components(classes) from one library, use:
# rclcpp_components_register_nodes(library_name "plugin_name1")
# rclcpp_components_register_nodes(library_name "plugin_name2")


ament_export_targets(export_talker_component)
ament_export_targets(export_listener_component)

install(TARGETS talker_component
	EXPORT export_talker_component
	ARCHIVE DESTINATION lib
	LIBRARY DESTINATION lib
	RUNTIME DESTINATION bin
)
install(TARGETS listener_component
	EXPORT export_listener_component
	ARCHIVE DESTINATION lib
	LIBRARY DESTINATION lib
	RUNTIME DESTINATION bin
)

# install launch files
install(DIRECTORY
	launch
	DESTINATION share/${PROJECT_NAME}
)

ament_package()
