// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_msgs:msg/LED.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/led.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__LED__BUILDER_HPP_
#define SDV_MSGS__MSG__DETAIL__LED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_msgs/msg/detail/led__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_msgs
{

namespace msg
{

namespace builder
{

class Init_LED_white
{
public:
  explicit Init_LED_white(::sdv_msgs::msg::LED & msg)
  : msg_(msg)
  {}
  ::sdv_msgs::msg::LED white(::sdv_msgs::msg::LED::_white_type arg)
  {
    msg_.white = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_msgs::msg::LED msg_;
};

class Init_LED_blue
{
public:
  explicit Init_LED_blue(::sdv_msgs::msg::LED & msg)
  : msg_(msg)
  {}
  Init_LED_white blue(::sdv_msgs::msg::LED::_blue_type arg)
  {
    msg_.blue = std::move(arg);
    return Init_LED_white(msg_);
  }

private:
  ::sdv_msgs::msg::LED msg_;
};

class Init_LED_green
{
public:
  explicit Init_LED_green(::sdv_msgs::msg::LED & msg)
  : msg_(msg)
  {}
  Init_LED_blue green(::sdv_msgs::msg::LED::_green_type arg)
  {
    msg_.green = std::move(arg);
    return Init_LED_blue(msg_);
  }

private:
  ::sdv_msgs::msg::LED msg_;
};

class Init_LED_red
{
public:
  explicit Init_LED_red(::sdv_msgs::msg::LED & msg)
  : msg_(msg)
  {}
  Init_LED_green red(::sdv_msgs::msg::LED::_red_type arg)
  {
    msg_.red = std::move(arg);
    return Init_LED_green(msg_);
  }

private:
  ::sdv_msgs::msg::LED msg_;
};

class Init_LED_header
{
public:
  Init_LED_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LED_red header(::sdv_msgs::msg::LED::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LED_red(msg_);
  }

private:
  ::sdv_msgs::msg::LED msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_msgs::msg::LED>()
{
  return sdv_msgs::msg::builder::Init_LED_header();
}

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__LED__BUILDER_HPP_
