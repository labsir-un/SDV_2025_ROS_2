cmake_minimum_required(VERSION 3.8)
project(sdv_joystick)

# Enable C++17 (ROS 2 recommends C++17 or later)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)

add_executable(sdv_joystick_node src/sdv_joystick_node.cpp)

ament_target_dependencies(sdv_joystick_node
  rclcpp
  std_msgs
  geometry_msgs
  sensor_msgs
)

install(TARGETS sdv_joystick_node
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()

