// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_msgs:msg/SdvPlatform.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/sdv_platform.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__SDV_PLATFORM__BUILDER_HPP_
#define SDV_MSGS__MSG__DETAIL__SDV_PLATFORM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_msgs/msg/detail/sdv_platform__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_msgs
{

namespace msg
{

namespace builder
{

class Init_SdvPlatform_source
{
public:
  explicit Init_SdvPlatform_source(::sdv_msgs::msg::SdvPlatform & msg)
  : msg_(msg)
  {}
  ::sdv_msgs::msg::SdvPlatform source(::sdv_msgs::msg::SdvPlatform::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_msgs::msg::SdvPlatform msg_;
};

class Init_SdvPlatform_status
{
public:
  explicit Init_SdvPlatform_status(::sdv_msgs::msg::SdvPlatform & msg)
  : msg_(msg)
  {}
  Init_SdvPlatform_source status(::sdv_msgs::msg::SdvPlatform::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SdvPlatform_source(msg_);
  }

private:
  ::sdv_msgs::msg::SdvPlatform msg_;
};

class Init_SdvPlatform_header
{
public:
  Init_SdvPlatform_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SdvPlatform_status header(::sdv_msgs::msg::SdvPlatform::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SdvPlatform_status(msg_);
  }

private:
  ::sdv_msgs::msg::SdvPlatform msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_msgs::msg::SdvPlatform>()
{
  return sdv_msgs::msg::builder::Init_SdvPlatform_header();
}

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__SDV_PLATFORM__BUILDER_HPP_
