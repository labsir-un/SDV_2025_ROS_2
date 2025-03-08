// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_msgs:msg/Batteries.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/batteries.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__BATTERIES__STRUCT_HPP_
#define SDV_MSGS__MSG__DETAIL__BATTERIES__STRUCT_HPP_

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
// Member 'batteries'
#include "sdv_msgs/msg/detail/battery__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sdv_msgs__msg__Batteries __attribute__((deprecated))
#else
# define DEPRECATED__sdv_msgs__msg__Batteries __declspec(deprecated)
#endif

namespace sdv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Batteries_
{
  using Type = Batteries_<ContainerAllocator>;

  explicit Batteries_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Batteries_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _batteries_type =
    std::vector<sdv_msgs::msg::Battery_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sdv_msgs::msg::Battery_<ContainerAllocator>>>;
  _batteries_type batteries;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__batteries(
    const std::vector<sdv_msgs::msg::Battery_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sdv_msgs::msg::Battery_<ContainerAllocator>>> & _arg)
  {
    this->batteries = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdv_msgs::msg::Batteries_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_msgs::msg::Batteries_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_msgs::msg::Batteries_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_msgs::msg::Batteries_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::Batteries_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::Batteries_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::Batteries_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::Batteries_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_msgs::msg::Batteries_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_msgs::msg::Batteries_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_msgs__msg__Batteries
    std::shared_ptr<sdv_msgs::msg::Batteries_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_msgs__msg__Batteries
    std::shared_ptr<sdv_msgs::msg::Batteries_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Batteries_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->batteries != other.batteries) {
      return false;
    }
    return true;
  }
  bool operator!=(const Batteries_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Batteries_

// alias to use template instance with default allocator
using Batteries =
  sdv_msgs::msg::Batteries_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__BATTERIES__STRUCT_HPP_
