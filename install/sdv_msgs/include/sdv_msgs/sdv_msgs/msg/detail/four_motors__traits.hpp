// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdv_msgs:msg/FourMotors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/four_motors.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__FOUR_MOTORS__TRAITS_HPP_
#define SDV_MSGS__MSG__DETAIL__FOUR_MOTORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdv_msgs/msg/detail/four_motors__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sdv_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FourMotors & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: back_left_rps
  {
    out << "back_left_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.back_left_rps, out);
    out << ", ";
  }

  // member: back_right_rps
  {
    out << "back_right_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.back_right_rps, out);
    out << ", ";
  }

  // member: front_left_rps
  {
    out << "front_left_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_rps, out);
    out << ", ";
  }

  // member: front_right_rps
  {
    out << "front_right_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_rps, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FourMotors & msg,
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

  // member: back_left_rps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back_left_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.back_left_rps, out);
    out << "\n";
  }

  // member: back_right_rps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back_right_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.back_right_rps, out);
    out << "\n";
  }

  // member: front_left_rps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_left_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_rps, out);
    out << "\n";
  }

  // member: front_right_rps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_rps, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FourMotors & msg, bool use_flow_style = false)
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
  const sdv_msgs::msg::FourMotors & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdv_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdv_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdv_msgs::msg::FourMotors & msg)
{
  return sdv_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdv_msgs::msg::FourMotors>()
{
  return "sdv_msgs::msg::FourMotors";
}

template<>
inline const char * name<sdv_msgs::msg::FourMotors>()
{
  return "sdv_msgs/msg/FourMotors";
}

template<>
struct has_fixed_size<sdv_msgs::msg::FourMotors>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sdv_msgs::msg::FourMotors>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sdv_msgs::msg::FourMotors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDV_MSGS__MSG__DETAIL__FOUR_MOTORS__TRAITS_HPP_
