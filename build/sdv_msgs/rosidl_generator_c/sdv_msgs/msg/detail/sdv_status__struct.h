// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_msgs:msg/SdvStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/sdv_status.h"


#ifndef SDV_MSGS__MSG__DETAIL__SDV_STATUS__STRUCT_H_
#define SDV_MSGS__MSG__DETAIL__SDV_STATUS__STRUCT_H_

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

/// Struct defined in msg/SdvStatus in the package sdv_msgs.
/**
  * sdv_status.msg
 */
typedef struct sdv_msgs__msg__SdvStatus
{
  std_msgs__msg__Header header;
  bool energized;
  bool stand_by;
  bool rotate;
  bool turn_left;
  bool turn_right;
  bool reverse;
  bool forward;
  bool low_batt;
  bool emergency_stop;
  bool reset_pc;
  bool poweroff_pc;
  bool obstacle_stop;
  bool over_load;
  bool connection_error;
  bool tag_disconnected;
  bool tag_init;
  bool tag_is_on_platform;
  bool tag_read_error;
  bool tag_write_error;
  bool tag_close;
  bool not_connection_error;
  bool connection_error_imu;
  bool connection_error_msp;
  bool connection_error_rfid;
  bool connection_error_ult;
  bool connection_error_batt;
} sdv_msgs__msg__SdvStatus;

// Struct for a sequence of sdv_msgs__msg__SdvStatus.
typedef struct sdv_msgs__msg__SdvStatus__Sequence
{
  sdv_msgs__msg__SdvStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_msgs__msg__SdvStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_MSGS__MSG__DETAIL__SDV_STATUS__STRUCT_H_
