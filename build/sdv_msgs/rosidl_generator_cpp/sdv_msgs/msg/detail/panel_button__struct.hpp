// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_msgs:msg/PanelButton.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/panel_button.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__PANEL_BUTTON__STRUCT_HPP_
#define SDV_MSGS__MSG__DETAIL__PANEL_BUTTON__STRUCT_HPP_

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
# define DEPRECATED__sdv_msgs__msg__PanelButton __attribute__((deprecated))
#else
# define DEPRECATED__sdv_msgs__msg__PanelButton __declspec(deprecated)
#endif

namespace sdv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PanelButton_
{
  using Type = PanelButton_<ContainerAllocator>;

  explicit PanelButton_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit PanelButton_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _status_type =
    uint8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RELEASED =
    0u;
  static constexpr uint8_t ONE_PRESSED =
    1u;
  static constexpr uint8_t ONE_LONG_PRESSED =
    2u;
  static constexpr uint8_t TWO_PRESSED =
    3u;
  static constexpr uint8_t THREE_PRESSED =
    4u;
  static constexpr uint8_t HARD_PRESSED =
    5u;
  static constexpr uint8_t NEVER_PRESSED =
    6u;
  static constexpr uint8_t FAILED_PRESSED =
    7u;

  // pointer types
  using RawPtr =
    sdv_msgs::msg::PanelButton_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_msgs::msg::PanelButton_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_msgs::msg::PanelButton_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_msgs::msg::PanelButton_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::PanelButton_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::PanelButton_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::PanelButton_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::PanelButton_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_msgs::msg::PanelButton_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_msgs::msg::PanelButton_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_msgs__msg__PanelButton
    std::shared_ptr<sdv_msgs::msg::PanelButton_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_msgs__msg__PanelButton
    std::shared_ptr<sdv_msgs::msg::PanelButton_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PanelButton_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const PanelButton_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PanelButton_

// alias to use template instance with default allocator
using PanelButton =
  sdv_msgs::msg::PanelButton_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PanelButton_<ContainerAllocator>::RELEASED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PanelButton_<ContainerAllocator>::ONE_PRESSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PanelButton_<ContainerAllocator>::ONE_LONG_PRESSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PanelButton_<ContainerAllocator>::TWO_PRESSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PanelButton_<ContainerAllocator>::THREE_PRESSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PanelButton_<ContainerAllocator>::HARD_PRESSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PanelButton_<ContainerAllocator>::NEVER_PRESSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PanelButton_<ContainerAllocator>::FAILED_PRESSED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__PANEL_BUTTON__STRUCT_HPP_
