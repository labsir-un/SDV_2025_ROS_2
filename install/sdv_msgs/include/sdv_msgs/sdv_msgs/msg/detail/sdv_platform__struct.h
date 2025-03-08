// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_msgs:msg/SdvPlatform.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/sdv_platform.h"


#ifndef SDV_MSGS__MSG__DETAIL__SDV_PLATFORM__STRUCT_H_
#define SDV_MSGS__MSG__DETAIL__SDV_PLATFORM__STRUCT_H_

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
// Member 'status'
// Member 'source'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SdvPlatform in the package sdv_msgs.
/**
  * sdv_platform.msg
 */
typedef struct sdv_msgs__msg__SdvPlatform
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String status;
  rosidl_runtime_c__String source;
} sdv_msgs__msg__SdvPlatform;

// Struct for a sequence of sdv_msgs__msg__SdvPlatform.
typedef struct sdv_msgs__msg__SdvPlatform__Sequence
{
  sdv_msgs__msg__SdvPlatform * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_msgs__msg__SdvPlatform__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_MSGS__MSG__DETAIL__SDV_PLATFORM__STRUCT_H_
