// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sdv_msgs:msg/SdvStatus.idl
// generated code does not contain a copyright notice
#include "sdv_msgs/msg/detail/sdv_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sdv_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sdv_msgs/msg/detail/sdv_status__struct.h"
#include "sdv_msgs/msg/detail/sdv_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sdv_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sdv_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sdv_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sdv_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sdv_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sdv_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sdv_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sdv_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _SdvStatus__ros_msg_type = sdv_msgs__msg__SdvStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_msgs
bool cdr_serialize_sdv_msgs__msg__SdvStatus(
  const sdv_msgs__msg__SdvStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: energized
  {
    cdr << (ros_message->energized ? true : false);
  }

  // Field name: stand_by
  {
    cdr << (ros_message->stand_by ? true : false);
  }

  // Field name: rotate
  {
    cdr << (ros_message->rotate ? true : false);
  }

  // Field name: turn_left
  {
    cdr << (ros_message->turn_left ? true : false);
  }

  // Field name: turn_right
  {
    cdr << (ros_message->turn_right ? true : false);
  }

  // Field name: reverse
  {
    cdr << (ros_message->reverse ? true : false);
  }

  // Field name: forward
  {
    cdr << (ros_message->forward ? true : false);
  }

  // Field name: low_batt
  {
    cdr << (ros_message->low_batt ? true : false);
  }

  // Field name: emergency_stop
  {
    cdr << (ros_message->emergency_stop ? true : false);
  }

  // Field name: reset_pc
  {
    cdr << (ros_message->reset_pc ? true : false);
  }

  // Field name: poweroff_pc
  {
    cdr << (ros_message->poweroff_pc ? true : false);
  }

  // Field name: obstacle_stop
  {
    cdr << (ros_message->obstacle_stop ? true : false);
  }

  // Field name: over_load
  {
    cdr << (ros_message->over_load ? true : false);
  }

  // Field name: connection_error
  {
    cdr << (ros_message->connection_error ? true : false);
  }

  // Field name: tag_disconnected
  {
    cdr << (ros_message->tag_disconnected ? true : false);
  }

  // Field name: tag_init
  {
    cdr << (ros_message->tag_init ? true : false);
  }

  // Field name: tag_is_on_platform
  {
    cdr << (ros_message->tag_is_on_platform ? true : false);
  }

  // Field name: tag_read_error
  {
    cdr << (ros_message->tag_read_error ? true : false);
  }

  // Field name: tag_write_error
  {
    cdr << (ros_message->tag_write_error ? true : false);
  }

  // Field name: tag_close
  {
    cdr << (ros_message->tag_close ? true : false);
  }

  // Field name: not_connection_error
  {
    cdr << (ros_message->not_connection_error ? true : false);
  }

  // Field name: connection_error_imu
  {
    cdr << (ros_message->connection_error_imu ? true : false);
  }

  // Field name: connection_error_msp
  {
    cdr << (ros_message->connection_error_msp ? true : false);
  }

  // Field name: connection_error_rfid
  {
    cdr << (ros_message->connection_error_rfid ? true : false);
  }

  // Field name: connection_error_ult
  {
    cdr << (ros_message->connection_error_ult ? true : false);
  }

  // Field name: connection_error_batt
  {
    cdr << (ros_message->connection_error_batt ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_msgs
bool cdr_deserialize_sdv_msgs__msg__SdvStatus(
  eprosima::fastcdr::Cdr & cdr,
  sdv_msgs__msg__SdvStatus * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: energized
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->energized = tmp ? true : false;
  }

  // Field name: stand_by
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stand_by = tmp ? true : false;
  }

  // Field name: rotate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rotate = tmp ? true : false;
  }

  // Field name: turn_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->turn_left = tmp ? true : false;
  }

  // Field name: turn_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->turn_right = tmp ? true : false;
  }

  // Field name: reverse
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reverse = tmp ? true : false;
  }

  // Field name: forward
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->forward = tmp ? true : false;
  }

  // Field name: low_batt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->low_batt = tmp ? true : false;
  }

  // Field name: emergency_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->emergency_stop = tmp ? true : false;
  }

  // Field name: reset_pc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_pc = tmp ? true : false;
  }

  // Field name: poweroff_pc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->poweroff_pc = tmp ? true : false;
  }

  // Field name: obstacle_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->obstacle_stop = tmp ? true : false;
  }

  // Field name: over_load
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->over_load = tmp ? true : false;
  }

  // Field name: connection_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->connection_error = tmp ? true : false;
  }

  // Field name: tag_disconnected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tag_disconnected = tmp ? true : false;
  }

  // Field name: tag_init
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tag_init = tmp ? true : false;
  }

  // Field name: tag_is_on_platform
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tag_is_on_platform = tmp ? true : false;
  }

  // Field name: tag_read_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tag_read_error = tmp ? true : false;
  }

  // Field name: tag_write_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tag_write_error = tmp ? true : false;
  }

  // Field name: tag_close
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tag_close = tmp ? true : false;
  }

  // Field name: not_connection_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->not_connection_error = tmp ? true : false;
  }

  // Field name: connection_error_imu
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->connection_error_imu = tmp ? true : false;
  }

  // Field name: connection_error_msp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->connection_error_msp = tmp ? true : false;
  }

  // Field name: connection_error_rfid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->connection_error_rfid = tmp ? true : false;
  }

  // Field name: connection_error_ult
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->connection_error_ult = tmp ? true : false;
  }

  // Field name: connection_error_batt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->connection_error_batt = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_msgs
