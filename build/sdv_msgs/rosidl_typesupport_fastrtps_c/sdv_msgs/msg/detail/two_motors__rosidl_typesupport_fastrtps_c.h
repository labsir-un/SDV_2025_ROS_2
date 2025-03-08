// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from sdv_msgs:msg/TwoMotors.idl
// generated code does not contain a copyright notice
#ifndef SDV_MSGS__MSG__DETAIL__TWO_MOTORS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define SDV_MSGS__MSG__DETAIL__TWO_MOTORS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "sdv_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sdv_msgs/msg/detail/two_motors__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_msgs
bool cdr_serialize_sdv_msgs__msg__TwoMotors(
  const sdv_msgs__msg__TwoMotors * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_msgs
bool cdr_deserialize_sdv_msgs__msg__TwoMotors(
  eprosima::fastcdr::Cdr &,
  sdv_msgs__msg__TwoMotors * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_msgs
size_t get_serialized_size_sdv_msgs__msg__TwoMotors(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_msgs
size_t max_serialized_size_sdv_msgs__msg__TwoMotors(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_msgs
bool cdr_serialize_key_sdv_msgs__msg__TwoMotors(
  const sdv_msgs__msg__TwoMotors * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_msgs
size_t get_serialized_size_key_sdv_msgs__msg__TwoMotors(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_msgs
size_t max_serialized_size_key_sdv_msgs__msg__TwoMotors(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sdv_msgs, msg, TwoMotors)();

#ifdef __cplusplus
}
#endif

#endif  // SDV_MSGS__MSG__DETAIL__TWO_MOTORS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
