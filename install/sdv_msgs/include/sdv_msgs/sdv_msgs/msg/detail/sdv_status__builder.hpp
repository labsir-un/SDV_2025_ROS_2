// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_msgs:msg/SdvStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/sdv_status.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__SDV_STATUS__BUILDER_HPP_
#define SDV_MSGS__MSG__DETAIL__SDV_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_msgs/msg/detail/sdv_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_msgs
{

namespace msg
{

namespace builder
{

class Init_SdvStatus_connection_error_batt
{
public:
  explicit Init_SdvStatus_connection_error_batt(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  ::sdv_msgs::msg::SdvStatus connection_error_batt(::sdv_msgs::msg::SdvStatus::_connection_error_batt_type arg)
  {
    msg_.connection_error_batt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_connection_error_ult
{
public:
  explicit Init_SdvStatus_connection_error_ult(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_connection_error_batt connection_error_ult(::sdv_msgs::msg::SdvStatus::_connection_error_ult_type arg)
  {
    msg_.connection_error_ult = std::move(arg);
    return Init_SdvStatus_connection_error_batt(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_connection_error_rfid
{
public:
  explicit Init_SdvStatus_connection_error_rfid(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_connection_error_ult connection_error_rfid(::sdv_msgs::msg::SdvStatus::_connection_error_rfid_type arg)
  {
    msg_.connection_error_rfid = std::move(arg);
    return Init_SdvStatus_connection_error_ult(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_connection_error_msp
{
public:
  explicit Init_SdvStatus_connection_error_msp(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_connection_error_rfid connection_error_msp(::sdv_msgs::msg::SdvStatus::_connection_error_msp_type arg)
  {
    msg_.connection_error_msp = std::move(arg);
    return Init_SdvStatus_connection_error_rfid(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_connection_error_imu
{
public:
  explicit Init_SdvStatus_connection_error_imu(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_connection_error_msp connection_error_imu(::sdv_msgs::msg::SdvStatus::_connection_error_imu_type arg)
  {
    msg_.connection_error_imu = std::move(arg);
    return Init_SdvStatus_connection_error_msp(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_not_connection_error
{
public:
  explicit Init_SdvStatus_not_connection_error(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_connection_error_imu not_connection_error(::sdv_msgs::msg::SdvStatus::_not_connection_error_type arg)
  {
    msg_.not_connection_error = std::move(arg);
    return Init_SdvStatus_connection_error_imu(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_tag_close
{
public:
  explicit Init_SdvStatus_tag_close(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_not_connection_error tag_close(::sdv_msgs::msg::SdvStatus::_tag_close_type arg)
  {
    msg_.tag_close = std::move(arg);
    return Init_SdvStatus_not_connection_error(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_tag_write_error
{
public:
  explicit Init_SdvStatus_tag_write_error(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_tag_close tag_write_error(::sdv_msgs::msg::SdvStatus::_tag_write_error_type arg)
  {
    msg_.tag_write_error = std::move(arg);
    return Init_SdvStatus_tag_close(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_tag_read_error
{
public:
  explicit Init_SdvStatus_tag_read_error(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_tag_write_error tag_read_error(::sdv_msgs::msg::SdvStatus::_tag_read_error_type arg)
  {
    msg_.tag_read_error = std::move(arg);
    return Init_SdvStatus_tag_write_error(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_tag_is_on_platform
{
public:
  explicit Init_SdvStatus_tag_is_on_platform(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_tag_read_error tag_is_on_platform(::sdv_msgs::msg::SdvStatus::_tag_is_on_platform_type arg)
  {
    msg_.tag_is_on_platform = std::move(arg);
    return Init_SdvStatus_tag_read_error(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_tag_init
{
public:
  explicit Init_SdvStatus_tag_init(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_tag_is_on_platform tag_init(::sdv_msgs::msg::SdvStatus::_tag_init_type arg)
  {
    msg_.tag_init = std::move(arg);
    return Init_SdvStatus_tag_is_on_platform(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_tag_disconnected
{
public:
  explicit Init_SdvStatus_tag_disconnected(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_tag_init tag_disconnected(::sdv_msgs::msg::SdvStatus::_tag_disconnected_type arg)
  {
    msg_.tag_disconnected = std::move(arg);
    return Init_SdvStatus_tag_init(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_connection_error
{
public:
  explicit Init_SdvStatus_connection_error(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_tag_disconnected connection_error(::sdv_msgs::msg::SdvStatus::_connection_error_type arg)
  {
    msg_.connection_error = std::move(arg);
    return Init_SdvStatus_tag_disconnected(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_over_load
{
public:
  explicit Init_SdvStatus_over_load(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_connection_error over_load(::sdv_msgs::msg::SdvStatus::_over_load_type arg)
  {
    msg_.over_load = std::move(arg);
    return Init_SdvStatus_connection_error(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_obstacle_stop
{
public:
  explicit Init_SdvStatus_obstacle_stop(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_over_load obstacle_stop(::sdv_msgs::msg::SdvStatus::_obstacle_stop_type arg)
  {
    msg_.obstacle_stop = std::move(arg);
    return Init_SdvStatus_over_load(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_poweroff_pc
{
public:
  explicit Init_SdvStatus_poweroff_pc(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_obstacle_stop poweroff_pc(::sdv_msgs::msg::SdvStatus::_poweroff_pc_type arg)
  {
    msg_.poweroff_pc = std::move(arg);
    return Init_SdvStatus_obstacle_stop(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_reset_pc
{
public:
  explicit Init_SdvStatus_reset_pc(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_poweroff_pc reset_pc(::sdv_msgs::msg::SdvStatus::_reset_pc_type arg)
  {
    msg_.reset_pc = std::move(arg);
    return Init_SdvStatus_poweroff_pc(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_emergency_stop
{
public:
  explicit Init_SdvStatus_emergency_stop(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_reset_pc emergency_stop(::sdv_msgs::msg::SdvStatus::_emergency_stop_type arg)
  {
    msg_.emergency_stop = std::move(arg);
    return Init_SdvStatus_reset_pc(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_low_batt
{
public:
  explicit Init_SdvStatus_low_batt(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_emergency_stop low_batt(::sdv_msgs::msg::SdvStatus::_low_batt_type arg)
  {
    msg_.low_batt = std::move(arg);
    return Init_SdvStatus_emergency_stop(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_forward
{
public:
  explicit Init_SdvStatus_forward(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_low_batt forward(::sdv_msgs::msg::SdvStatus::_forward_type arg)
  {
    msg_.forward = std::move(arg);
    return Init_SdvStatus_low_batt(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_reverse
{
public:
  explicit Init_SdvStatus_reverse(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_forward reverse(::sdv_msgs::msg::SdvStatus::_reverse_type arg)
  {
    msg_.reverse = std::move(arg);
    return Init_SdvStatus_forward(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_turn_right
{
public:
  explicit Init_SdvStatus_turn_right(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_reverse turn_right(::sdv_msgs::msg::SdvStatus::_turn_right_type arg)
  {
    msg_.turn_right = std::move(arg);
    return Init_SdvStatus_reverse(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_turn_left
{
public:
  explicit Init_SdvStatus_turn_left(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_turn_right turn_left(::sdv_msgs::msg::SdvStatus::_turn_left_type arg)
  {
    msg_.turn_left = std::move(arg);
    return Init_SdvStatus_turn_right(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_rotate
{
public:
  explicit Init_SdvStatus_rotate(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_turn_left rotate(::sdv_msgs::msg::SdvStatus::_rotate_type arg)
  {
    msg_.rotate = std::move(arg);
    return Init_SdvStatus_turn_left(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_stand_by
{
public:
  explicit Init_SdvStatus_stand_by(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_rotate stand_by(::sdv_msgs::msg::SdvStatus::_stand_by_type arg)
  {
    msg_.stand_by = std::move(arg);
    return Init_SdvStatus_rotate(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_energized
{
public:
  explicit Init_SdvStatus_energized(::sdv_msgs::msg::SdvStatus & msg)
  : msg_(msg)
  {}
  Init_SdvStatus_stand_by energized(::sdv_msgs::msg::SdvStatus::_energized_type arg)
  {
    msg_.energized = std::move(arg);
    return Init_SdvStatus_stand_by(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

class Init_SdvStatus_header
{
public:
  Init_SdvStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SdvStatus_energized header(::sdv_msgs::msg::SdvStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SdvStatus_energized(msg_);
  }

private:
  ::sdv_msgs::msg::SdvStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_msgs::msg::SdvStatus>()
{
  return sdv_msgs::msg::builder::Init_SdvStatus_header();
}

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__SDV_STATUS__BUILDER_HPP_
