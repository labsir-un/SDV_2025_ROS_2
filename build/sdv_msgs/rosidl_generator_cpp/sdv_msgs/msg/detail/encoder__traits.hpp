// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdv_msgs:msg/Encoder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/encoder.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__ENCODER__TRAITS_HPP_
#define SDV_MSGS__MSG__DETAIL__ENCODER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdv_msgs/msg/detail/encoder__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sdv_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Encoder & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: rpm_left
  {
    out << "rpm_left: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm_left, out);
    out << ", ";
  }

  // member: rpm_right
  {
    out << "rpm_right: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm_right, out);
    out << ", ";
  }

  // member: motor_current_left
  {
    out << "motor_current_left: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_current_left, out);
    out << ", ";
  }

  // member: motor_current_right
  {
    out << "motor_current_right: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_current_right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Encoder & msg,
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

  // member: rpm_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpm_left: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm_left, out);
    out << "\n";
  }

  // member: rpm_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpm_right: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm_right, out);
    out << "\n";
  }

  // member: motor_current_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_current_left: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_current_left, out);
    out << "\n";
  }

  // member: motor_current_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_current_right: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_current_right, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Encoder & msg, bool use_flow_style = false)
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
  const sdv_msgs::msg::Encoder & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdv_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdv_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdv_msgs::msg::Encoder & msg)
{
  return sdv_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdv_msgs::msg::Encoder>()
{
  return "sdv_msgs::msg::Encoder";
}

template<>
inline const char * name<sdv_msgs::msg::Encoder>()
{
  return "sdv_msgs/msg/Encoder";
}

template<>
struct has_fixed_size<sdv_msgs::msg::Encoder>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sdv_msgs::msg::Encoder>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sdv_msgs::msg::Encoder>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDV_MSGS__MSG__DETAIL__ENCODER__TRAITS_HPP_
