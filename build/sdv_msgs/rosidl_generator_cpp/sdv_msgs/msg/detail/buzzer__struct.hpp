// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_msgs:msg/Buzzer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/buzzer.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__BUZZER__STRUCT_HPP_
#define SDV_MSGS__MSG__DETAIL__BUZZER__STRUCT_HPP_

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
# define DEPRECATED__sdv_msgs__msg__Buzzer __attribute__((deprecated))
#else
# define DEPRECATED__sdv_msgs__msg__Buzzer __declspec(deprecated)
#endif

namespace sdv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Buzzer_
{
  using Type = Buzzer_<ContainerAllocator>;

  explicit Buzzer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_on = 0;
      this->time_off = 0;
      this->cicles = 0;
    }
  }

  explicit Buzzer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_on = 0;
      this->time_off = 0;
      this->cicles = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _time_on_type =
    uint8_t;
  _time_on_type time_on;
  using _time_off_type =
    uint8_t;
  _time_off_type time_off;
  using _cicles_type =
    uint8_t;
  _cicles_type cicles;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__time_on(
    const uint8_t & _arg)
  {
    this->time_on = _arg;
    return *this;
  }
  Type & set__time_off(
    const uint8_t & _arg)
  {
    this->time_off = _arg;
    return *this;
  }
  Type & set__cicles(
    const uint8_t & _arg)
  {
    this->cicles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdv_msgs::msg::Buzzer_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_msgs::msg::Buzzer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_msgs::msg::Buzzer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_msgs::msg::Buzzer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::Buzzer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::Buzzer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::Buzzer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::Buzzer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_msgs::msg::Buzzer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_msgs::msg::Buzzer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_msgs__msg__Buzzer
    std::shared_ptr<sdv_msgs::msg::Buzzer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_msgs__msg__Buzzer
    std::shared_ptr<sdv_msgs::msg::Buzzer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Buzzer_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_on != other.time_on) {
      return false;
    }
    if (this->time_off != other.time_off) {
      return false;
    }
    if (this->cicles != other.cicles) {
      return false;
    }
    return true;
  }
  bool operator!=(const Buzzer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Buzzer_

// alias to use template instance with default allocator
using Buzzer =
  sdv_msgs::msg::Buzzer_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__BUZZER__STRUCT_HPP_
