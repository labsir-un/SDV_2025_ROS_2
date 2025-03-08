// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_msgs:msg/Ultrasound.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/ultrasound.h"


#ifndef SDV_MSGS__MSG__DETAIL__ULTRASOUND__STRUCT_H_
#define SDV_MSGS__MSG__DETAIL__ULTRASOUND__STRUCT_H_

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
// Member 'sensors'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Ultrasound in the package sdv_msgs.
/**
  * Ultrasound.msg
 */
typedef struct sdv_msgs__msg__Ultrasound
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__float__Sequence sensors;
} sdv_msgs__msg__Ultrasound;

// Struct for a sequence of sdv_msgs__msg__Ultrasound.
typedef struct sdv_msgs__msg__Ultrasound__Sequence
{
  sdv_msgs__msg__Ultrasound * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_msgs__msg__Ultrasound__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_MSGS__MSG__DETAIL__ULTRASOUND__STRUCT_H_
