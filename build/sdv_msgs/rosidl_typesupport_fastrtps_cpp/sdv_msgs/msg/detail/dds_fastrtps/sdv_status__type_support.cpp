// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sdv_msgs:msg/SdvStatus.idl
// generated code does not contain a copyright notice
#include "sdv_msgs/msg/detail/sdv_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sdv_msgs/msg/detail/sdv_status__functions.h"
#include "sdv_msgs/msg/detail/sdv_status__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_key_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace sdv_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_msgs
cdr_serialize(
  const sdv_msgs::msg::SdvStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: energized
  cdr << (ros_message.energized ? true : false);

  // Member: stand_by
  cdr << (ros_message.stand_by ? true : false);

  // Member: rotate
  cdr << (ros_message.rotate ? true : false);

  // Member: turn_left
  cdr << (ros_message.turn_left ? true : false);

  // Member: turn_right
  cdr << (ros_message.turn_right ? true : false);

  // Member: reverse
  cdr << (ros_message.reverse ? true : false);

  // Member: forward
  cdr << (ros_message.forward ? true : false);

  // Member: low_batt
  cdr << (ros_message.low_batt ? true : false);

  // Member: emergency_stop
  cdr << (ros_message.emergency_stop ? true : false);

  // Member: reset_pc
  cdr << (ros_message.reset_pc ? true : false);

  // Member: poweroff_pc
  cdr << (ros_message.poweroff_pc ? true : false);

  // Member: obstacle_stop
  cdr << (ros_message.obstacle_stop ? true : false);

  // Member: over_load
  cdr << (ros_message.over_load ? true : false);

  // Member: connection_error
  cdr << (ros_message.connection_error ? true : false);

  // Member: tag_disconnected
  cdr << (ros_message.tag_disconnected ? true : false);

  // Member: tag_init
  cdr << (ros_message.tag_init ? true : false);

  // Member: tag_is_on_platform
  cdr << (ros_message.tag_is_on_platform ? true : false);

  // Member: tag_read_error
  cdr << (ros_message.tag_read_error ? true : false);

  // Member: tag_write_error
  cdr << (ros_message.tag_write_error ? true : false);

  // Member: tag_close
  cdr << (ros_message.tag_close ? true : false);

  // Member: not_connection_error
  cdr << (ros_message.not_connection_error ? true : false);

  // Member: connection_error_imu
  cdr << (ros_message.connection_error_imu ? true : false);

  // Member: connection_error_msp
  cdr << (ros_message.connection_error_msp ? true : false);

  // Member: connection_error_rfid
  cdr << (ros_message.connection_error_rfid ? true : false);

  // Member: connection_error_ult
  cdr << (ros_message.connection_error_ult ? true : false);

  // Member: connection_error_batt
  cdr << (ros_message.connection_error_batt ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sdv_msgs::msg::SdvStatus & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: energized
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.energized = tmp ? true : false;
  }

  // Member: stand_by
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.stand_by = tmp ? true : false;
  }

  // Member: rotate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rotate = tmp ? true : false;
  }

  // Member: turn_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.turn_left = tmp ? true : false;
  }

  // Member: turn_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.turn_right = tmp ? true : false;
  }

  // Member: reverse
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reverse = tmp ? true : false;
  }

  // Member: forward
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.forward = tmp ? true : false;
  }

  // Member: low_batt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.low_batt = tmp ? true : false;
  }

  // Member: emergency_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.emergency_stop = tmp ? true : false;
  }

  // Member: reset_pc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reset_pc = tmp ? true : false;
  }

  // Member: poweroff_pc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.poweroff_pc = tmp ? true : false;
  }

  // Member: obstacle_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.obstacle_stop = tmp ? true : false;
  }

  // Member: over_load
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.over_load = tmp ? true : false;
  }

  // Member: connection_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.connection_error = tmp ? true : false;
  }

  // Member: tag_disconnected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tag_disconnected = tmp ? true : false;
  }

  // Member: tag_init
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tag_init = tmp ? true : false;
  }

  // Member: tag_is_on_platform
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tag_is_on_platform = tmp ? true : false;
  }

  // Member: tag_read_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tag_read_error = tmp ? true : false;
  }

  // Member: tag_write_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tag_write_error = tmp ? true : false;
  }

  // Member: tag_close
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tag_close = tmp ? true : false;
  }

  // Member: not_connection_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.not_connection_error = tmp ? true : false;
  }

  // Member: connection_error_imu
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.connection_error_imu = tmp ? true : false;
  }

  // Member: connection_error_msp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.connection_error_msp = tmp ? true : false;
  }

  // Member: connection_error_rfid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.connection_error_rfid = tmp ? true : false;
  }

  // Member: connection_error_ult
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.connection_error_ult = tmp ? true : false;
  }

  // Member: connection_error_batt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.connection_error_batt = tmp ? true : false;
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_msgs
get_serialized_size(
  const sdv_msgs::msg::SdvStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);

  // Member: energized
  {
    size_t item_size = sizeof(ros_message.energized);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: stand_by
  {
    size_t item_size = sizeof(ros_message.stand_by);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: rotate
  {
    size_t item_size = sizeof(ros_message.rotate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: turn_left
  {
    size_t item_size = sizeof(ros_message.turn_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: turn_right
  {
    size_t item_size = sizeof(ros_message.turn_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: reverse
  {
    size_t item_size = sizeof(ros_message.reverse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: forward
  {
    size_t item_size = sizeof(ros_message.forward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: low_batt
  {
    size_t item_size = sizeof(ros_message.low_batt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: emergency_stop
  {
    size_t item_size = sizeof(ros_message.emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: reset_pc
  {
    size_t item_size = sizeof(ros_message.reset_pc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: poweroff_pc
  {
    size_t item_size = sizeof(ros_message.poweroff_pc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: obstacle_stop
  {
    size_t item_size = sizeof(ros_message.obstacle_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: over_load
  {
    size_t item_size = sizeof(ros_message.over_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: connection_error
  {
    size_t item_size = sizeof(ros_message.connection_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tag_disconnected
  {
    size_t item_size = sizeof(ros_message.tag_disconnected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tag_init
  {
    size_t item_size = sizeof(ros_message.tag_init);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tag_is_on_platform
  {
    size_t item_size = sizeof(ros_message.tag_is_on_platform);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tag_read_error
  {
    size_t item_size = sizeof(ros_message.tag_read_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tag_write_error
  {
    size_t item_size = sizeof(ros_message.tag_write_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tag_close
  {
    size_t item_size = sizeof(ros_message.tag_close);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: not_connection_error
  {
    size_t item_size = sizeof(ros_message.not_connection_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: connection_error_imu
  {
    size_t item_size = sizeof(ros_message.connection_error_imu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: connection_error_msp
  {
    size_t item_size = sizeof(ros_message.connection_error_msp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: connection_error_rfid
  {
    size_t item_size = sizeof(ros_message.connection_error_rfid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: connection_error_ult
  {
    size_t item_size = sizeof(ros_message.connection_error_ult);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: connection_error_batt
  {
    size_t item_size = sizeof(ros_message.connection_error_batt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_msgs
max_serialized_size_SdvStatus(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: energized
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: stand_by
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: rotate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: turn_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: turn_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: reverse
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: forward
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: low_batt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: emergency_stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: reset_pc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: poweroff_pc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: obstacle_stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: over_load
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: connection_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: tag_disconnected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: tag_init
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: tag_is_on_platform
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: tag_read_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: tag_write_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: tag_close
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: not_connection_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: connection_error_imu
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: connection_error_msp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: connection_error_rfid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: connection_error_ult
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: connection_error_batt
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
    using DataType = sdv_msgs::msg::SdvStatus;
    is_plain =
      (
      offsetof(DataType, connection_error_batt) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_msgs
cdr_serialize_key(
  const sdv_msgs::msg::SdvStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: energized
  cdr << (ros_message.energized ? true : false);

  // Member: stand_by
  cdr << (ros_message.stand_by ? true : false);

  // Member: rotate
  cdr << (ros_message.rotate ? true : false);

  // Member: turn_left
  cdr << (ros_message.turn_left ? true : false);

  // Member: turn_right
  cdr << (ros_message.turn_right ? true : false);

  // Member: reverse
  cdr << (ros_message.reverse ? true : false);

  // Member: forward
  cdr << (ros_message.forward ? true : false);

  // Member: low_batt
  cdr << (ros_message.low_batt ? true : false);

  // Member: emergency_stop
  cdr << (ros_message.emergency_stop ? true : false);

  // Member: reset_pc
  cdr << (ros_message.reset_pc ? true : false);

  // Member: poweroff_pc
  cdr << (ros_message.poweroff_pc ? true : false);

  // Member: obstacle_stop
  cdr << (ros_message.obstacle_stop ? true : false);

  // Member: over_load
  cdr << (ros_message.over_load ? true : false);

  // Member: connection_error
  cdr << (ros_message.connection_error ? true : false);

  // Member: tag_disconnected
  cdr << (ros_message.tag_disconnected ? true : false);

  // Member: tag_init
  cdr << (ros_message.tag_init ? true : false);

  // Member: tag_is_on_platform
  cdr << (ros_message.tag_is_on_platform ? true : false);

  // Member: tag_read_error
  cdr << (ros_message.tag_read_error ? true : false);

  // Member: tag_write_error
  cdr << (ros_message.tag_write_error ? true : false);

  // Member: tag_close
  cdr << (ros_message.tag_close ? true : false);

  // Member: not_connection_error
  cdr << (ros_message.not_connection_error ? true : false);

  // Member: connection_error_imu
  cdr << (ros_message.connection_error_imu ? true : false);

  // Member: connection_error_msp
  cdr << (ros_message.connection_error_msp ? true : false);

  // Member: connection_error_rfid
  cdr << (ros_message.connection_error_rfid ? true : false);

  // Member: connection_error_ult
  cdr << (ros_message.connection_error_ult ? true : false);

  // Member: connection_error_batt
  cdr << (ros_message.connection_error_batt ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_msgs
get_serialized_size_key(
  const sdv_msgs::msg::SdvStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.header, current_alignment);

  // Member: energized
  {
    size_t item_size = sizeof(ros_message.energized);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: stand_by
  {
    size_t item_size = sizeof(ros_message.stand_by);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: rotate
  {
    size_t item_size = sizeof(ros_message.rotate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: turn_left
  {
    size_t item_size = sizeof(ros_message.turn_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: turn_right
  {
    size_t item_size = sizeof(ros_message.turn_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: reverse
  {
    size_t item_size = sizeof(ros_message.reverse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: forward
  {
    size_t item_size = sizeof(ros_message.forward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: low_batt
  {
    size_t item_size = sizeof(ros_message.low_batt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: emergency_stop
  {
    size_t item_size = sizeof(ros_message.emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: reset_pc
  {
    size_t item_size = sizeof(ros_message.reset_pc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: poweroff_pc
  {
    size_t item_size = sizeof(ros_message.poweroff_pc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: obstacle_stop
  {
    size_t item_size = sizeof(ros_message.obstacle_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: over_load
  {
    size_t item_size = sizeof(ros_message.over_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: connection_error
  {
    size_t item_size = sizeof(ros_message.connection_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tag_disconnected
  {
    size_t item_size = sizeof(ros_message.tag_disconnected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tag_init
  {
    size_t item_size = sizeof(ros_message.tag_init);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tag_is_on_platform
  {
    size_t item_size = sizeof(ros_message.tag_is_on_platform);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tag_read_error
  {
    size_t item_size = sizeof(ros_message.tag_read_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tag_write_error
  {
    size_t item_size = sizeof(ros_message.tag_write_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tag_close
  {
    size_t item_size = sizeof(ros_message.tag_close);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: not_connection_error
  {
    size_t item_size = sizeof(ros_message.not_connection_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: connection_error_imu
  {
    size_t item_size = sizeof(ros_message.connection_error_imu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: connection_error_msp
  {
    size_t item_size = sizeof(ros_message.connection_error_msp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: connection_error_rfid
  {
    size_t item_size = sizeof(ros_message.connection_error_rfid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: connection_error_ult
  {
    size_t item_size = sizeof(ros_message.connection_error_ult);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: connection_error_batt
  {
    size_t item_size = sizeof(ros_message.connection_error_batt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_msgs
max_serialized_size_key_SdvStatus(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: energized
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stand_by
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rotate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: turn_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: turn_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reverse
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: forward
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: low_batt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: emergency_stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reset_pc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: poweroff_pc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: obstacle_stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: over_load
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: connection_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tag_disconnected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tag_init
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tag_is_on_platform
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tag_read_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tag_write_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tag_close
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: not_connection_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: connection_error_imu
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: connection_error_msp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: connection_error_rfid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: connection_error_ult
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: connection_error_batt
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
    using DataType = sdv_msgs::msg::SdvStatus;
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
  auto typed_message =
    static_cast<const sdv_msgs::msg::SdvStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SdvStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sdv_msgs::msg::SdvStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SdvStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sdv_msgs::msg::SdvStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SdvStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SdvStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SdvStatus__callbacks = {
  "sdv_msgs::msg",
  "SdvStatus",
  _SdvStatus__cdr_serialize,
  _SdvStatus__cdr_deserialize,
  _SdvStatus__get_serialized_size,
  _SdvStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SdvStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SdvStatus__callbacks,
  get_message_typesupport_handle_function,
  &sdv_msgs__msg__SdvStatus__get_type_hash,
  &sdv_msgs__msg__SdvStatus__get_type_description,
  &sdv_msgs__msg__SdvStatus__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sdv_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sdv_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<sdv_msgs::msg::SdvStatus>()
{
  return &sdv_msgs::msg::typesupport_fastrtps_cpp::_SdvStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sdv_msgs, msg, SdvStatus)() {
  return &sdv_msgs::msg::typesupport_fastrtps_cpp::_SdvStatus__handle;
}

#ifdef __cplusplus
}
#endif
