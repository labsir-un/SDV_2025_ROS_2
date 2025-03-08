// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sdv_msgs:msg/SdvStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "sdv_msgs/msg/detail/sdv_status__struct.h"
#include "sdv_msgs/msg/detail/sdv_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sdv_msgs__msg__sdv_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("sdv_msgs.msg._sdv_status.SdvStatus", full_classname_dest, 34) == 0);
  }
  sdv_msgs__msg__SdvStatus * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // energized
    PyObject * field = PyObject_GetAttrString(_pymsg, "energized");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->energized = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stand_by
    PyObject * field = PyObject_GetAttrString(_pymsg, "stand_by");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stand_by = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rotate
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotate");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rotate = (Py_True == field);
    Py_DECREF(field);
  }
  {  // turn_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_left");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->turn_left = (Py_True == field);
    Py_DECREF(field);
  }
  {  // turn_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->turn_right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reverse
    PyObject * field = PyObject_GetAttrString(_pymsg, "reverse");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reverse = (Py_True == field);
    Py_DECREF(field);
  }
  {  // forward
    PyObject * field = PyObject_GetAttrString(_pymsg, "forward");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->forward = (Py_True == field);
    Py_DECREF(field);
  }
  {  // low_batt
    PyObject * field = PyObject_GetAttrString(_pymsg, "low_batt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->low_batt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reset_pc
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_pc");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reset_pc = (Py_True == field);
    Py_DECREF(field);
  }
  {  // poweroff_pc
    PyObject * field = PyObject_GetAttrString(_pymsg, "poweroff_pc");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->poweroff_pc = (Py_True == field);
    Py_DECREF(field);
  }
  {  // obstacle_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->obstacle_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // over_load
    PyObject * field = PyObject_GetAttrString(_pymsg, "over_load");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->over_load = (Py_True == field);
    Py_DECREF(field);
  }
  {  // connection_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "connection_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->connection_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tag_disconnected
    PyObject * field = PyObject_GetAttrString(_pymsg, "tag_disconnected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tag_disconnected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tag_init
    PyObject * field = PyObject_GetAttrString(_pymsg, "tag_init");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tag_init = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tag_is_on_platform
    PyObject * field = PyObject_GetAttrString(_pymsg, "tag_is_on_platform");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tag_is_on_platform = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tag_read_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "tag_read_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tag_read_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tag_write_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "tag_write_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tag_write_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tag_close
    PyObject * field = PyObject_GetAttrString(_pymsg, "tag_close");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tag_close = (Py_True == field);
    Py_DECREF(field);
  }
  {  // not_connection_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "not_connection_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->not_connection_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // connection_error_imu
    PyObject * field = PyObject_GetAttrString(_pymsg, "connection_error_imu");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->connection_error_imu = (Py_True == field);
    Py_DECREF(field);
  }
  {  // connection_error_msp
    PyObject * field = PyObject_GetAttrString(_pymsg, "connection_error_msp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->connection_error_msp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // connection_error_rfid
    PyObject * field = PyObject_GetAttrString(_pymsg, "connection_error_rfid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->connection_error_rfid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // connection_error_ult
    PyObject * field = PyObject_GetAttrString(_pymsg, "connection_error_ult");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->connection_error_ult = (Py_True == field);
    Py_DECREF(field);
  }
  {  // connection_error_batt
    PyObject * field = PyObject_GetAttrString(_pymsg, "connection_error_batt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->connection_error_batt = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sdv_msgs__msg__sdv_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SdvStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sdv_msgs.msg._sdv_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SdvStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sdv_msgs__msg__SdvStatus * ros_message = (sdv_msgs__msg__SdvStatus *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // energized
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->energized ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "energized", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stand_by
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stand_by ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stand_by", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotate
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rotate ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_left
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->turn_left ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_right
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->turn_right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reverse
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reverse ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reverse", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // forward
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->forward ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "forward", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // low_batt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->low_batt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "low_batt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_pc
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reset_pc ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_pc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // poweroff_pc
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->poweroff_pc ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "poweroff_pc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->obstacle_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // over_load
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->over_load ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "over_load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connection_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->connection_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connection_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tag_disconnected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tag_disconnected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tag_disconnected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tag_init
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tag_init ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tag_init", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tag_is_on_platform
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tag_is_on_platform ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tag_is_on_platform", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tag_read_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tag_read_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tag_read_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tag_write_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tag_write_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tag_write_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tag_close
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tag_close ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tag_close", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // not_connection_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->not_connection_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "not_connection_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connection_error_imu
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->connection_error_imu ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connection_error_imu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connection_error_msp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->connection_error_msp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connection_error_msp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connection_error_rfid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->connection_error_rfid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connection_error_rfid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connection_error_ult
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->connection_error_ult ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connection_error_ult", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connection_error_batt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->connection_error_batt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connection_error_batt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
