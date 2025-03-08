// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_msgs:msg/Battery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/battery.h"


#ifndef SDV_MSGS__MSG__DETAIL__BATTERY__STRUCT_H_
#define SDV_MSGS__MSG__DETAIL__BATTERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'cell_voltages'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Battery in the package sdv_msgs.
/**
  * Battery.msg
 */
typedef struct sdv_msgs__msg__Battery
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__float__Sequence cell_voltages;
} sdv_msgs__msg__Battery;

// Struct for a sequence of sdv_msgs__msg__Battery.
typedef struct sdv_msgs__msg__Battery__Sequence
{
  sdv_msgs__msg__Battery * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_msgs__msg__Battery__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_MSGS__MSG__DETAIL__BATTERY__STRUCT_H_
