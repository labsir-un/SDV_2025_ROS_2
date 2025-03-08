cmake_minimum_required(VERSION 3.8)
project(sdv_serial)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Buscar paquetes necesarios
find_package(PkgConfig REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosbag2_cpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(serial_driver REQUIRED)  # Verifica que 'serial_driver' esté instalado
find_package(sdv_msgs REQUIRED)
find_package(Eigen3 REQUIRED)

# Declarar el ejecutable
add_executable(sdv_serial_node
  src/sdv_serial_node.cpp
  src/motor.cpp
  src/tools.cpp
  src/two_drive_controller.cpp
  src/four_drive_controller.cpp
)

# Incluir directorios
target_include_directories(sdv_serial_node PRIVATE
  include
  include/motor 
  ${EIGEN3_INCLUDE_DIR}  # Incluir Eigen
  $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/rosidl_generator_cpp>
  $<INSTALL_INTERFACE:include>
)

# Definir las dependencias del ejecutable
ament_target_dependencies(sdv_serial_node
  rclcpp  
  std_msgs 
  sensor_msgs 
  geometry_msgs
  serial_driver
  sdv_msgs
)

# Instalar el ejecutable
install(TARGETS sdv_serial_node
  DESTINATION lib/${PROJECT_NAME}
)

# Instalar archivos de encabezado
install(
  DIRECTORY include/
  DESTINATION include
)

# Asegurarse de que las dependencias se exporten
ament_export_dependencies(rclcpp std_msgs sensor_msgs geometry_msgs serial_driver sdv_msgs)

ament_package()

