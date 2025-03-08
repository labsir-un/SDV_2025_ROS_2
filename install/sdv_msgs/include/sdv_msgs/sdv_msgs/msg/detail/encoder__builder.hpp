// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_msgs:msg/Encoder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/encoder.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__ENCODER__BUILDER_HPP_
#define SDV_MSGS__MSG__DETAIL__ENCODER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_msgs/msg/detail/encoder__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_msgs
{

namespace msg
{

namespace builder
{

class Init_Encoder_motor_current_right
{
public:
  explicit Init_Encoder_motor_current_right(::sdv_msgs::msg::Encoder & msg)
  : msg_(msg)
  {}
  ::sdv_msgs::msg::Encoder motor_current_right(::sdv_msgs::msg::Encoder::_motor_current_right_type arg)
  {
    msg_.motor_current_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_msgs::msg::Encoder msg_;
};

class Init_Encoder_motor_current_left
{
public:
  explicit Init_Encoder_motor_current_left(::sdv_msgs::msg::Encoder & msg)
  : msg_(msg)
  {}
  Init_Encoder_motor_current_right motor_current_left(::sdv_msgs::msg::Encoder::_motor_current_left_type arg)
  {
    msg_.motor_current_left = std::move(arg);
    return Init_Encoder_motor_current_right(msg_);
  }

private:
  ::sdv_msgs::msg::Encoder msg_;
};

class Init_Encoder_rpm_right
{
public:
  explicit Init_Encoder_rpm_right(::sdv_msgs::msg::Encoder & msg)
  : msg_(msg)
  {}
  Init_Encoder_motor_current_left rpm_right(::sdv_msgs::msg::Encoder::_rpm_right_type arg)
  {
    msg_.rpm_right = std::move(arg);
    return Init_Encoder_motor_current_left(msg_);
  }

private:
  ::sdv_msgs::msg::Encoder msg_;
};

class Init_Encoder_rpm_left
{
public:
  explicit Init_Encoder_rpm_left(::sdv_msgs::msg::Encoder & msg)
  : msg_(msg)
  {}
  Init_Encoder_rpm_right rpm_left(::sdv_msgs::msg::Encoder::_rpm_left_type arg)
  {
    msg_.rpm_left = std::move(arg);
    return Init_Encoder_rpm_right(msg_);
  }

private:
  ::sdv_msgs::msg::Encoder msg_;
};

class Init_Encoder_header
{
public:
  Init_Encoder_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Encoder_rpm_left header(::sdv_msgs::msg::Encoder::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Encoder_rpm_left(msg_);
  }

private:
  ::sdv_msgs::msg::Encoder msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_msgs::msg::Encoder>()
{
  return sdv_msgs::msg::builder::Init_Encoder_header();
}

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__ENCODER__BUILDER_HPP_
