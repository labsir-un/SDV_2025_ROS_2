// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_msgs:msg/MotorDriver.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/motor_driver.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__MOTOR_DRIVER__BUILDER_HPP_
#define SDV_MSGS__MSG__DETAIL__MOTOR_DRIVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_msgs/msg/detail/motor_driver__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorDriver_driver_status
{
public:
  explicit Init_MotorDriver_driver_status(::sdv_msgs::msg::MotorDriver & msg)
  : msg_(msg)
  {}
  ::sdv_msgs::msg::MotorDriver driver_status(::sdv_msgs::msg::MotorDriver::_driver_status_type arg)
  {
    msg_.driver_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_msgs::msg::MotorDriver msg_;
};

class Init_MotorDriver_current
{
public:
  explicit Init_MotorDriver_current(::sdv_msgs::msg::MotorDriver & msg)
  : msg_(msg)
  {}
  Init_MotorDriver_driver_status current(::sdv_msgs::msg::MotorDriver::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_MotorDriver_driver_status(msg_);
  }

private:
  ::sdv_msgs::msg::MotorDriver msg_;
};

class Init_MotorDriver_name
{
public:
  Init_MotorDriver_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorDriver_current name(::sdv_msgs::msg::MotorDriver::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MotorDriver_current(msg_);
  }

private:
  ::sdv_msgs::msg::MotorDriver msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_msgs::msg::MotorDriver>()
{
  return sdv_msgs::msg::builder::Init_MotorDriver_name();
}

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__MOTOR_DRIVER__BUILDER_HPP_
