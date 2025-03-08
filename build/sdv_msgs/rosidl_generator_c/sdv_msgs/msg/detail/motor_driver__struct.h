// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_msgs:msg/MotorDriver.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/motor_driver.h"


#ifndef SDV_MSGS__MSG__DETAIL__MOTOR_DRIVER__STRUCT_H_
#define SDV_MSGS__MSG__DETAIL__MOTOR_DRIVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNKNOWN'.
static const char * const sdv_msgs__msg__MotorDriver__UNKNOWN = "unknown";

/// Constant 'CORRECT'.
static const char * const sdv_msgs__msg__MotorDriver__CORRECT = "correct";

/// Constant 'DAMAGED'.
static const char * const sdv_msgs__msg__MotorDriver__DAMAGED = "damaged";

// Include directives for member types
// Member 'name'
// Member 'driver_status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MotorDriver in the package sdv_msgs.
/**
  * MotorDriver.msg
 */
typedef struct sdv_msgs__msg__MotorDriver
{
  rosidl_runtime_c__String name;
  float current;
  rosidl_runtime_c__String driver_status;
} sdv_msgs__msg__MotorDriver;

// Struct for a sequence of sdv_msgs__msg__MotorDriver.
typedef struct sdv_msgs__msg__MotorDriver__Sequence
{
  sdv_msgs__msg__MotorDriver * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_msgs__msg__MotorDriver__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_MSGS__MSG__DETAIL__MOTOR_DRIVER__STRUCT_H_
