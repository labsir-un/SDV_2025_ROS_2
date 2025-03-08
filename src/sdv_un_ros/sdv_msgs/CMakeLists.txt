cmake_minimum_required(VERSION 3.5)
project(sdv_msgs)

# Load and setup packages
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
# Setup dependencies
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
# Declare ROS messages and services

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Batteries.msg"
  "msg/Battery.msg"
  "msg/Buzzer.msg"
  "msg/Drivers.msg"
  "msg/Encoder.msg"
  "msg/Flexiforce.msg"
  "msg/FourMotors.msg"
  "msg/ImuRaw.msg"
  "msg/LED.msg"
  "msg/MotorDriver.msg"
  "msg/PanelButton.msg"
  "msg/SdvPlatform.msg"
  "msg/SdvStatus.msg"
  "msg/TagRfid.msg"
  "msg/TwoMotors.msg"
  "msg/Ultrasound.msg"
  DEPENDENCIES std_msgs geometry_msgs
)

ament_export_dependencies(rosidl_default_runtime)

#Generate added messages and services
ament_package()