// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_msgs:msg/Buzzer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/buzzer.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__BUZZER__BUILDER_HPP_
#define SDV_MSGS__MSG__DETAIL__BUZZER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_msgs/msg/detail/buzzer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_msgs
{

namespace msg
{

namespace builder
{

class Init_Buzzer_cicles
{
public:
  explicit Init_Buzzer_cicles(::sdv_msgs::msg::Buzzer & msg)
  : msg_(msg)
  {}
  ::sdv_msgs::msg::Buzzer cicles(::sdv_msgs::msg::Buzzer::_cicles_type arg)
  {
    msg_.cicles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_msgs::msg::Buzzer msg_;
};

class Init_Buzzer_time_off
{
public:
  explicit Init_Buzzer_time_off(::sdv_msgs::msg::Buzzer & msg)
  : msg_(msg)
  {}
  Init_Buzzer_cicles time_off(::sdv_msgs::msg::Buzzer::_time_off_type arg)
  {
    msg_.time_off = std::move(arg);
    return Init_Buzzer_cicles(msg_);
  }

private:
  ::sdv_msgs::msg::Buzzer msg_;
};

class Init_Buzzer_time_on
{
public:
  explicit Init_Buzzer_time_on(::sdv_msgs::msg::Buzzer & msg)
  : msg_(msg)
  {}
  Init_Buzzer_time_off time_on(::sdv_msgs::msg::Buzzer::_time_on_type arg)
  {
    msg_.time_on = std::move(arg);
    return Init_Buzzer_time_off(msg_);
  }

private:
  ::sdv_msgs::msg::Buzzer msg_;
};

class Init_Buzzer_header
{
public:
  Init_Buzzer_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Buzzer_time_on header(::sdv_msgs::msg::Buzzer::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Buzzer_time_on(msg_);
  }

private:
  ::sdv_msgs::msg::Buzzer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_msgs::msg::Buzzer>()
{
  return sdv_msgs::msg::builder::Init_Buzzer_header();
}

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__BUZZER__BUILDER_HPP_
