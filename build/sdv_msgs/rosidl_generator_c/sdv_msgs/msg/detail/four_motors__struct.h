// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_msgs:msg/FourMotors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/four_motors.h"


#ifndef SDV_MSGS__MSG__DETAIL__FOUR_MOTORS__STRUCT_H_
#define SDV_MSGS__MSG__DETAIL__FOUR_MOTORS__STRUCT_H_

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

/// Struct defined in msg/FourMotors in the package sdv_msgs.
/**
  * FourMotors.msg
 */
typedef struct sdv_msgs__msg__FourMotors
{
  std_msgs__msg__Header header;
  double back_left_rps;
  double back_right_rps;
  double front_left_rps;
  double front_right_rps;
} sdv_msgs__msg__FourMotors;

// Struct for a sequence of sdv_msgs__msg__FourMotors.
typedef struct sdv_msgs__msg__FourMotors__Sequence
{
  sdv_msgs__msg__FourMotors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_msgs__msg__FourMotors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_MSGS__MSG__DETAIL__FOUR_MOTORS__STRUCT_H_
