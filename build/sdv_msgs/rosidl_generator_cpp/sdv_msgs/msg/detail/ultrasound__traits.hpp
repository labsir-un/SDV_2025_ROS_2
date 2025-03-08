// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdv_msgs:msg/Ultrasound.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/ultrasound.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__ULTRASOUND__TRAITS_HPP_
#define SDV_MSGS__MSG__DETAIL__ULTRASOUND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdv_msgs/msg/detail/ultrasound__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sdv_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ultrasound & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sensors
  {
    if (msg.sensors.size() == 0) {
      out << "sensors: []";
    } else {
      out << "sensors: [";
      size_t pending_items = msg.sensors.size();
      for (auto item : msg.sensors) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const Ultrasound & msg,
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

  // member: sensors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensors.size() == 0) {
      out << "sensors: []\n";
    } else {
      out << "sensors:\n";
      for (auto item : msg.sensors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ultrasound & msg, bool use_flow_style = false)
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
  const sdv_msgs::msg::Ultrasound & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdv_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdv_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdv_msgs::msg::Ultrasound & msg)
{
  return sdv_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdv_msgs::msg::Ultrasound>()
{
  return "sdv_msgs::msg::Ultrasound";
}

template<>
inline const char * name<sdv_msgs::msg::Ultrasound>()
{
  return "sdv_msgs/msg/Ultrasound";
}

template<>
struct has_fixed_size<sdv_msgs::msg::Ultrasound>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sdv_msgs::msg::Ultrasound>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sdv_msgs::msg::Ultrasound>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDV_MSGS__MSG__DETAIL__ULTRASOUND__TRAITS_HPP_
