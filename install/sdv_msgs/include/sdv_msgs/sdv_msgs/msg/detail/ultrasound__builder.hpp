// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_msgs:msg/Ultrasound.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/ultrasound.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__ULTRASOUND__BUILDER_HPP_
#define SDV_MSGS__MSG__DETAIL__ULTRASOUND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_msgs/msg/detail/ultrasound__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_msgs
{

namespace msg
{

namespace builder
{

class Init_Ultrasound_sensors
{
public:
  explicit Init_Ultrasound_sensors(::sdv_msgs::msg::Ultrasound & msg)
  : msg_(msg)
  {}
  ::sdv_msgs::msg::Ultrasound sensors(::sdv_msgs::msg::Ultrasound::_sensors_type arg)
  {
    msg_.sensors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_msgs::msg::Ultrasound msg_;
};

class Init_Ultrasound_header
{
public:
  Init_Ultrasound_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ultrasound_sensors header(::sdv_msgs::msg::Ultrasound::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Ultrasound_sensors(msg_);
  }

private:
  ::sdv_msgs::msg::Ultrasound msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_msgs::msg::Ultrasound>()
{
  return sdv_msgs::msg::builder::Init_Ultrasound_header();
}

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__ULTRASOUND__BUILDER_HPP_
