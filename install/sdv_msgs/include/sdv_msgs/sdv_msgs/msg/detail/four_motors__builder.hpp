// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_msgs:msg/FourMotors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/four_motors.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__FOUR_MOTORS__BUILDER_HPP_
#define SDV_MSGS__MSG__DETAIL__FOUR_MOTORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_msgs/msg/detail/four_motors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_msgs
{

namespace msg
{

namespace builder
{

class Init_FourMotors_front_right_rps
{
public:
  explicit Init_FourMotors_front_right_rps(::sdv_msgs::msg::FourMotors & msg)
  : msg_(msg)
  {}
  ::sdv_msgs::msg::FourMotors front_right_rps(::sdv_msgs::msg::FourMotors::_front_right_rps_type arg)
  {
    msg_.front_right_rps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_msgs::msg::FourMotors msg_;
};

class Init_FourMotors_front_left_rps
{
public:
  explicit Init_FourMotors_front_left_rps(::sdv_msgs::msg::FourMotors & msg)
  : msg_(msg)
  {}
  Init_FourMotors_front_right_rps front_left_rps(::sdv_msgs::msg::FourMotors::_front_left_rps_type arg)
  {
    msg_.front_left_rps = std::move(arg);
    return Init_FourMotors_front_right_rps(msg_);
  }

private:
  ::sdv_msgs::msg::FourMotors msg_;
};

class Init_FourMotors_back_right_rps
{
public:
  explicit Init_FourMotors_back_right_rps(::sdv_msgs::msg::FourMotors & msg)
  : msg_(msg)
  {}
  Init_FourMotors_front_left_rps back_right_rps(::sdv_msgs::msg::FourMotors::_back_right_rps_type arg)
  {
    msg_.back_right_rps = std::move(arg);
    return Init_FourMotors_front_left_rps(msg_);
  }

private:
  ::sdv_msgs::msg::FourMotors msg_;
};

class Init_FourMotors_back_left_rps
{
public:
  explicit Init_FourMotors_back_left_rps(::sdv_msgs::msg::FourMotors & msg)
  : msg_(msg)
  {}
  Init_FourMotors_back_right_rps back_left_rps(::sdv_msgs::msg::FourMotors::_back_left_rps_type arg)
  {
    msg_.back_left_rps = std::move(arg);
    return Init_FourMotors_back_right_rps(msg_);
  }

private:
  ::sdv_msgs::msg::FourMotors msg_;
};

class Init_FourMotors_header
{
public:
  Init_FourMotors_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FourMotors_back_left_rps header(::sdv_msgs::msg::FourMotors::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FourMotors_back_left_rps(msg_);
  }

private:
  ::sdv_msgs::msg::FourMotors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_msgs::msg::FourMotors>()
{
  return sdv_msgs::msg::builder::Init_FourMotors_header();
}

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__FOUR_MOTORS__BUILDER_HPP_
