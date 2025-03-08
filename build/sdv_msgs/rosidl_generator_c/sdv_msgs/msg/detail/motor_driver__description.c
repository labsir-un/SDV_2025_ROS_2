// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sdv_msgs:msg/MotorDriver.idl
// generated code does not contain a copyright notice

#include "sdv_msgs/msg/detail/motor_driver__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
const rosidl_type_hash_t *
sdv_msgs__msg__MotorDriver__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa5, 0x6a, 0x1a, 0x63, 0x6a, 0xac, 0x14, 0x14,
      0x8e, 0x63, 0xab, 0xbd, 0x3d, 0x29, 0xc4, 0xe2,
      0xc2, 0x8c, 0x7f, 0xda, 0x20, 0x1d, 0xe4, 0x75,
      0xae, 0x05, 0x51, 0x14, 0x80, 0xa7, 0x9a, 0xa5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char sdv_msgs__msg__MotorDriver__TYPE_NAME[] = "sdv_msgs/msg/MotorDriver";

// Define type names, field names, and default values
static char sdv_msgs__msg__MotorDriver__FIELD_NAME__name[] = "name";
static char sdv_msgs__msg__MotorDriver__FIELD_NAME__current[] = "current";
static char sdv_msgs__msg__MotorDriver__FIELD_NAME__driver_status[] = "driver_status";

static rosidl_runtime_c__type_description__Field sdv_msgs__msg__MotorDriver__FIELDS[] = {
  {
    {sdv_msgs__msg__MotorDriver__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__MotorDriver__FIELD_NAME__current, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__MotorDriver__FIELD_NAME__driver_status, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sdv_msgs__msg__MotorDriver__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sdv_msgs__msg__MotorDriver__TYPE_NAME, 24, 24},
      {sdv_msgs__msg__MotorDriver__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# MotorDriver.msg\n"
  "\n"
  "string name\n"
  "float32 current\n"
  "string driver_status\n"
  "\n"
  "string UNKNOWN = unknown\n"
  "string CORRECT = correct\n"
  "string DAMAGED = damaged\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sdv_msgs__msg__MotorDriver__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sdv_msgs__msg__MotorDriver__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 145, 145},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sdv_msgs__msg__MotorDriver__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sdv_msgs__msg__MotorDriver__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
