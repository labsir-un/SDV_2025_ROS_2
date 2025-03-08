// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sdv_msgs:msg/Drivers.idl
// generated code does not contain a copyright notice

#include "sdv_msgs/msg/detail/drivers__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
const rosidl_type_hash_t *
sdv_msgs__msg__Drivers__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x59, 0xef, 0xe7, 0xf8, 0xe1, 0x6a, 0x14, 0x3c,
      0x2c, 0xa5, 0x92, 0x3d, 0x4c, 0x66, 0x07, 0xbe,
      0xbc, 0xfb, 0xe2, 0x9d, 0x3b, 0x82, 0xb1, 0xb1,
      0x5b, 0xe2, 0xc6, 0x8d, 0x13, 0xe6, 0x47, 0x45,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "sdv_msgs/msg/detail/motor_driver__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t sdv_msgs__msg__MotorDriver__EXPECTED_HASH = {1, {
    0xa5, 0x6a, 0x1a, 0x63, 0x6a, 0xac, 0x14, 0x14,
    0x8e, 0x63, 0xab, 0xbd, 0x3d, 0x29, 0xc4, 0xe2,
    0xc2, 0x8c, 0x7f, 0xda, 0x20, 0x1d, 0xe4, 0x75,
    0xae, 0x05, 0x51, 0x14, 0x80, 0xa7, 0x9a, 0xa5,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char sdv_msgs__msg__Drivers__TYPE_NAME[] = "sdv_msgs/msg/Drivers";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char sdv_msgs__msg__MotorDriver__TYPE_NAME[] = "sdv_msgs/msg/MotorDriver";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char sdv_msgs__msg__Drivers__FIELD_NAME__header[] = "header";
static char sdv_msgs__msg__Drivers__FIELD_NAME__drivers[] = "drivers";

static rosidl_runtime_c__type_description__Field sdv_msgs__msg__Drivers__FIELDS[] = {
  {
    {sdv_msgs__msg__Drivers__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__Drivers__FIELD_NAME__drivers, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {sdv_msgs__msg__MotorDriver__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription sdv_msgs__msg__Drivers__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__MotorDriver__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sdv_msgs__msg__Drivers__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sdv_msgs__msg__Drivers__TYPE_NAME, 20, 20},
      {sdv_msgs__msg__Drivers__FIELDS, 2, 2},
    },
    {sdv_msgs__msg__Drivers__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sdv_msgs__msg__MotorDriver__EXPECTED_HASH, sdv_msgs__msg__MotorDriver__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = sdv_msgs__msg__MotorDriver__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Drivers.msg\n"
  "\n"
  "std_msgs/Header header\n"
  "MotorDriver[] drivers";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sdv_msgs__msg__Drivers__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sdv_msgs__msg__Drivers__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 59, 59},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sdv_msgs__msg__Drivers__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sdv_msgs__msg__Drivers__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sdv_msgs__msg__MotorDriver__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
