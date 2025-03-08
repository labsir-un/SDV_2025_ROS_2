// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_msgs:msg/Battery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/battery.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__BATTERY__BUILDER_HPP_
#define SDV_MSGS__MSG__DETAIL__BATTERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_msgs/msg/detail/battery__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_msgs
{

namespace msg
{

namespace builder
{

class Init_Battery_cell_voltages
{
public:
  explicit Init_Battery_cell_voltages(::sdv_msgs::msg::Battery & msg)
  : msg_(msg)
  {}
  ::sdv_msgs::msg::Battery cell_voltages(::sdv_msgs::msg::Battery::_cell_voltages_type arg)
  {
    msg_.cell_voltages = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_msgs::msg::Battery msg_;
};

class Init_Battery_name
{
public:
  Init_Battery_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Battery_cell_voltages name(::sdv_msgs::msg::Battery::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Battery_cell_voltages(msg_);
  }

private:
  ::sdv_msgs::msg::Battery msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_msgs::msg::Battery>()
{
  return sdv_msgs::msg::builder::Init_Battery_name();
}

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__BATTERY__BUILDER_HPP_
