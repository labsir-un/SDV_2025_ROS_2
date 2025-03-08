// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_msgs:msg/ImuRaw.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/imu_raw.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__IMU_RAW__STRUCT_HPP_
#define SDV_MSGS__MSG__DETAIL__IMU_RAW__STRUCT_HPP_

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
// Member 'angular_velocity'
// Member 'linear_acceleration'
// Member 'magnetic_field'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sdv_msgs__msg__ImuRaw __attribute__((deprecated))
#else
# define DEPRECATED__sdv_msgs__msg__ImuRaw __declspec(deprecated)
#endif

namespace sdv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImuRaw_
{
  using Type = ImuRaw_<ContainerAllocator>;

  explicit ImuRaw_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    angular_velocity(_init),
    linear_acceleration(_init),
    magnetic_field(_init)
  {
    (void)_init;
  }

  explicit ImuRaw_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    angular_velocity(_alloc, _init),
    linear_acceleration(_alloc, _init),
    magnetic_field(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _angular_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _linear_acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_acceleration_type linear_acceleration;
  using _magnetic_field_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _magnetic_field_type magnetic_field;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__linear_acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear_acceleration = _arg;
    return *this;
  }
  Type & set__magnetic_field(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->magnetic_field = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdv_msgs::msg::ImuRaw_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_msgs::msg::ImuRaw_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_msgs::msg::ImuRaw_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_msgs::msg::ImuRaw_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::ImuRaw_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::ImuRaw_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::ImuRaw_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::ImuRaw_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_msgs::msg::ImuRaw_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_msgs::msg::ImuRaw_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_msgs__msg__ImuRaw
    std::shared_ptr<sdv_msgs::msg::ImuRaw_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_msgs__msg__ImuRaw
    std::shared_ptr<sdv_msgs::msg::ImuRaw_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuRaw_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    if (this->magnetic_field != other.magnetic_field) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuRaw_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuRaw_

// alias to use template instance with default allocator
using ImuRaw =
  sdv_msgs::msg::ImuRaw_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__IMU_RAW__STRUCT_HPP_
