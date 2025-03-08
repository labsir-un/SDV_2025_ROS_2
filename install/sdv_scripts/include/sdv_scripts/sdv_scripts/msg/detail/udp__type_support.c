// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sdv_scripts:msg/Udp.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sdv_scripts/msg/detail/udp__rosidl_typesupport_introspection_c.h"
#include "sdv_scripts/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sdv_scripts/msg/detail/udp__functions.h"
#include "sdv_scripts/msg/detail/udp__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `content`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sdv_scripts__msg__Udp__rosidl_typesupport_introspection_c__Udp_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sdv_scripts__msg__Udp__init(message_memory);
}

void sdv_scripts__msg__Udp__rosidl_typesupport_introspection_c__Udp_fini_function(void * message_memory)
{
  sdv_scripts__msg__Udp__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sdv_scripts__msg__Udp__rosidl_typesupport_introspection_c__Udp_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_scripts__msg__Udp, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "content",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_scripts__msg__Udp, content),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sdv_scripts__msg__Udp__rosidl_typesupport_introspection_c__Udp_message_members = {
  "sdv_scripts__msg",  // message namespace
  "Udp",  // message name
  2,  // number of fields
  sizeof(sdv_scripts__msg__Udp),
  false,  // has_any_key_member_
  sdv_scripts__msg__Udp__rosidl_typesupport_introspection_c__Udp_message_member_array,  // message members
  sdv_scripts__msg__Udp__rosidl_typesupport_introspection_c__Udp_init_function,  // function to initialize message memory (memory has to be allocated)
  sdv_scripts__msg__Udp__rosidl_typesupport_introspection_c__Udp_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sdv_scripts__msg__Udp__rosidl_typesupport_introspection_c__Udp_message_type_support_handle = {
  0,
  &sdv_scripts__msg__Udp__rosidl_typesupport_introspection_c__Udp_message_members,
  get_message_typesupport_handle_function,
  &sdv_scripts__msg__Udp__get_type_hash,
  &sdv_scripts__msg__Udp__get_type_description,
  &sdv_scripts__msg__Udp__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sdv_scripts
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sdv_scripts, msg, Udp)() {
  sdv_scripts__msg__Udp__rosidl_typesupport_introspection_c__Udp_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!sdv_scripts__msg__Udp__rosidl_typesupport_introspection_c__Udp_message_type_support_handle.typesupport_identifier) {
    sdv_scripts__msg__Udp__rosidl_typesupport_introspection_c__Udp_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sdv_scripts__msg__Udp__rosidl_typesupport_introspection_c__Udp_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
