// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_msgs:msg/ImuRaw.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/imu_raw.h"


#ifndef SDV_MSGS__MSG__DETAIL__IMU_RAW__STRUCT_H_
#define SDV_MSGS__MSG__DETAIL__IMU_RAW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'angular_velocity'
// Member 'linear_acceleration'
// Member 'magnetic_field'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/ImuRaw in the package sdv_msgs.
/**
  * ImuRaw.msg
 */
typedef struct sdv_msgs__msg__ImuRaw
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 angular_velocity;
  geometry_msgs__msg__Vector3 linear_acceleration;
  geometry_msgs__msg__Vector3 magnetic_field;
} sdv_msgs__msg__ImuRaw;

// Struct for a sequence of sdv_msgs__msg__ImuRaw.
typedef struct sdv_msgs__msg__ImuRaw__Sequence
{
  sdv_msgs__msg__ImuRaw * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_msgs__msg__ImuRaw__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_MSGS__MSG__DETAIL__IMU_RAW__STRUCT_H_
