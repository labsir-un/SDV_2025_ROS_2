// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdv_msgs:msg/TagRfid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/tag_rfid.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__TAG_RFID__TRAITS_HPP_
#define SDV_MSGS__MSG__DETAIL__TAG_RFID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdv_msgs/msg/detail/tag_rfid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sdv_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TagRfid & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: process
  {
    out << "process: ";
    rosidl_generator_traits::value_to_yaml(msg.process, out);
    out << ", ";
  }

  // member: product
  {
    out << "product: ";
    rosidl_generator_traits::value_to_yaml(msg.product, out);
    out << ", ";
  }

  // member: start_point
  {
    out << "start_point: ";
    rosidl_generator_traits::value_to_yaml(msg.start_point, out);
    out << ", ";
  }

  // member: end_point
  {
    out << "end_point: ";
    rosidl_generator_traits::value_to_yaml(msg.end_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TagRfid & msg,
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

  // member: process
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process: ";
    rosidl_generator_traits::value_to_yaml(msg.process, out);
    out << "\n";
  }

  // member: product
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "product: ";
    rosidl_generator_traits::value_to_yaml(msg.product, out);
    out << "\n";
  }

  // member: start_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_point: ";
    rosidl_generator_traits::value_to_yaml(msg.start_point, out);
    out << "\n";
  }

  // member: end_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_point: ";
    rosidl_generator_traits::value_to_yaml(msg.end_point, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TagRfid & msg, bool use_flow_style = false)
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
  const sdv_msgs::msg::TagRfid & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdv_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdv_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdv_msgs::msg::TagRfid & msg)
{
  return sdv_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdv_msgs::msg::TagRfid>()
{
  return "sdv_msgs::msg::TagRfid";
}

template<>
inline const char * name<sdv_msgs::msg::TagRfid>()
{
  return "sdv_msgs/msg/TagRfid";
}

template<>
struct has_fixed_size<sdv_msgs::msg::TagRfid>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sdv_msgs::msg::TagRfid>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sdv_msgs::msg::TagRfid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDV_MSGS__MSG__DETAIL__TAG_RFID__TRAITS_HPP_
