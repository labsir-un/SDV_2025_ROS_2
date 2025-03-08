// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_msgs:msg/Drivers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/drivers.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__DRIVERS__BUILDER_HPP_
#define SDV_MSGS__MSG__DETAIL__DRIVERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_msgs/msg/detail/drivers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_msgs
{

namespace msg
{

namespace builder
{

class Init_Drivers_drivers
{
public:
  explicit Init_Drivers_drivers(::sdv_msgs::msg::Drivers & msg)
  : msg_(msg)
  {}
  ::sdv_msgs::msg::Drivers drivers(::sdv_msgs::msg::Drivers::_drivers_type arg)
  {
    msg_.drivers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_msgs::msg::Drivers msg_;
};

class Init_Drivers_header
{
public:
  Init_Drivers_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Drivers_drivers header(::sdv_msgs::msg::Drivers::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Drivers_drivers(msg_);
  }

private:
  ::sdv_msgs::msg::Drivers msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_msgs::msg::Drivers>()
{
  return sdv_msgs::msg::builder::Init_Drivers_header();
}

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__DRIVERS__BUILDER_HPP_
