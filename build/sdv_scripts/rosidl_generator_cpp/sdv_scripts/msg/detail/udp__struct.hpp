// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_scripts:msg/Udp.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_scripts/msg/udp.hpp"


#ifndef SDV_SCRIPTS__MSG__DETAIL__UDP__STRUCT_HPP_
#define SDV_SCRIPTS__MSG__DETAIL__UDP__STRUCT_HPP_

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
# define DEPRECATED__sdv_scripts__msg__Udp __attribute__((deprecated))
#else
# define DEPRECATED__sdv_scripts__msg__Udp __declspec(deprecated)
#endif

namespace sdv_scripts
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Udp_
{
  using Type = Udp_<ContainerAllocator>;

  explicit Udp_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->content = "";
    }
  }

  explicit Udp_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    content(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->content = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _content_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _content_type content;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__content(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->content = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdv_scripts::msg::Udp_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_scripts::msg::Udp_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_scripts::msg::Udp_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_scripts::msg::Udp_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_scripts::msg::Udp_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_scripts::msg::Udp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_scripts::msg::Udp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_scripts::msg::Udp_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_scripts::msg::Udp_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_scripts::msg::Udp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_scripts__msg__Udp
    std::shared_ptr<sdv_scripts::msg::Udp_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_scripts__msg__Udp
    std::shared_ptr<sdv_scripts::msg::Udp_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Udp_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->content != other.content) {
      return false;
    }
    return true;
  }
  bool operator!=(const Udp_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Udp_

// alias to use template instance with default allocator
using Udp =
  sdv_scripts::msg::Udp_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdv_scripts

#endif  // SDV_SCRIPTS__MSG__DETAIL__UDP__STRUCT_HPP_
