// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_msgs:msg/Buzzer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/buzzer.h"


#ifndef SDV_MSGS__MSG__DETAIL__BUZZER__STRUCT_H_
#define SDV_MSGS__MSG__DETAIL__BUZZER__STRUCT_H_

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

/// Struct defined in msg/Buzzer in the package sdv_msgs.
/**
  * Buzzer.msg
 */
typedef struct sdv_msgs__msg__Buzzer
{
  std_msgs__msg__Header header;
  uint8_t time_on;
  uint8_t time_off;
  uint8_t cicles;
} sdv_msgs__msg__Buzzer;

// Struct for a sequence of sdv_msgs__msg__Buzzer.
typedef struct sdv_msgs__msg__Buzzer__Sequence
{
  sdv_msgs__msg__Buzzer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_msgs__msg__Buzzer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_MSGS__MSG__DETAIL__BUZZER__STRUCT_H_
