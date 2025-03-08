// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_scripts:msg/Udp.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_scripts/msg/udp.hpp"


#ifndef SDV_SCRIPTS__MSG__DETAIL__UDP__BUILDER_HPP_
#define SDV_SCRIPTS__MSG__DETAIL__UDP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_scripts/msg/detail/udp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_scripts
{

namespace msg
{

namespace builder
{

class Init_Udp_content
{
public:
  explicit Init_Udp_content(::sdv_scripts::msg::Udp & msg)
  : msg_(msg)
  {}
  ::sdv_scripts::msg::Udp content(::sdv_scripts::msg::Udp::_content_type arg)
  {
    msg_.content = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_scripts::msg::Udp msg_;
};

class Init_Udp_header
{
public:
  Init_Udp_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Udp_content header(::sdv_scripts::msg::Udp::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Udp_content(msg_);
  }

private:
  ::sdv_scripts::msg::Udp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_scripts::msg::Udp>()
{
  return sdv_scripts::msg::builder::Init_Udp_header();
}

}  // namespace sdv_scripts

#endif  // SDV_SCRIPTS__MSG__DETAIL__UDP__BUILDER_HPP_
