// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdv_msgs:msg/MotorDriver.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/motor_driver.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__MOTOR_DRIVER__TRAITS_HPP_
#define SDV_MSGS__MSG__DETAIL__MOTOR_DRIVER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdv_msgs/msg/detail/motor_driver__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sdv_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorDriver & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << ", ";
  }

  // member: driver_status
  {
    out << "driver_status: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorDriver & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }

  // member: driver_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_status: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorDriver & msg, bool use_flow_style = false)
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
  const sdv_msgs::msg::MotorDriver & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdv_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdv_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdv_msgs::msg::MotorDriver & msg)
{
  return sdv_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdv_msgs::msg::MotorDriver>()
{
  return "sdv_msgs::msg::MotorDriver";
}

template<>
inline const char * name<sdv_msgs::msg::MotorDriver>()
{
  return "sdv_msgs/msg/MotorDriver";
}

template<>
struct has_fixed_size<sdv_msgs::msg::MotorDriver>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sdv_msgs::msg::MotorDriver>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sdv_msgs::msg::MotorDriver>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDV_MSGS__MSG__DETAIL__MOTOR_DRIVER__TRAITS_HPP_
