// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_msgs:msg/ImuRaw.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/imu_raw.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__IMU_RAW__BUILDER_HPP_
#define SDV_MSGS__MSG__DETAIL__IMU_RAW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_msgs/msg/detail/imu_raw__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_msgs
{

namespace msg
{

namespace builder
{

class Init_ImuRaw_magnetic_field
{
public:
  explicit Init_ImuRaw_magnetic_field(::sdv_msgs::msg::ImuRaw & msg)
  : msg_(msg)
  {}
  ::sdv_msgs::msg::ImuRaw magnetic_field(::sdv_msgs::msg::ImuRaw::_magnetic_field_type arg)
  {
    msg_.magnetic_field = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_msgs::msg::ImuRaw msg_;
};

class Init_ImuRaw_linear_acceleration
{
public:
  explicit Init_ImuRaw_linear_acceleration(::sdv_msgs::msg::ImuRaw & msg)
  : msg_(msg)
  {}
  Init_ImuRaw_magnetic_field linear_acceleration(::sdv_msgs::msg::ImuRaw::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_ImuRaw_magnetic_field(msg_);
  }

private:
  ::sdv_msgs::msg::ImuRaw msg_;
};

class Init_ImuRaw_angular_velocity
{
public:
  explicit Init_ImuRaw_angular_velocity(::sdv_msgs::msg::ImuRaw & msg)
  : msg_(msg)
  {}
  Init_ImuRaw_linear_acceleration angular_velocity(::sdv_msgs::msg::ImuRaw::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_ImuRaw_linear_acceleration(msg_);
  }

private:
  ::sdv_msgs::msg::ImuRaw msg_;
};

class Init_ImuRaw_header
{
public:
  Init_ImuRaw_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuRaw_angular_velocity header(::sdv_msgs::msg::ImuRaw::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ImuRaw_angular_velocity(msg_);
  }

private:
  ::sdv_msgs::msg::ImuRaw msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_msgs::msg::ImuRaw>()
{
  return sdv_msgs::msg::builder::Init_ImuRaw_header();
}

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__IMU_RAW__BUILDER_HPP_
