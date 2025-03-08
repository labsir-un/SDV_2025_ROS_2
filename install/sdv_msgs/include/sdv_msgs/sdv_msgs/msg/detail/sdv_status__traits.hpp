// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdv_msgs:msg/SdvStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/sdv_status.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__SDV_STATUS__TRAITS_HPP_
#define SDV_MSGS__MSG__DETAIL__SDV_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdv_msgs/msg/detail/sdv_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sdv_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SdvStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: energized
  {
    out << "energized: ";
    rosidl_generator_traits::value_to_yaml(msg.energized, out);
    out << ", ";
  }

  // member: stand_by
  {
    out << "stand_by: ";
    rosidl_generator_traits::value_to_yaml(msg.stand_by, out);
    out << ", ";
  }

  // member: rotate
  {
    out << "rotate: ";
    rosidl_generator_traits::value_to_yaml(msg.rotate, out);
    out << ", ";
  }

  // member: turn_left
  {
    out << "turn_left: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_left, out);
    out << ", ";
  }

  // member: turn_right
  {
    out << "turn_right: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_right, out);
    out << ", ";
  }

  // member: reverse
  {
    out << "reverse: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse, out);
    out << ", ";
  }

  // member: forward
  {
    out << "forward: ";
    rosidl_generator_traits::value_to_yaml(msg.forward, out);
    out << ", ";
  }

  // member: low_batt
  {
    out << "low_batt: ";
    rosidl_generator_traits::value_to_yaml(msg.low_batt, out);
    out << ", ";
  }

  // member: emergency_stop
  {
    out << "emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop, out);
    out << ", ";
  }

  // member: reset_pc
  {
    out << "reset_pc: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_pc, out);
    out << ", ";
  }

  // member: poweroff_pc
  {
    out << "poweroff_pc: ";
    rosidl_generator_traits::value_to_yaml(msg.poweroff_pc, out);
    out << ", ";
  }

  // member: obstacle_stop
  {
    out << "obstacle_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_stop, out);
    out << ", ";
  }

  // member: over_load
  {
    out << "over_load: ";
    rosidl_generator_traits::value_to_yaml(msg.over_load, out);
    out << ", ";
  }

  // member: connection_error
  {
    out << "connection_error: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_error, out);
    out << ", ";
  }

  // member: tag_disconnected
  {
    out << "tag_disconnected: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_disconnected, out);
    out << ", ";
  }

  // member: tag_init
  {
    out << "tag_init: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_init, out);
    out << ", ";
  }

  // member: tag_is_on_platform
  {
    out << "tag_is_on_platform: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_is_on_platform, out);
    out << ", ";
  }

  // member: tag_read_error
  {
    out << "tag_read_error: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_read_error, out);
    out << ", ";
  }

  // member: tag_write_error
  {
    out << "tag_write_error: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_write_error, out);
    out << ", ";
  }

  // member: tag_close
  {
    out << "tag_close: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_close, out);
    out << ", ";
  }

  // member: not_connection_error
  {
    out << "not_connection_error: ";
    rosidl_generator_traits::value_to_yaml(msg.not_connection_error, out);
    out << ", ";
  }

  // member: connection_error_imu
  {
    out << "connection_error_imu: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_error_imu, out);
    out << ", ";
  }

  // member: connection_error_msp
  {
    out << "connection_error_msp: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_error_msp, out);
    out << ", ";
  }

  // member: connection_error_rfid
  {
    out << "connection_error_rfid: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_error_rfid, out);
    out << ", ";
  }

  // member: connection_error_ult
  {
    out << "connection_error_ult: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_error_ult, out);
    out << ", ";
  }

  // member: connection_error_batt
  {
    out << "connection_error_batt: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_error_batt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SdvStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: energized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "energized: ";
    rosidl_generator_traits::value_to_yaml(msg.energized, out);
    out << "\n";
  }

  // member: stand_by
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stand_by: ";
    rosidl_generator_traits::value_to_yaml(msg.stand_by, out);
    out << "\n";
  }

  // member: rotate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotate: ";
    rosidl_generator_traits::value_to_yaml(msg.rotate, out);
    out << "\n";
  }

  // member: turn_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_left: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_left, out);
    out << "\n";
  }

  // member: turn_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_right: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_right, out);
    out << "\n";
  }

  // member: reverse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reverse: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse, out);
    out << "\n";
  }

  // member: forward
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forward: ";
    rosidl_generator_traits::value_to_yaml(msg.forward, out);
    out << "\n";
  }

  // member: low_batt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_batt: ";
    rosidl_generator_traits::value_to_yaml(msg.low_batt, out);
    out << "\n";
  }

  // member: emergency_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop, out);
    out << "\n";
  }

  // member: reset_pc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_pc: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_pc, out);
    out << "\n";
  }

  // member: poweroff_pc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poweroff_pc: ";
    rosidl_generator_traits::value_to_yaml(msg.poweroff_pc, out);
    out << "\n";
  }

  // member: obstacle_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_stop, out);
    out << "\n";
  }

  // member: over_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "over_load: ";
    rosidl_generator_traits::value_to_yaml(msg.over_load, out);
    out << "\n";
  }

  // member: connection_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection_error: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_error, out);
    out << "\n";
  }

  // member: tag_disconnected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tag_disconnected: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_disconnected, out);
    out << "\n";
  }

  // member: tag_init
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tag_init: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_init, out);
    out << "\n";
  }

  // member: tag_is_on_platform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tag_is_on_platform: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_is_on_platform, out);
    out << "\n";
  }

  // member: tag_read_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tag_read_error: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_read_error, out);
    out << "\n";
  }

  // member: tag_write_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tag_write_error: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_write_error, out);
    out << "\n";
  }

  // member: tag_close
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tag_close: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_close, out);
    out << "\n";
  }

  // member: not_connection_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "not_connection_error: ";
    rosidl_generator_traits::value_to_yaml(msg.not_connection_error, out);
    out << "\n";
  }

  // member: connection_error_imu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection_error_imu: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_error_imu, out);
    out << "\n";
  }

  // member: connection_error_msp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection_error_msp: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_error_msp, out);
    out << "\n";
  }

  // member: connection_error_rfid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection_error_rfid: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_error_rfid, out);
    out << "\n";
  }

  // member: connection_error_ult
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection_error_ult: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_error_ult, out);
    out << "\n";
  }

  // member: connection_error_batt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection_error_batt: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_error_batt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SdvStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sdv_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sdv_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sdv_msgs::msg::SdvStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdv_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdv_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdv_msgs::msg::SdvStatus & msg)
{
  return sdv_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdv_msgs::msg::SdvStatus>()
{
  return "sdv_msgs::msg::SdvStatus";
}

template<>
inline const char * name<sdv_msgs::msg::SdvStatus>()
{
  return "sdv_msgs/msg/SdvStatus";
}

template<>
struct has_fixed_size<sdv_msgs::msg::SdvStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sdv_msgs::msg::SdvStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sdv_msgs::msg::SdvStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDV_MSGS__MSG__DETAIL__SDV_STATUS__TRAITS_HPP_
