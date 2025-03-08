// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdv_msgs:msg/Drivers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/drivers.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__DRIVERS__TRAITS_HPP_
#define SDV_MSGS__MSG__DETAIL__DRIVERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdv_msgs/msg/detail/drivers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'drivers'
#include "sdv_msgs/msg/detail/motor_driver__traits.hpp"

namespace sdv_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Drivers & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: drivers
  {
    if (msg.drivers.size() == 0) {
      out << "drivers: []";
    } else {
      out << "drivers: [";
      size_t pending_items = msg.drivers.size();
      for (auto item : msg.drivers) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Drivers & msg,
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

  // member: drivers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.drivers.size() == 0) {
      out << "drivers: []\n";
    } else {
      out << "drivers:\n";
      for (auto item : msg.drivers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Drivers & msg, bool use_flow_style = false)
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
  const sdv_msgs::msg::Drivers & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdv_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdv_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdv_msgs::msg::Drivers & msg)
{
  return sdv_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdv_msgs::msg::Drivers>()
{
  return "sdv_msgs::msg::Drivers";
}

template<>
inline const char * name<sdv_msgs::msg::Drivers>()
{
  return "sdv_msgs/msg/Drivers";
}

template<>
struct has_fixed_size<sdv_msgs::msg::Drivers>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sdv_msgs::msg::Drivers>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sdv_msgs::msg::Drivers>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDV_MSGS__MSG__DETAIL__DRIVERS__TRAITS_HPP_
