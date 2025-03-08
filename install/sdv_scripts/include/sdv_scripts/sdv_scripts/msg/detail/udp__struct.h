// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_scripts:msg/Udp.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_scripts/msg/udp.h"


#ifndef SDV_SCRIPTS__MSG__DETAIL__UDP__STRUCT_H_
#define SDV_SCRIPTS__MSG__DETAIL__UDP__STRUCT_H_

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
// Member 'content'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Udp in the package sdv_scripts.
/**
  * Udp.msg
 */
typedef struct sdv_scripts__msg__Udp
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String content;
} sdv_scripts__msg__Udp;

// Struct for a sequence of sdv_scripts__msg__Udp.
typedef struct sdv_scripts__msg__Udp__Sequence
{
  sdv_scripts__msg__Udp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_scripts__msg__Udp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_SCRIPTS__MSG__DETAIL__UDP__STRUCT_H_
