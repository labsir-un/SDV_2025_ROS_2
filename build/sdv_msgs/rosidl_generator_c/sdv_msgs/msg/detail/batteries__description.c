// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sdv_msgs:msg/Batteries.idl
// generated code does not contain a copyright notice

#include "sdv_msgs/msg/detail/batteries__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
const rosidl_type_hash_t *
sdv_msgs__msg__Batteries__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0x9b, 0x00, 0xfa, 0x5f, 0xed, 0xe0, 0x73,
      0xaa, 0x16, 0xce, 0xf2, 0xe3, 0x80, 0x73, 0x78,
      0x4e, 0xc6, 0x25, 0x9f, 0x05, 0x86, 0x0b, 0x95,
      0x43, 0xe4, 0x3b, 0x40, 0x36, 0x5a, 0x34, 0x02,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "sdv_msgs/msg/detail/battery__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t sdv_msgs__msg__Battery__EXPECTED_HASH = {1, {
    0x95, 0xad, 0x34, 0x78, 0xac, 0x96, 0x61, 0xc9,
    0xa6, 0xb4, 0x9b, 0x90, 0xf5, 0x3f, 0x8d, 0xa9,
    0x0e, 0x92, 0xae, 0x1e, 0x9b, 0xc2, 0x8f, 0x1f,
    0xc9, 0x65, 0x74, 0x10, 0x55, 0x8c, 0xe0, 0x33,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char sdv_msgs__msg__Batteries__TYPE_NAME[] = "sdv_msgs/msg/Batteries";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char sdv_msgs__msg__Battery__TYPE_NAME[] = "sdv_msgs/msg/Battery";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char sdv_msgs__msg__Batteries__FIELD_NAME__header[] = "header";
static char sdv_msgs__msg__Batteries__FIELD_NAME__batteries[] = "batteries";

static rosidl_runtime_c__type_description__Field sdv_msgs__msg__Batteries__FIELDS[] = {
  {
    {sdv_msgs__msg__Batteries__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__Batteries__FIELD_NAME__batteries, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {sdv_msgs__msg__Battery__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription sdv_msgs__msg__Batteries__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__Battery__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sdv_msgs__msg__Batteries__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sdv_msgs__msg__Batteries__TYPE_NAME, 22, 22},
      {sdv_msgs__msg__Batteries__FIELDS, 2, 2},
    },
    {sdv_msgs__msg__Batteries__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sdv_msgs__msg__Battery__EXPECTED_HASH, sdv_msgs__msg__Battery__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = sdv_msgs__msg__Battery__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Battery.msg\n"
  "\n"
  "std_msgs/Header header\n"
  "Battery[] batteries";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sdv_msgs__msg__Batteries__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sdv_msgs__msg__Batteries__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 57, 57},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sdv_msgs__msg__Batteries__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sdv_msgs__msg__Batteries__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sdv_msgs__msg__Battery__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
