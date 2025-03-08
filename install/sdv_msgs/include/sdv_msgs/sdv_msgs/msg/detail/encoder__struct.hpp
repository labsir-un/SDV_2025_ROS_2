// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_msgs:msg/Encoder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/encoder.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__ENCODER__STRUCT_HPP_
#define SDV_MSGS__MSG__DETAIL__ENCODER__STRUCT_HPP_

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
# define DEPRECATED__sdv_msgs__msg__Encoder __attribute__((deprecated))
#else
# define DEPRECATED__sdv_msgs__msg__Encoder __declspec(deprecated)
#endif

namespace sdv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Encoder_
{
  using Type = Encoder_<ContainerAllocator>;

  explicit Encoder_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rpm_left = 0l;
      this->rpm_right = 0l;
      this->motor_current_left = 0l;
      this->motor_current_right = 0l;
    }
  }

  explicit Encoder_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rpm_left = 0l;
      this->rpm_right = 0l;
      this->motor_current_left = 0l;
      this->motor_current_right = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rpm_left_type =
    int32_t;
  _rpm_left_type rpm_left;
  using _rpm_right_type =
    int32_t;
  _rpm_right_type rpm_right;
  using _motor_current_left_type =
    int32_t;
  _motor_current_left_type motor_current_left;
  using _motor_current_right_type =
    int32_t;
  _motor_current_right_type motor_current_right;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rpm_left(
    const int32_t & _arg)
  {
    this->rpm_left = _arg;
    return *this;
  }
  Type & set__rpm_right(
    const int32_t & _arg)
  {
    this->rpm_right = _arg;
    return *this;
  }
  Type & set__motor_current_left(
    const int32_t & _arg)
  {
    this->motor_current_left = _arg;
    return *this;
  }
  Type & set__motor_current_right(
    const int32_t & _arg)
  {
    this->motor_current_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdv_msgs::msg::Encoder_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_msgs::msg::Encoder_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_msgs::msg::Encoder_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_msgs::msg::Encoder_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::Encoder_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::Encoder_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::Encoder_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::Encoder_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_msgs::msg::Encoder_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_msgs::msg::Encoder_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_msgs__msg__Encoder
    std::shared_ptr<sdv_msgs::msg::Encoder_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_msgs__msg__Encoder
    std::shared_ptr<sdv_msgs::msg::Encoder_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Encoder_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rpm_left != other.rpm_left) {
      return false;
    }
    if (this->rpm_right != other.rpm_right) {
      return false;
    }
    if (this->motor_current_left != other.motor_current_left) {
      return false;
    }
    if (this->motor_current_right != other.motor_current_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const Encoder_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Encoder_

// alias to use template instance with default allocator
using Encoder =
  sdv_msgs::msg::Encoder_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__ENCODER__STRUCT_HPP_
