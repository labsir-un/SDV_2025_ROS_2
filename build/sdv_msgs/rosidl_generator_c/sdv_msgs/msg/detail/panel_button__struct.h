// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_msgs:msg/PanelButton.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/panel_button.h"


#ifndef SDV_MSGS__MSG__DETAIL__PANEL_BUTTON__STRUCT_H_
#define SDV_MSGS__MSG__DETAIL__PANEL_BUTTON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'RELEASED'.
enum
{
  sdv_msgs__msg__PanelButton__RELEASED = 0
};

/// Constant 'ONE_PRESSED'.
enum
{
  sdv_msgs__msg__PanelButton__ONE_PRESSED = 1
};

/// Constant 'ONE_LONG_PRESSED'.
enum
{
  sdv_msgs__msg__PanelButton__ONE_LONG_PRESSED = 2
};

/// Constant 'TWO_PRESSED'.
enum
{
  sdv_msgs__msg__PanelButton__TWO_PRESSED = 3
};

/// Constant 'THREE_PRESSED'.
enum
{
  sdv_msgs__msg__PanelButton__THREE_PRESSED = 4
};

/// Constant 'HARD_PRESSED'.
enum
{
  sdv_msgs__msg__PanelButton__HARD_PRESSED = 5
};

/// Constant 'NEVER_PRESSED'.
enum
{
  sdv_msgs__msg__PanelButton__NEVER_PRESSED = 6
};

/// Constant 'FAILED_PRESSED'.
enum
{
  sdv_msgs__msg__PanelButton__FAILED_PRESSED = 7
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/PanelButton in the package sdv_msgs.
/**
  * PanelButton.msg
 */
typedef struct sdv_msgs__msg__PanelButton
{
  std_msgs__msg__Header header;
  uint8_t status;
} sdv_msgs__msg__PanelButton;

// Struct for a sequence of sdv_msgs__msg__PanelButton.
typedef struct sdv_msgs__msg__PanelButton__Sequence
{
  sdv_msgs__msg__PanelButton * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_msgs__msg__PanelButton__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_MSGS__MSG__DETAIL__PANEL_BUTTON__STRUCT_H_
