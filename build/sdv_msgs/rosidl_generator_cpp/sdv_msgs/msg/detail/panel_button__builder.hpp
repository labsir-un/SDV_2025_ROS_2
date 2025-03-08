// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_msgs:msg/PanelButton.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/panel_button.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__PANEL_BUTTON__BUILDER_HPP_
#define SDV_MSGS__MSG__DETAIL__PANEL_BUTTON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_msgs/msg/detail/panel_button__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_msgs
{

namespace msg
{

namespace builder
{

class Init_PanelButton_status
{
public:
  explicit Init_PanelButton_status(::sdv_msgs::msg::PanelButton & msg)
  : msg_(msg)
  {}
  ::sdv_msgs::msg::PanelButton status(::sdv_msgs::msg::PanelButton::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_msgs::msg::PanelButton msg_;
};

class Init_PanelButton_header
{
public:
  Init_PanelButton_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PanelButton_status header(::sdv_msgs::msg::PanelButton::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PanelButton_status(msg_);
  }

private:
  ::sdv_msgs::msg::PanelButton msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_msgs::msg::PanelButton>()
{
  return sdv_msgs::msg::builder::Init_PanelButton_header();
}

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__PANEL_BUTTON__BUILDER_HPP_
