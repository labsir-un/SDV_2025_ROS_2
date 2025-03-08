cmake_minimum_required(VERSION 3.5)
project(sdv_scripts)

# Find ament and other dependencies
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

# Generate message interfaces (make sure your message file is in the 'msg' directory)
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Udp.msg"
  DEPENDENCIES std_msgs geometry_msgs
)

# Declare the package for ament
ament_package()