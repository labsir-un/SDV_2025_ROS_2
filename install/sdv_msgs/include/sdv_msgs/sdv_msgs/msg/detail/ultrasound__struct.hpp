// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_msgs:msg/Ultrasound.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/ultrasound.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__ULTRASOUND__STRUCT_HPP_
#define SDV_MSGS__MSG__DETAIL__ULTRASOUND__STRUCT_HPP_

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
# define DEPRECATED__sdv_msgs__msg__Ultrasound __attribute__((deprecated))
#else
# define DEPRECATED__sdv_msgs__msg__Ultrasound __declspec(deprecated)
#endif

namespace sdv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ultrasound_
{
  using Type = Ultrasound_<ContainerAllocator>;

  explicit Ultrasound_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Ultrasound_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensors_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _sensors_type sensors;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensors(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->sensors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdv_msgs::msg::Ultrasound_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_msgs::msg::Ultrasound_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_msgs::msg::Ultrasound_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_msgs::msg::Ultrasound_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::Ultrasound_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::Ultrasound_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::Ultrasound_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::Ultrasound_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_msgs::msg::Ultrasound_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_msgs::msg::Ultrasound_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_msgs__msg__Ultrasound
    std::shared_ptr<sdv_msgs::msg::Ultrasound_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_msgs__msg__Ultrasound
    std::shared_ptr<sdv_msgs::msg::Ultrasound_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ultrasound_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensors != other.sensors) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ultrasound_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ultrasound_

// alias to use template instance with default allocator
using Ultrasound =
  sdv_msgs::msg::Ultrasound_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__ULTRASOUND__STRUCT_HPP_
