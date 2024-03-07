if you don't wan't to build some packages add empty file COLCON_IGNORE in there.

to build the cirtain package use: colcon build --packages-select <package_name>
Arguments for colcon build:
	* --packages-up-to - build the package you want, plus all it's dependencies, but not the whole workspace(saves time)
	* --symlink-install - saves you from having to rebuild every time you tweak python script

before building the workspace it's better to check that all dependencies are good, for this in workspace's root enter:
	rosdep install -i --from-path src --rosidstro humble -y
if all dependencies are good then return message:
#All required rosdeps installed successfully



////////////// PACKAGES
to create package use the command : ros2 pkg create --build-type ament_cmake --license Apache-2.0 <package_name>
or we can also create a node in package: ros2 pkg create --build-type ament_cmake --license Apache-2.0 --node-name <node_name> <package_name> --dependencies rclcpp
