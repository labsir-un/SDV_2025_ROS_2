// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_msgs:msg/Flexiforce.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/flexiforce.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__FLEXIFORCE__STRUCT_HPP_
#define SDV_MSGS__MSG__DETAIL__FLEXIFORCE__STRUCT_HPP_

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
# define DEPRECATED__sdv_msgs__msg__Flexiforce __attribute__((deprecated))
#else
# define DEPRECATED__sdv_msgs__msg__Flexiforce __declspec(deprecated)
#endif

namespace sdv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Flexiforce_
{
  using Type = Flexiforce_<ContainerAllocator>;

  explicit Flexiforce_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left = 0.0;
      this->front_right = 0.0;
      this->back_left = 0.0;
      this->back_right = 0.0;
    }
  }

  explicit Flexiforce_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left = 0.0;
      this->front_right = 0.0;
      this->back_left = 0.0;
      this->back_right = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _front_left_type =
    double;
  _front_left_type front_left;
  using _front_right_type =
    double;
  _front_right_type front_right;
  using _back_left_type =
    double;
  _back_left_type back_left;
  using _back_right_type =
    double;
  _back_right_type back_right;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__front_left(
    const double & _arg)
  {
    this->front_left = _arg;
    return *this;
  }
  Type & set__front_right(
    const double & _arg)
  {
    this->front_right = _arg;
    return *this;
  }
  Type & set__back_left(
    const double & _arg)
  {
    this->back_left = _arg;
    return *this;
  }
  Type & set__back_right(
    const double & _arg)
  {
    this->back_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdv_msgs::msg::Flexiforce_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_msgs::msg::Flexiforce_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_msgs::msg::Flexiforce_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_msgs::msg::Flexiforce_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::Flexiforce_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::Flexiforce_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::Flexiforce_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::Flexiforce_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_msgs::msg::Flexiforce_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_msgs::msg::Flexiforce_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_msgs__msg__Flexiforce
    std::shared_ptr<sdv_msgs::msg::Flexiforce_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_msgs__msg__Flexiforce
    std::shared_ptr<sdv_msgs::msg::Flexiforce_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Flexiforce_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->front_left != other.front_left) {
      return false;
    }
    if (this->front_right != other.front_right) {
      return false;
    }
    if (this->back_left != other.back_left) {
      return false;
    }
    if (this->back_right != other.back_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const Flexiforce_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Flexiforce_

// alias to use template instance with default allocator
using Flexiforce =
  sdv_msgs::msg::Flexiforce_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__FLEXIFORCE__STRUCT_HPP_
