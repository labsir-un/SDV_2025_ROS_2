cmake_minimum_required(VERSION 3.8)
project(sdv_process)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sdv_serial REQUIRED)

# Generate messages
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/FirebaseProcess.msg"
  DEPENDENCIES std_msgs
)

# Install Python package
#ament_python_install_package(${PROJECT_NAME})


# Install executable scripts
install(PROGRAMS
  src/firebase_initializer.py
  src/process_controller.py
  src/firebase_coms_launcher.sh
  DESTINATION lib/${PROJECT_NAME}
)

# Install other resources
install(DIRECTORY src/ros_coms
  DESTINATION lib/${PROJECT_NAME}
  USE_SOURCE_PERMISSIONS
)
install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

# Export dependencies
ament_export_dependencies(rosidl_default_runtime rclpy std_msgs geometry_msgs sdv_serial)

ament_package()

