// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdv_scripts:msg/Udp.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_scripts/msg/udp.hpp"


#ifndef SDV_SCRIPTS__MSG__DETAIL__UDP__TRAITS_HPP_
#define SDV_SCRIPTS__MSG__DETAIL__UDP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdv_scripts/msg/detail/udp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sdv_scripts
{

namespace msg
{

inline void to_flow_style_yaml(
  const Udp & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: content
  {
    out << "content: ";
    rosidl_generator_traits::value_to_yaml(msg.content, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Udp & msg,
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

  // member: content
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "content: ";
    rosidl_generator_traits::value_to_yaml(msg.content, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Udp & msg, bool use_flow_style = false)
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

}  // namespace sdv_scripts

namespace rosidl_generator_traits
{

[[deprecated("use sdv_scripts::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sdv_scripts::msg::Udp & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdv_scripts::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdv_scripts::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdv_scripts::msg::Udp & msg)
{
  return sdv_scripts::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdv_scripts::msg::Udp>()
{
  return "sdv_scripts::msg::Udp";
}

template<>
inline const char * name<sdv_scripts::msg::Udp>()
{
  return "sdv_scripts/msg/Udp";
}

template<>
struct has_fixed_size<sdv_scripts::msg::Udp>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sdv_scripts::msg::Udp>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sdv_scripts::msg::Udp>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDV_SCRIPTS__MSG__DETAIL__UDP__TRAITS_HPP_
