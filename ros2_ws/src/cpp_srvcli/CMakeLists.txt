cmake_minimum_required(VERSION 3.8)
project(cpp_srvcli)

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

# create a shared library server
add_library(server_component SHARED src/add_two_ints_server.cpp)
ament_target_dependencies(server_component ${dependencies})
# create a shared library client
add_executable(client src/add_two_ints_client.cpp)
ament_target_dependencies(client rclcpp tutorial_interfaces)

# to be able use our components in ROS2
rclcpp_components_register_node(
  server_component
  PLUGIN "MinimalServer"
  EXECUTABLE server
)

# if we want to register several components(classes) from one library, use:
# rclcpp_components_register_nodes(library_name "plugin_name1")
# rclcpp_components_register_nodes(library_name "plugin_name2")

# install for shared library server
ament_export_targets(export_server_component)
install(TARGETS
  server_component
  EXPORT export_server_component
	ARCHIVE DESTINATION lib
	LIBRARY DESTINATION lib
	RUNTIME DESTINATION bin
)

# install for executable client
install(TARGETS
  client
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
