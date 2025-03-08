// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_msgs:msg/TagRfid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/tag_rfid.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__TAG_RFID__STRUCT_HPP_
#define SDV_MSGS__MSG__DETAIL__TAG_RFID__STRUCT_HPP_

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
# define DEPRECATED__sdv_msgs__msg__TagRfid __attribute__((deprecated))
#else
# define DEPRECATED__sdv_msgs__msg__TagRfid __declspec(deprecated)
#endif

namespace sdv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TagRfid_
{
  using Type = TagRfid_<ContainerAllocator>;

  explicit TagRfid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->process = "";
      this->product = "";
      this->start_point = "";
      this->end_point = "";
    }
  }

  explicit TagRfid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    process(_alloc),
    product(_alloc),
    start_point(_alloc),
    end_point(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->process = "";
      this->product = "";
      this->start_point = "";
      this->end_point = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _process_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _process_type process;
  using _product_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _product_type product;
  using _start_point_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _start_point_type start_point;
  using _end_point_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _end_point_type end_point;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__process(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->process = _arg;
    return *this;
  }
  Type & set__product(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->product = _arg;
    return *this;
  }
  Type & set__start_point(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->start_point = _arg;
    return *this;
  }
  Type & set__end_point(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->end_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdv_msgs::msg::TagRfid_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_msgs::msg::TagRfid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_msgs::msg::TagRfid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_msgs::msg::TagRfid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::TagRfid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::TagRfid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::TagRfid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::TagRfid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_msgs::msg::TagRfid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_msgs::msg::TagRfid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_msgs__msg__TagRfid
    std::shared_ptr<sdv_msgs::msg::TagRfid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_msgs__msg__TagRfid
    std::shared_ptr<sdv_msgs::msg::TagRfid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TagRfid_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->process != other.process) {
      return false;
    }
    if (this->product != other.product) {
      return false;
    }
    if (this->start_point != other.start_point) {
      return false;
    }
    if (this->end_point != other.end_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const TagRfid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TagRfid_

// alias to use template instance with default allocator
using TagRfid =
  sdv_msgs::msg::TagRfid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__TAG_RFID__STRUCT_HPP_
