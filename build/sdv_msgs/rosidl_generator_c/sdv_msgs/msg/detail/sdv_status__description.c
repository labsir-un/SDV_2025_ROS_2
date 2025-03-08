// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sdv_msgs:msg/SdvStatus.idl
// generated code does not contain a copyright notice

#include "sdv_msgs/msg/detail/sdv_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
const rosidl_type_hash_t *
sdv_msgs__msg__SdvStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x35, 0xf5, 0xa3, 0xd9, 0x13, 0xf1, 0xc4, 0x7a,
      0xe5, 0x67, 0xee, 0xcf, 0x80, 0x14, 0xb4, 0xd7,
      0xa4, 0xa4, 0x65, 0x97, 0x26, 0xe8, 0x3f, 0x4c,
      0xbd, 0xd6, 0x26, 0xb9, 0x4c, 0x18, 0xa8, 0x67,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char sdv_msgs__msg__SdvStatus__TYPE_NAME[] = "sdv_msgs/msg/SdvStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__header[] = "header";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__energized[] = "energized";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__stand_by[] = "stand_by";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__rotate[] = "rotate";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__turn_left[] = "turn_left";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__turn_right[] = "turn_right";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__reverse[] = "reverse";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__forward[] = "forward";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__low_batt[] = "low_batt";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__emergency_stop[] = "emergency_stop";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__reset_pc[] = "reset_pc";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__poweroff_pc[] = "poweroff_pc";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__obstacle_stop[] = "obstacle_stop";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__over_load[] = "over_load";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__connection_error[] = "connection_error";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__tag_disconnected[] = "tag_disconnected";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__tag_init[] = "tag_init";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__tag_is_on_platform[] = "tag_is_on_platform";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__tag_read_error[] = "tag_read_error";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__tag_write_error[] = "tag_write_error";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__tag_close[] = "tag_close";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__not_connection_error[] = "not_connection_error";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__connection_error_imu[] = "connection_error_imu";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__connection_error_msp[] = "connection_error_msp";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__connection_error_rfid[] = "connection_error_rfid";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__connection_error_ult[] = "connection_error_ult";
static char sdv_msgs__msg__SdvStatus__FIELD_NAME__connection_error_batt[] = "connection_error_batt";

static rosidl_runtime_c__type_description__Field sdv_msgs__msg__SdvStatus__FIELDS[] = {
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__energized, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__stand_by, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__rotate, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__turn_left, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__turn_right, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__reverse, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__forward, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__low_batt, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__emergency_stop, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__reset_pc, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__poweroff_pc, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__obstacle_stop, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__over_load, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__connection_error, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__tag_disconnected, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__tag_init, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__tag_is_on_platform, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__tag_read_error, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__tag_write_error, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__tag_close, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__not_connection_error, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__connection_error_imu, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__connection_error_msp, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__connection_error_rfid, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__connection_error_ult, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_msgs__msg__SdvStatus__FIELD_NAME__connection_error_batt, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription sdv_msgs__msg__SdvStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sdv_msgs__msg__SdvStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sdv_msgs__msg__SdvStatus__TYPE_NAME, 22, 22},
      {sdv_msgs__msg__SdvStatus__FIELDS, 27, 27},
    },
    {sdv_msgs__msg__SdvStatus__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# sdv_status.msg\n"
  "\n"
  "std_msgs/Header header\n"
  "bool energized\n"
  "bool stand_by\n"
  "bool rotate\n"
  "bool turn_left\n"
  "bool turn_right\n"
  "bool reverse\n"
  "bool forward\n"
  "bool low_batt\n"
  "bool emergency_stop\n"
  "bool reset_pc\n"
  "bool poweroff_pc\n"
  "bool obstacle_stop\n"
  "bool over_load\n"
  "bool connection_error\n"
  "bool tag_disconnected\n"
  "bool tag_init\n"
  "bool tag_is_on_platform\n"
  "bool tag_read_error\n"
  "bool tag_write_error\n"
  "bool tag_close\n"
  "bool not_connection_error\n"
  "bool connection_error_imu\n"
  "bool connection_error_msp\n"
  "bool connection_error_rfid\n"
  "bool connection_error_ult\n"
  "bool connection_error_batt";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sdv_msgs__msg__SdvStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sdv_msgs__msg__SdvStatus__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 534, 534},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sdv_msgs__msg__SdvStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sdv_msgs__msg__SdvStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
