// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sdv_msgs:msg/Battery.idl
// generated code does not contain a copyright notice

#include "sdv_msgs/msg/detail/battery__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
const rosidl_type_hash_t *
sdv_msgs__msg__Battery__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x95, 0xad, 0x34, 0x78, 0xac, 0x96, 0x61, 0xc9,
      0xa6, 0xb4, 0x9b, 0x90, 0xf5, 0x3f, 0x8d, 0xa9,
      0x0e, 0x92, 0xae, 0x1e, 0x9b, 0xc2, 0x8f, 0x1f,
      0xc9, 0x65, 0x74, 0x10, 0x55, 0x8c, 0xe0, 0x33,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char sdv_msgs__msg__Battery__TYPE_NAME[] = "sdv_msgs/msg/Battery";

// Define type names, field names, and default values
static char sdv_msgs__msg__Battery__FIELD_NAME__name[] = "name";
static char sdv_msgs__msg__Battery__FIELD_NAME__cell_voltages[] = "cell_voltages";

static rosidl_runtime_c__type_description__Field sdv_msgs__msg__Battery__FIELDS[] = {
  {
    {sdv_msgs__msg__Battery__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__Battery__FIELD_NAME__cell_voltages, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sdv_msgs__msg__Battery__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sdv_msgs__msg__Battery__TYPE_NAME, 20, 20},
      {sdv_msgs__msg__Battery__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Battery.msg\n"
  "\n"
  "string name\n"
  "float32[] cell_voltages";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sdv_msgs__msg__Battery__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sdv_msgs__msg__Battery__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 51, 51},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sdv_msgs__msg__Battery__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sdv_msgs__msg__Battery__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