size_t get_serialized_size_sdv_msgs__msg__SdvStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SdvStatus__ros_msg_type * ros_message = static_cast<const _SdvStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: energized
  {
    size_t item_size = sizeof(ros_message->energized);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: stand_by
  {
    size_t item_size = sizeof(ros_message->stand_by);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rotate
  {
    size_t item_size = sizeof(ros_message->rotate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: turn_left
  {
    size_t item_size = sizeof(ros_message->turn_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: turn_right
  {
    size_t item_size = sizeof(ros_message->turn_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reverse
  {
    size_t item_size = sizeof(ros_message->reverse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: forward
  {
    size_t item_size = sizeof(ros_message->forward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: low_batt
  {
    size_t item_size = sizeof(ros_message->low_batt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: emergency_stop
  {
    size_t item_size = sizeof(ros_message->emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reset_pc
  {
    size_t item_size = sizeof(ros_message->reset_pc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: poweroff_pc
  {
    size_t item_size = sizeof(ros_message->poweroff_pc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: obstacle_stop
  {
    size_t item_size = sizeof(ros_message->obstacle_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: over_load
  {
    size_t item_size = sizeof(ros_message->over_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: connection_error
  {
    size_t item_size = sizeof(ros_message->connection_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_disconnected
  {
    size_t item_size = sizeof(ros_message->tag_disconnected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_init
  {
    size_t item_size = sizeof(ros_message->tag_init);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_is_on_platform
  {
    size_t item_size = sizeof(ros_message->tag_is_on_platform);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_read_error
  {
    size_t item_size = sizeof(ros_message->tag_read_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_write_error
  {
    size_t item_size = sizeof(ros_message->tag_write_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_close
  {
    size_t item_size = sizeof(ros_message->tag_close);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: not_connection_error
  {
    size_t item_size = sizeof(ros_message->not_connection_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: connection_error_imu
  {
    size_t item_size = sizeof(ros_message->connection_error_imu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: connection_error_msp
  {
    size_t item_size = sizeof(ros_message->connection_error_msp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: connection_error_rfid
  {
    size_t item_size = sizeof(ros_message->connection_error_rfid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: connection_error_ult
  {
    size_t item_size = sizeof(ros_message->connection_error_ult);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: connection_error_batt
  {
    size_t item_size = sizeof(ros_message->connection_error_batt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_msgs
size_t max_serialized_size_sdv_msgs__msg__SdvStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: energized
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: stand_by
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: rotate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: turn_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: turn_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: reverse
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: forward
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: low_batt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: emergency_stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: reset_pc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: poweroff_pc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: obstacle_stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: over_load
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: connection_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tag_disconnected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tag_init
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tag_is_on_platform
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tag_read_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tag_write_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tag_close
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: not_connection_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: connection_error_imu
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: connection_error_msp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: connection_error_rfid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: connection_error_ult
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: connection_error_batt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sdv_msgs__msg__SdvStatus;
    is_plain =
      (
      offsetof(DataType, connection_error_batt) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_msgs
bool cdr_serialize_key_sdv_msgs__msg__SdvStatus(
  const sdv_msgs__msg__SdvStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: energized
  {
    cdr << (ros_message->energized ? true : false);
  }

  // Field name: stand_by
  {
    cdr << (ros_message->stand_by ? true : false);
  }

  // Field name: rotate
  {
    cdr << (ros_message->rotate ? true : false);
  }

  // Field name: turn_left
  {
    cdr << (ros_message->turn_left ? true : false);
  }

  // Field name: turn_right
  {
    cdr << (ros_message->turn_right ? true : false);
  }

  // Field name: reverse
  {
    cdr << (ros_message->reverse ? true : false);
  }

  // Field name: forward
  {
    cdr << (ros_message->forward ? true : false);
  }

  // Field name: low_batt
  {
    cdr << (ros_message->low_batt ? true : false);
  }

  // Field name: emergency_stop
  {
    cdr << (ros_message->emergency_stop ? true : false);
  }

  // Field name: reset_pc
  {
    cdr << (ros_message->reset_pc ? true : false);
  }

  // Field name: poweroff_pc
  {
    cdr << (ros_message->poweroff_pc ? true : false);
  }

  // Field name: obstacle_stop
  {
    cdr << (ros_message->obstacle_stop ? true : false);
  }

  // Field name: over_load
  {
    cdr << (ros_message->over_load ? true : false);
  }

  // Field name: connection_error
  {
    cdr << (ros_message->connection_error ? true : false);
  }

  // Field name: tag_disconnected
  {
    cdr << (ros_message->tag_disconnected ? true : false);
  }

  // Field name: tag_init
  {
    cdr << (ros_message->tag_init ? true : false);
  }

  // Field name: tag_is_on_platform
  {
    cdr << (ros_message->tag_is_on_platform ? true : false);
  }

  // Field name: tag_read_error
  {
    cdr << (ros_message->tag_read_error ? true : false);
  }

  // Field name: tag_write_error
  {
    cdr << (ros_message->tag_write_error ? true : false);
  }

  // Field name: tag_close
  {
    cdr << (ros_message->tag_close ? true : false);
  }

  // Field name: not_connection_error
  {
    cdr << (ros_message->not_connection_error ? true : false);
  }

  // Field name: connection_error_imu
  {
    cdr << (ros_message->connection_error_imu ? true : false);
  }

  // Field name: connection_error_msp
  {
    cdr << (ros_message->connection_error_msp ? true : false);
  }

  // Field name: connection_error_rfid
  {
    cdr << (ros_message->connection_error_rfid ? true : false);
  }

  // Field name: connection_error_ult
  {
    cdr << (ros_message->connection_error_ult ? true : false);
  }

  // Field name: connection_error_batt
  {
    cdr << (ros_message->connection_error_batt ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_msgs
size_t get_serialized_size_key_sdv_msgs__msg__SdvStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SdvStatus__ros_msg_type * ros_message = static_cast<const _SdvStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: energized
  {
    size_t item_size = sizeof(ros_message->energized);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: stand_by
  {
    size_t item_size = sizeof(ros_message->stand_by);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rotate
  {
    size_t item_size = sizeof(ros_message->rotate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: turn_left
  {
    size_t item_size = sizeof(ros_message->turn_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: turn_right
  {
    size_t item_size = sizeof(ros_message->turn_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reverse
  {
    size_t item_size = sizeof(ros_message->reverse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: forward
  {
    size_t item_size = sizeof(ros_message->forward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: low_batt
  {
    size_t item_size = sizeof(ros_message->low_batt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: emergency_stop
  {
    size_t item_size = sizeof(ros_message->emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reset_pc
  {
    size_t item_size = sizeof(ros_message->reset_pc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: poweroff_pc
  {
    size_t item_size = sizeof(ros_message->poweroff_pc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: obstacle_stop
  {
    size_t item_size = sizeof(ros_message->obstacle_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: over_load
  {
    size_t item_size = sizeof(ros_message->over_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: connection_error
  {
    size_t item_size = sizeof(ros_message->connection_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_disconnected
  {
    size_t item_size = sizeof(ros_message->tag_disconnected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_init
  {
    size_t item_size = sizeof(ros_message->tag_init);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_is_on_platform
  {
    size_t item_size = sizeof(ros_message->tag_is_on_platform);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_read_error
  {
    size_t item_size = sizeof(ros_message->tag_read_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_write_error
  {
    size_t item_size = sizeof(ros_message->tag_write_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_close
  {
    size_t item_size = sizeof(ros_message->tag_close);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: not_connection_error
  {
    size_t item_size = sizeof(ros_message->not_connection_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: connection_error_imu
  {
    size_t item_size = sizeof(ros_message->connection_error_imu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: connection_error_msp
  {
    size_t item_size = sizeof(ros_message->connection_error_msp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: connection_error_rfid
  {
    size_t item_size = sizeof(ros_message->connection_error_rfid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: connection_error_ult
  {
    size_t item_size = sizeof(ros_message->connection_error_ult);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: connection_error_batt
  {
    size_t item_size = sizeof(ros_message->connection_error_batt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_msgs
size_t max_serialized_size_key_sdv_msgs__msg__SdvStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: energized
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: stand_by
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: rotate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: turn_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: turn_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: reverse
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: forward
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: low_batt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: emergency_stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: reset_pc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: poweroff_pc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: obstacle_stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: over_load
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: connection_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tag_disconnected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tag_init
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tag_is_on_platform
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tag_read_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tag_write_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tag_close
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: not_connection_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: connection_error_imu
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: connection_error_msp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: connection_error_rfid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: connection_error_ult
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: connection_error_batt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sdv_msgs__msg__SdvStatus;
    is_plain =
      (
      offsetof(DataType, connection_error_batt) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SdvStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const sdv_msgs__msg__SdvStatus * ros_message = static_cast<const sdv_msgs__msg__SdvStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_sdv_msgs__msg__SdvStatus(ros_message, cdr);
}

static bool _SdvStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  sdv_msgs__msg__SdvStatus * ros_message = static_cast<sdv_msgs__msg__SdvStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_sdv_msgs__msg__SdvStatus(cdr, ros_message);
}

static uint32_t _SdvStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sdv_msgs__msg__SdvStatus(
      untyped_ros_message, 0));
}

static size_t _SdvStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sdv_msgs__msg__SdvStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SdvStatus = {
  "sdv_msgs::msg",
  "SdvStatus",
  _SdvStatus__cdr_serialize,
  _SdvStatus__cdr_deserialize,
  _SdvStatus__get_serialized_size,
  _SdvStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SdvStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SdvStatus,
  get_message_typesupport_handle_function,
  &sdv_msgs__msg__SdvStatus__get_type_hash,
  &sdv_msgs__msg__SdvStatus__get_type_description,
  &sdv_msgs__msg__SdvStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sdv_msgs, msg, SdvStatus)() {
  return &_SdvStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
