// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_msgs:msg/Flexiforce.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/flexiforce.h"


#ifndef SDV_MSGS__MSG__DETAIL__FLEXIFORCE__STRUCT_H_
#define SDV_MSGS__MSG__DETAIL__FLEXIFORCE__STRUCT_H_

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

/// Struct defined in msg/Flexiforce in the package sdv_msgs.
/**
  * Flexiforce.msg
 */
typedef struct sdv_msgs__msg__Flexiforce
{
  std_msgs__msg__Header header;
  double front_left;
  double front_right;
  double back_left;
  double back_right;
} sdv_msgs__msg__Flexiforce;

// Struct for a sequence of sdv_msgs__msg__Flexiforce.
typedef struct sdv_msgs__msg__Flexiforce__Sequence
{
  sdv_msgs__msg__Flexiforce * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_msgs__msg__Flexiforce__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_MSGS__MSG__DETAIL__FLEXIFORCE__STRUCT_H_
