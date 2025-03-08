// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_msgs:msg/MotorDriver.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/motor_driver.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__MOTOR_DRIVER__STRUCT_HPP_
#define SDV_MSGS__MSG__DETAIL__MOTOR_DRIVER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sdv_msgs__msg__MotorDriver __attribute__((deprecated))
#else
# define DEPRECATED__sdv_msgs__msg__MotorDriver __declspec(deprecated)
#endif

namespace sdv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorDriver_
{
  using Type = MotorDriver_<ContainerAllocator>;

  explicit MotorDriver_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->current = 0.0f;
      this->driver_status = "";
    }
  }

  explicit MotorDriver_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    driver_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->current = 0.0f;
      this->driver_status = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _current_type =
    float;
  _current_type current;
  using _driver_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _driver_status_type driver_status;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__current(
    const float & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__driver_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->driver_status = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> UNKNOWN;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CORRECT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> DAMAGED;

  // pointer types
  using RawPtr =
    sdv_msgs::msg::MotorDriver_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_msgs::msg::MotorDriver_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_msgs::msg::MotorDriver_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_msgs::msg::MotorDriver_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::MotorDriver_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::MotorDriver_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::MotorDriver_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::MotorDriver_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_msgs::msg::MotorDriver_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_msgs::msg::MotorDriver_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_msgs__msg__MotorDriver
    std::shared_ptr<sdv_msgs::msg::MotorDriver_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_msgs__msg__MotorDriver
    std::shared_ptr<sdv_msgs::msg::MotorDriver_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorDriver_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->driver_status != other.driver_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorDriver_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorDriver_

// alias to use template instance with default allocator
using MotorDriver =
  sdv_msgs::msg::MotorDriver_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
MotorDriver_<ContainerAllocator>::UNKNOWN = "unknown";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
MotorDriver_<ContainerAllocator>::CORRECT = "correct";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
MotorDriver_<ContainerAllocator>::DAMAGED = "damaged";

}  // namespace msg

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__MOTOR_DRIVER__STRUCT_HPP_
