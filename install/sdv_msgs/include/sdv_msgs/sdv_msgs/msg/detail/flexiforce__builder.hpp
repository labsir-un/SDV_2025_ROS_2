// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_msgs:msg/Flexiforce.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/flexiforce.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__FLEXIFORCE__BUILDER_HPP_
#define SDV_MSGS__MSG__DETAIL__FLEXIFORCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_msgs/msg/detail/flexiforce__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_msgs
{

namespace msg
{

namespace builder
{

class Init_Flexiforce_back_right
{
public:
  explicit Init_Flexiforce_back_right(::sdv_msgs::msg::Flexiforce & msg)
  : msg_(msg)
  {}
  ::sdv_msgs::msg::Flexiforce back_right(::sdv_msgs::msg::Flexiforce::_back_right_type arg)
  {
    msg_.back_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_msgs::msg::Flexiforce msg_;
};

class Init_Flexiforce_back_left
{
public:
  explicit Init_Flexiforce_back_left(::sdv_msgs::msg::Flexiforce & msg)
  : msg_(msg)
  {}
  Init_Flexiforce_back_right back_left(::sdv_msgs::msg::Flexiforce::_back_left_type arg)
  {
    msg_.back_left = std::move(arg);
    return Init_Flexiforce_back_right(msg_);
  }

private:
  ::sdv_msgs::msg::Flexiforce msg_;
};

class Init_Flexiforce_front_right
{
public:
  explicit Init_Flexiforce_front_right(::sdv_msgs::msg::Flexiforce & msg)
  : msg_(msg)
  {}
  Init_Flexiforce_back_left front_right(::sdv_msgs::msg::Flexiforce::_front_right_type arg)
  {
    msg_.front_right = std::move(arg);
    return Init_Flexiforce_back_left(msg_);
  }

private:
  ::sdv_msgs::msg::Flexiforce msg_;
};

class Init_Flexiforce_front_left
{
public:
  explicit Init_Flexiforce_front_left(::sdv_msgs::msg::Flexiforce & msg)
  : msg_(msg)
  {}
  Init_Flexiforce_front_right front_left(::sdv_msgs::msg::Flexiforce::_front_left_type arg)
  {
    msg_.front_left = std::move(arg);
    return Init_Flexiforce_front_right(msg_);
  }

private:
  ::sdv_msgs::msg::Flexiforce msg_;
};

class Init_Flexiforce_header
{
public:
  Init_Flexiforce_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Flexiforce_front_left header(::sdv_msgs::msg::Flexiforce::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Flexiforce_front_left(msg_);
  }

private:
  ::sdv_msgs::msg::Flexiforce msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_msgs::msg::Flexiforce>()
{
  return sdv_msgs::msg::builder::Init_Flexiforce_header();
}

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__FLEXIFORCE__BUILDER_HPP_
