// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sdv_msgs:msg/Battery.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sdv_msgs/msg/detail/battery__functions.h"
#include "sdv_msgs/msg/detail/battery__struct.hpp"
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

void Battery_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sdv_msgs::msg::Battery(_init);
}

void Battery_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sdv_msgs::msg::Battery *>(message_memory);
  typed_message->~Battery();
}

size_t size_function__Battery__cell_voltages(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Battery__cell_voltages(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Battery__cell_voltages(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Battery__cell_voltages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Battery__cell_voltages(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Battery__cell_voltages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Battery__cell_voltages(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Battery__cell_voltages(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Battery_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_msgs::msg::Battery, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cell_voltages",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_msgs::msg::Battery, cell_voltages),  // bytes offset in struct
    nullptr,  // default value
    size_function__Battery__cell_voltages,  // size() function pointer
    get_const_function__Battery__cell_voltages,  // get_const(index) function pointer
    get_function__Battery__cell_voltages,  // get(index) function pointer
    fetch_function__Battery__cell_voltages,  // fetch(index, &value) function pointer
    assign_function__Battery__cell_voltages,  // assign(index, value) function pointer
    resize_function__Battery__cell_voltages  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Battery_message_members = {
  "sdv_msgs::msg",  // message namespace
  "Battery",  // message name
  2,  // number of fields
  sizeof(sdv_msgs::msg::Battery),
  false,  // has_any_key_member_
  Battery_message_member_array,  // message members
  Battery_init_function,  // function to initialize message memory (memory has to be allocated)
  Battery_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Battery_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Battery_message_members,
  get_message_typesupport_handle_function,
  &sdv_msgs__msg__Battery__get_type_hash,
  &sdv_msgs__msg__Battery__get_type_description,
  &sdv_msgs__msg__Battery__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sdv_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sdv_msgs::msg::Battery>()
{
  return &::sdv_msgs::msg::rosidl_typesupport_introspection_cpp::Battery_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sdv_msgs, msg, Battery)() {
  return &::sdv_msgs::msg::rosidl_typesupport_introspection_cpp::Battery_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
