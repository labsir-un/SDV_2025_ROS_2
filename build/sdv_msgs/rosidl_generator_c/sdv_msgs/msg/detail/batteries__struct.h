// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_msgs:msg/Batteries.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/batteries.h"


#ifndef SDV_MSGS__MSG__DETAIL__BATTERIES__STRUCT_H_
#define SDV_MSGS__MSG__DETAIL__BATTERIES__STRUCT_H_

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
// Member 'batteries'
#include "sdv_msgs/msg/detail/battery__struct.h"

/// Struct defined in msg/Batteries in the package sdv_msgs.
/**
  * Battery.msg
 */
typedef struct sdv_msgs__msg__Batteries
{
  std_msgs__msg__Header header;
  sdv_msgs__msg__Battery__Sequence batteries;
} sdv_msgs__msg__Batteries;

// Struct for a sequence of sdv_msgs__msg__Batteries.
typedef struct sdv_msgs__msg__Batteries__Sequence
{
  sdv_msgs__msg__Batteries * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_msgs__msg__Batteries__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_MSGS__MSG__DETAIL__BATTERIES__STRUCT_H_
