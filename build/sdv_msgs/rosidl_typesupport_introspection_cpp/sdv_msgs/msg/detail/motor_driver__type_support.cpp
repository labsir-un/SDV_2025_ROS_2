// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sdv_msgs:msg/MotorDriver.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sdv_msgs/msg/detail/motor_driver__functions.h"
#include "sdv_msgs/msg/detail/motor_driver__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sdv_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorDriver_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sdv_msgs::msg::MotorDriver(_init);
}

void MotorDriver_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sdv_msgs::msg::MotorDriver *>(message_memory);
  typed_message->~MotorDriver();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorDriver_message_member_array[3] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_msgs::msg::MotorDriver, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_msgs::msg::MotorDriver, current),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "driver_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_msgs::msg::MotorDriver, driver_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorDriver_message_members = {
  "sdv_msgs::msg",  // message namespace
  "MotorDriver",  // message name
  3,  // number of fields
  sizeof(sdv_msgs::msg::MotorDriver),
  false,  // has_any_key_member_
  MotorDriver_message_member_array,  // message members
  MotorDriver_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorDriver_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorDriver_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorDriver_message_members,
  get_message_typesupport_handle_function,
  &sdv_msgs__msg__MotorDriver__get_type_hash,
  &sdv_msgs__msg__MotorDriver__get_type_description,
  &sdv_msgs__msg__MotorDriver__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sdv_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sdv_msgs::msg::MotorDriver>()
{
  return &::sdv_msgs::msg::rosidl_typesupport_introspection_cpp::MotorDriver_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sdv_msgs, msg, MotorDriver)() {
  return &::sdv_msgs::msg::rosidl_typesupport_introspection_cpp::MotorDriver_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
