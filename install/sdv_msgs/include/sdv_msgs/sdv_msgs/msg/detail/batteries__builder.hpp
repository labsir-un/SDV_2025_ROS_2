// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_msgs:msg/Batteries.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/batteries.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__BATTERIES__BUILDER_HPP_
#define SDV_MSGS__MSG__DETAIL__BATTERIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_msgs/msg/detail/batteries__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_msgs
{

namespace msg
{

namespace builder
{

class Init_Batteries_batteries
{
public:
  explicit Init_Batteries_batteries(::sdv_msgs::msg::Batteries & msg)
  : msg_(msg)
  {}
  ::sdv_msgs::msg::Batteries batteries(::sdv_msgs::msg::Batteries::_batteries_type arg)
  {
    msg_.batteries = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_msgs::msg::Batteries msg_;
};

class Init_Batteries_header
{
public:
  Init_Batteries_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Batteries_batteries header(::sdv_msgs::msg::Batteries::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Batteries_batteries(msg_);
  }

private:
  ::sdv_msgs::msg::Batteries msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_msgs::msg::Batteries>()
{
  return sdv_msgs::msg::builder::Init_Batteries_header();
}

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__BATTERIES__BUILDER_HPP_
