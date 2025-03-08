// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_msgs:msg/LED.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/led.h"


#ifndef SDV_MSGS__MSG__DETAIL__LED__STRUCT_H_
#define SDV_MSGS__MSG__DETAIL__LED__STRUCT_H_

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

/// Struct defined in msg/LED in the package sdv_msgs.
/**
  * LED.msg
 */
typedef struct sdv_msgs__msg__LED
{
  std_msgs__msg__Header header;
  uint8_t red;
  uint8_t green;
  uint8_t blue;
  uint8_t white;
} sdv_msgs__msg__LED;

// Struct for a sequence of sdv_msgs__msg__LED.
typedef struct sdv_msgs__msg__LED__Sequence
{
  sdv_msgs__msg__LED * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_msgs__msg__LED__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_MSGS__MSG__DETAIL__LED__STRUCT_H_
