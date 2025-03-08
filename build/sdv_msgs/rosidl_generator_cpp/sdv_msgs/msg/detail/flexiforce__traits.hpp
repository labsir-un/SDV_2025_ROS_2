// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdv_msgs:msg/Flexiforce.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/flexiforce.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__FLEXIFORCE__TRAITS_HPP_
#define SDV_MSGS__MSG__DETAIL__FLEXIFORCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdv_msgs/msg/detail/flexiforce__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sdv_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Flexiforce & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: front_left
  {
    out << "front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left, out);
    out << ", ";
  }

  // member: front_right
  {
    out << "front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right, out);
    out << ", ";
  }

  // member: back_left
  {
    out << "back_left: ";
    rosidl_generator_traits::value_to_yaml(msg.back_left, out);
    out << ", ";
  }

  // member: back_right
  {
    out << "back_right: ";
    rosidl_generator_traits::value_to_yaml(msg.back_right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Flexiforce & msg,
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

  // member: front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left, out);
    out << "\n";
  }

  // member: front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right, out);
    out << "\n";
  }

  // member: back_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back_left: ";
    rosidl_generator_traits::value_to_yaml(msg.back_left, out);
    out << "\n";
  }

  // member: back_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back_right: ";
    rosidl_generator_traits::value_to_yaml(msg.back_right, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Flexiforce & msg, bool use_flow_style = false)
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
  const sdv_msgs::msg::Flexiforce & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdv_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdv_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdv_msgs::msg::Flexiforce & msg)
{
  return sdv_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdv_msgs::msg::Flexiforce>()
{
  return "sdv_msgs::msg::Flexiforce";
}

template<>
inline const char * name<sdv_msgs::msg::Flexiforce>()
{
  return "sdv_msgs/msg/Flexiforce";
}

template<>
struct has_fixed_size<sdv_msgs::msg::Flexiforce>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sdv_msgs::msg::Flexiforce>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sdv_msgs::msg::Flexiforce>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDV_MSGS__MSG__DETAIL__FLEXIFORCE__TRAITS_HPP_
