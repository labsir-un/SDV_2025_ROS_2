// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_msgs:msg/TwoMotors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/two_motors.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__TWO_MOTORS__BUILDER_HPP_
#define SDV_MSGS__MSG__DETAIL__TWO_MOTORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_msgs/msg/detail/two_motors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_msgs
{

namespace msg
{

namespace builder
{

class Init_TwoMotors_right
{
public:
  explicit Init_TwoMotors_right(::sdv_msgs::msg::TwoMotors & msg)
  : msg_(msg)
  {}
  ::sdv_msgs::msg::TwoMotors right(::sdv_msgs::msg::TwoMotors::_right_type arg)
  {
    msg_.right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_msgs::msg::TwoMotors msg_;
};

class Init_TwoMotors_left
{
public:
  explicit Init_TwoMotors_left(::sdv_msgs::msg::TwoMotors & msg)
  : msg_(msg)
  {}
  Init_TwoMotors_right left(::sdv_msgs::msg::TwoMotors::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_TwoMotors_right(msg_);
  }

private:
  ::sdv_msgs::msg::TwoMotors msg_;
};

class Init_TwoMotors_header
{
public:
  Init_TwoMotors_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwoMotors_left header(::sdv_msgs::msg::TwoMotors::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TwoMotors_left(msg_);
  }

private:
  ::sdv_msgs::msg::TwoMotors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_msgs::msg::TwoMotors>()
{
  return sdv_msgs::msg::builder::Init_TwoMotors_header();
}

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__TWO_MOTORS__BUILDER_HPP_
