# CMake mínimo necesario para ROS 2
cmake_minimum_required(VERSION 3.5)

# Nombre del proyecto
project(camera_platform)

# Se habilita el soporte para Python
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)

# Asegurarse de que se instale el código de Python
install(
  DIRECTORY src/
  DESTINATION lib/${PROJECT_NAME}
)

# Si el paquete contiene código Python, descomenta la línea siguiente:
# ament_python_install_package(${PROJECT_NAME})

# Incluir los archivos Python en el entorno de ejecución
ament_package()

