// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_msgs:msg/TagRfid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/tag_rfid.h"


#ifndef SDV_MSGS__MSG__DETAIL__TAG_RFID__STRUCT_H_
#define SDV_MSGS__MSG__DETAIL__TAG_RFID__STRUCT_H_

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
// Member 'process'
// Member 'product'
// Member 'start_point'
// Member 'end_point'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TagRfid in the package sdv_msgs.
/**
  * TagRfid.msg
 */
typedef struct sdv_msgs__msg__TagRfid
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String process;
  rosidl_runtime_c__String product;
  rosidl_runtime_c__String start_point;
  rosidl_runtime_c__String end_point;
} sdv_msgs__msg__TagRfid;

// Struct for a sequence of sdv_msgs__msg__TagRfid.
typedef struct sdv_msgs__msg__TagRfid__Sequence
{
  sdv_msgs__msg__TagRfid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_msgs__msg__TagRfid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_MSGS__MSG__DETAIL__TAG_RFID__STRUCT_H_
