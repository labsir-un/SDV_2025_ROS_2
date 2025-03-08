// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_msgs:msg/SdvStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/sdv_status.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__SDV_STATUS__STRUCT_HPP_
#define SDV_MSGS__MSG__DETAIL__SDV_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sdv_msgs__msg__SdvStatus __attribute__((deprecated))
#else
# define DEPRECATED__sdv_msgs__msg__SdvStatus __declspec(deprecated)
#endif

namespace sdv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SdvStatus_
{
  using Type = SdvStatus_<ContainerAllocator>;

  explicit SdvStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->energized = false;
      this->stand_by = false;
      this->rotate = false;
      this->turn_left = false;
      this->turn_right = false;
      this->reverse = false;
      this->forward = false;
      this->low_batt = false;
      this->emergency_stop = false;
      this->reset_pc = false;
      this->poweroff_pc = false;
      this->obstacle_stop = false;
      this->over_load = false;
      this->connection_error = false;
      this->tag_disconnected = false;
      this->tag_init = false;
      this->tag_is_on_platform = false;
      this->tag_read_error = false;
      this->tag_write_error = false;
      this->tag_close = false;
      this->not_connection_error = false;
      this->connection_error_imu = false;
      this->connection_error_msp = false;
      this->connection_error_rfid = false;
      this->connection_error_ult = false;
      this->connection_error_batt = false;
    }
  }

  explicit SdvStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->energized = false;
      this->stand_by = false;
      this->rotate = false;
      this->turn_left = false;
      this->turn_right = false;
      this->reverse = false;
      this->forward = false;
      this->low_batt = false;
      this->emergency_stop = false;
      this->reset_pc = false;
      this->poweroff_pc = false;
      this->obstacle_stop = false;
      this->over_load = false;
      this->connection_error = false;
      this->tag_disconnected = false;
      this->tag_init = false;
      this->tag_is_on_platform = false;
      this->tag_read_error = false;
      this->tag_write_error = false;
      this->tag_close = false;
      this->not_connection_error = false;
      this->connection_error_imu = false;
      this->connection_error_msp = false;
      this->connection_error_rfid = false;
      this->connection_error_ult = false;
      this->connection_error_batt = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _energized_type =
    bool;
  _energized_type energized;
  using _stand_by_type =
    bool;
  _stand_by_type stand_by;
  using _rotate_type =
    bool;
  _rotate_type rotate;
  using _turn_left_type =
    bool;
  _turn_left_type turn_left;
  using _turn_right_type =
    bool;
  _turn_right_type turn_right;
  using _reverse_type =
    bool;
  _reverse_type reverse;
  using _forward_type =
    bool;
  _forward_type forward;
  using _low_batt_type =
    bool;
  _low_batt_type low_batt;
  using _emergency_stop_type =
    bool;
  _emergency_stop_type emergency_stop;
  using _reset_pc_type =
    bool;
  _reset_pc_type reset_pc;
  using _poweroff_pc_type =
    bool;
  _poweroff_pc_type poweroff_pc;
  using _obstacle_stop_type =
    bool;
  _obstacle_stop_type obstacle_stop;
  using _over_load_type =
    bool;
  _over_load_type over_load;
  using _connection_error_type =
    bool;
  _connection_error_type connection_error;
  using _tag_disconnected_type =
    bool;
  _tag_disconnected_type tag_disconnected;
  using _tag_init_type =
    bool;
  _tag_init_type tag_init;
  using _tag_is_on_platform_type =
    bool;
  _tag_is_on_platform_type tag_is_on_platform;
  using _tag_read_error_type =
    bool;
  _tag_read_error_type tag_read_error;
  using _tag_write_error_type =
    bool;
  _tag_write_error_type tag_write_error;
  using _tag_close_type =
    bool;
  _tag_close_type tag_close;
  using _not_connection_error_type =
    bool;
  _not_connection_error_type not_connection_error;
  using _connection_error_imu_type =
    bool;
  _connection_error_imu_type connection_error_imu;
  using _connection_error_msp_type =
    bool;
  _connection_error_msp_type connection_error_msp;
  using _connection_error_rfid_type =
    bool;
  _connection_error_rfid_type connection_error_rfid;
  using _connection_error_ult_type =
    bool;
  _connection_error_ult_type connection_error_ult;
  using _connection_error_batt_type =
    bool;
  _connection_error_batt_type connection_error_batt;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__energized(
    const bool & _arg)
  {
    this->energized = _arg;
    return *this;
  }
  Type & set__stand_by(
    const bool & _arg)
  {
    this->stand_by = _arg;
    return *this;
  }
  Type & set__rotate(
    const bool & _arg)
  {
    this->rotate = _arg;
    return *this;
  }
  Type & set__turn_left(
    const bool & _arg)
  {
    this->turn_left = _arg;
    return *this;
  }
  Type & set__turn_right(
    const bool & _arg)
  {
    this->turn_right = _arg;
    return *this;
  }
  Type & set__reverse(
    const bool & _arg)
  {
    this->reverse = _arg;
    return *this;
  }
  Type & set__forward(
    const bool & _arg)
  {
    this->forward = _arg;
    return *this;
  }
  Type & set__low_batt(
    const bool & _arg)
  {
    this->low_batt = _arg;
    return *this;
  }
  Type & set__emergency_stop(
    const bool & _arg)
  {
    this->emergency_stop = _arg;
    return *this;
  }
  Type & set__reset_pc(
    const bool & _arg)
  {
    this->reset_pc = _arg;
    return *this;
  }
  Type & set__poweroff_pc(
    const bool & _arg)
  {
    this->poweroff_pc = _arg;
    return *this;
  }
  Type & set__obstacle_stop(
    const bool & _arg)
  {
    this->obstacle_stop = _arg;
    return *this;
  }
  Type & set__over_load(
    const bool & _arg)
  {
    this->over_load = _arg;
    return *this;
  }
  Type & set__connection_error(
    const bool & _arg)
  {
    this->connection_error = _arg;
    return *this;
  }
  Type & set__tag_disconnected(
    const bool & _arg)
  {
    this->tag_disconnected = _arg;
    return *this;
  }
  Type & set__tag_init(
    const bool & _arg)
  {
    this->tag_init = _arg;
    return *this;
  }
  Type & set__tag_is_on_platform(
    const bool & _arg)
  {
    this->tag_is_on_platform = _arg;
    return *this;
  }
  Type & set__tag_read_error(
    const bool & _arg)
  {
    this->tag_read_error = _arg;
    return *this;
  }
  Type & set__tag_write_error(
    const bool & _arg)
  {
    this->tag_write_error = _arg;
    return *this;
  }
  Type & set__tag_close(
    const bool & _arg)
  {
    this->tag_close = _arg;
    return *this;
  }
  Type & set__not_connection_error(
    const bool & _arg)
  {
    this->not_connection_error = _arg;
    return *this;
  }
  Type & set__connection_error_imu(
    const bool & _arg)
  {
    this->connection_error_imu = _arg;
    return *this;
  }
  Type & set__connection_error_msp(
    const bool & _arg)
  {
    this->connection_error_msp = _arg;
    return *this;
  }
  Type & set__connection_error_rfid(
    const bool & _arg)
  {
    this->connection_error_rfid = _arg;
    return *this;
  }
  Type & set__connection_error_ult(
    const bool & _arg)
  {
    this->connection_error_ult = _arg;
    return *this;
  }
  Type & set__connection_error_batt(
    const bool & _arg)
  {
    this->connection_error_batt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdv_msgs::msg::SdvStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_msgs::msg::SdvStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_msgs::msg::SdvStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_msgs::msg::SdvStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::SdvStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::SdvStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::SdvStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::SdvStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_msgs::msg::SdvStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_msgs::msg::SdvStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_msgs__msg__SdvStatus
    std::shared_ptr<sdv_msgs::msg::SdvStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_msgs__msg__SdvStatus
    std::shared_ptr<sdv_msgs::msg::SdvStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SdvStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->energized != other.energized) {
      return false;
    }
    if (this->stand_by != other.stand_by) {
      return false;
    }
    if (this->rotate != other.rotate) {
      return false;
    }
    if (this->turn_left != other.turn_left) {
      return false;
    }
    if (this->turn_right != other.turn_right) {
      return false;
    }
    if (this->reverse != other.reverse) {
      return false;
    }
    if (this->forward != other.forward) {
      return false;
    }
    if (this->low_batt != other.low_batt) {
      return false;
    }
    if (this->emergency_stop != other.emergency_stop) {
      return false;
    }
    if (this->reset_pc != other.reset_pc) {
      return false;
    }
    if (this->poweroff_pc != other.poweroff_pc) {
      return false;
    }
    if (this->obstacle_stop != other.obstacle_stop) {
      return false;
    }
    if (this->over_load != other.over_load) {
      return false;
    }
    if (this->connection_error != other.connection_error) {
      return false;
    }
    if (this->tag_disconnected != other.tag_disconnected) {
      return false;
    }
    if (this->tag_init != other.tag_init) {
      return false;
    }
    if (this->tag_is_on_platform != other.tag_is_on_platform) {
      return false;
    }
    if (this->tag_read_error != other.tag_read_error) {
      return false;
    }
    if (this->tag_write_error != other.tag_write_error) {
      return false;
    }
    if (this->tag_close != other.tag_close) {
      return false;
    }
    if (this->not_connection_error != other.not_connection_error) {
      return false;
    }
    if (this->connection_error_imu != other.connection_error_imu) {
      return false;
    }
    if (this->connection_error_msp != other.connection_error_msp) {
      return false;
    }
    if (this->connection_error_rfid != other.connection_error_rfid) {
      return false;
    }
    if (this->connection_error_ult != other.connection_error_ult) {
      return false;
    }
    if (this->connection_error_batt != other.connection_error_batt) {
      return false;
    }
    return true;
  }
  bool operator!=(const SdvStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SdvStatus_

// alias to use template instance with default allocator
using SdvStatus =
  sdv_msgs::msg::SdvStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__SDV_STATUS__STRUCT_HPP_
