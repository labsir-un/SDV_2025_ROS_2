// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_msgs:msg/LED.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/led.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__LED__STRUCT_HPP_
#define SDV_MSGS__MSG__DETAIL__LED__STRUCT_HPP_

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
# define DEPRECATED__sdv_msgs__msg__LED __attribute__((deprecated))
#else
# define DEPRECATED__sdv_msgs__msg__LED __declspec(deprecated)
#endif

namespace sdv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LED_
{
  using Type = LED_<ContainerAllocator>;

  explicit LED_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red = 0;
      this->green = 0;
      this->blue = 0;
      this->white = 0;
    }
  }

  explicit LED_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red = 0;
      this->green = 0;
      this->blue = 0;
      this->white = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _red_type =
    uint8_t;
  _red_type red;
  using _green_type =
    uint8_t;
  _green_type green;
  using _blue_type =
    uint8_t;
  _blue_type blue;
  using _white_type =
    uint8_t;
  _white_type white;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__red(
    const uint8_t & _arg)
  {
    this->red = _arg;
    return *this;
  }
  Type & set__green(
    const uint8_t & _arg)
  {
    this->green = _arg;
    return *this;
  }
  Type & set__blue(
    const uint8_t & _arg)
  {
    this->blue = _arg;
    return *this;
  }
  Type & set__white(
    const uint8_t & _arg)
  {
    this->white = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdv_msgs::msg::LED_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_msgs::msg::LED_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_msgs::msg::LED_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_msgs::msg::LED_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::LED_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::LED_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::LED_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::LED_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_msgs::msg::LED_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_msgs::msg::LED_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_msgs__msg__LED
    std::shared_ptr<sdv_msgs::msg::LED_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_msgs__msg__LED
    std::shared_ptr<sdv_msgs::msg::LED_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LED_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->red != other.red) {
      return false;
    }
    if (this->green != other.green) {
      return false;
    }
    if (this->blue != other.blue) {
      return false;
    }
    if (this->white != other.white) {
      return false;
    }
    return true;
  }
  bool operator!=(const LED_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LED_

// alias to use template instance with default allocator
using LED =
  sdv_msgs::msg::LED_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__LED__STRUCT_HPP_
