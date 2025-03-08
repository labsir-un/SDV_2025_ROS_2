# SDV-UN
## Instalación de dependencias para la migración a ROS 2 Jazzy

### 1. Requisitos previos

Antes de continuar con la instalación de dependencias, asegúrate de contar con:
- Un disco o partición con **Ubuntu 24** y **ROS 2 Jazzy** instalados.
- Al menos **40 GB de espacio libre** para acomodar Ubuntu, ROS 2 Jazzy y las librerías necesarias.

### 2. Instalación de paquetes mediante `apt`

Ejecuta el siguiente comando para instalar las librerías necesarias:

```sh
sudo apt update && sudo apt install -y \
    ros-jazzy-nav2-map-server \
    ros-jazzy-nav2-bringup \
    ros-jazzy-nav2-amcl \
    ros-jazzy-rosbridge-server \
    ros-jazzy-robot-localization \
    ros-jazzy-slam-toolbox \
    ros-jazzy-imu-complementary-filter \
    ros-jazzy-serial-driver \
    ros-jazzy-nav2-planner \
    ros-jazzy-rtabmap-ros \
    ros-jazzy-imu-tools \
    ros-jazzy-nav2-regulated-pure-pursuit-controller\
    ros-jazzy-sick-scan-xd
```
### 3. Verificación de instalación

Para verificar que los paquetes se instalaron correctamente, usa el siguiente comando:

Si algún paquete falta, intenta reinstalarlo o verifica que el repositorio de ROS 2 está correctamente configurado en tu sistema.

```sh
ros2 pkg list | grep -E "(nav2|slam|sick|imu|robot|rosbridge)"
```
### 4. Configuración del workspace

Después de instalar las dependencias, sigue estos pasos:

1. **Descargar la carpeta `src`** del repositorio.
2. **Colocar la carpeta `src` en tu workspace de ROS 2**, asegurándote de que la estructura de archivos sea correcta.
3. **Verificar el archivo de parámetros YAML** en `sdv_nav/`, asegurándote de que corresponda al SDV que estás utilizando.
4. **Implementar el archivo de configuración de red**
   Esto se hace Creando un archivo "/etc/netplan folder named “01-netcfg.yaml”. Use next command:
```sh
    sudo vim /etc/netplan/01-netcfg.yaml
```
Introduciendo el siguiente código como el contenido. La contraseña es la contraseña que corresponde a la red local LabFabEx:
```sh

network:
version: 2
renderer: networkd
ethernets:
   eno1:
      dhcp4: no
      addresses:
      - 192.168.0.158/24
      optional: true
      routes:
      - to: 192.168.0.0/24
         via: 192.168.0.1
         metric: 100
         on-link: true
wifis:
   wlp2s0:
      dhcp4: yes
      access-points:
      "LabFabEx":
         password: "<password_here>"
      gateway4: 192.168.1.1
```
Guardar el archivo y aplicar configuración al sistema:
```sh
    sudo netplan apply
```


5. **Compilar el workspace** con el siguiente comando:

```sh
colcon build
```
Hacer source del nuevo install para actualizar el entorno:
```sh
source install/setup.bash
```
### 5. Ejecución del entorno del SDV
Para lanzar el entorno del SDV, utiliza el siguiente comando:

```sh
ros2 launch sdv_process process_launch.py
```

El archivo de implementación del SDV es uno de los scripts dentro de la carpeta `sdv_scripts`, por lo que se debe verificar que el script correspondiente esté correctamente configurado antes de utilizar el SDV.


---

# SDV-UN
