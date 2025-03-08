// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sdv_scripts:msg/Udp.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sdv_scripts/msg/detail/udp__functions.h"
#include "sdv_scripts/msg/detail/udp__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sdv_scripts
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Udp_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sdv_scripts::msg::Udp(_init);
}

void Udp_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sdv_scripts::msg::Udp *>(message_memory);
  typed_message->~Udp();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Udp_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_scripts::msg::Udp, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "content",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_scripts::msg::Udp, content),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Udp_message_members = {
  "sdv_scripts::msg",  // message namespace
  "Udp",  // message name
  2,  // number of fields
  sizeof(sdv_scripts::msg::Udp),
  false,  // has_any_key_member_
  Udp_message_member_array,  // message members
  Udp_init_function,  // function to initialize message memory (memory has to be allocated)
  Udp_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Udp_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Udp_message_members,
  get_message_typesupport_handle_function,
  &sdv_scripts__msg__Udp__get_type_hash,
  &sdv_scripts__msg__Udp__get_type_description,
  &sdv_scripts__msg__Udp__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sdv_scripts


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sdv_scripts::msg::Udp>()
{
  return &::sdv_scripts::msg::rosidl_typesupport_introspection_cpp::Udp_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sdv_scripts, msg, Udp)() {
  return &::sdv_scripts::msg::rosidl_typesupport_introspection_cpp::Udp_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
