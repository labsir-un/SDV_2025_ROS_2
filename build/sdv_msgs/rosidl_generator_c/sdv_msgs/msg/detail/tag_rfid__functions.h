// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sdv_msgs:msg/TagRfid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/tag_rfid.h"


#ifndef SDV_MSGS__MSG__DETAIL__TAG_RFID__FUNCTIONS_H_
#define SDV_MSGS__MSG__DETAIL__TAG_RFID__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "sdv_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "sdv_msgs/msg/detail/tag_rfid__struct.h"

/// Initialize msg/TagRfid message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sdv_msgs__msg__TagRfid
 * )) before or use
 * sdv_msgs__msg__TagRfid__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
bool
sdv_msgs__msg__TagRfid__init(sdv_msgs__msg__TagRfid * msg);

/// Finalize msg/TagRfid message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
void
sdv_msgs__msg__TagRfid__fini(sdv_msgs__msg__TagRfid * msg);

/// Create msg/TagRfid message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sdv_msgs__msg__TagRfid__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
sdv_msgs__msg__TagRfid *
sdv_msgs__msg__TagRfid__create(void);

/// Destroy msg/TagRfid message.
/**
 * It calls
 * sdv_msgs__msg__TagRfid__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
void
sdv_msgs__msg__TagRfid__destroy(sdv_msgs__msg__TagRfid * msg);

/// Check for msg/TagRfid message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
bool
sdv_msgs__msg__TagRfid__are_equal(const sdv_msgs__msg__TagRfid * lhs, const sdv_msgs__msg__TagRfid * rhs);

/// Copy a msg/TagRfid message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
bool
sdv_msgs__msg__TagRfid__copy(
  const sdv_msgs__msg__TagRfid * input,
  sdv_msgs__msg__TagRfid * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
const rosidl_type_hash_t *
sdv_msgs__msg__TagRfid__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
const rosidl_runtime_c__type_description__TypeDescription *
sdv_msgs__msg__TagRfid__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
const rosidl_runtime_c__type_description__TypeSource *
sdv_msgs__msg__TagRfid__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
sdv_msgs__msg__TagRfid__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/TagRfid messages.
/**
 * It allocates the memory for the number of elements and calls
 * sdv_msgs__msg__TagRfid__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
bool
sdv_msgs__msg__TagRfid__Sequence__init(sdv_msgs__msg__TagRfid__Sequence * array, size_t size);

/// Finalize array of msg/TagRfid messages.
/**
 * It calls
 * sdv_msgs__msg__TagRfid__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
void
sdv_msgs__msg__TagRfid__Sequence__fini(sdv_msgs__msg__TagRfid__Sequence * array);

/// Create array of msg/TagRfid messages.
/**
 * It allocates the memory for the array and calls
 * sdv_msgs__msg__TagRfid__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
sdv_msgs__msg__TagRfid__Sequence *
sdv_msgs__msg__TagRfid__Sequence__create(size_t size);

/// Destroy array of msg/TagRfid messages.
/**
 * It calls
 * sdv_msgs__msg__TagRfid__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
void
sdv_msgs__msg__TagRfid__Sequence__destroy(sdv_msgs__msg__TagRfid__Sequence * array);

/// Check for msg/TagRfid message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
bool
sdv_msgs__msg__TagRfid__Sequence__are_equal(const sdv_msgs__msg__TagRfid__Sequence * lhs, const sdv_msgs__msg__TagRfid__Sequence * rhs);

/// Copy an array of msg/TagRfid messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_msgs
bool
sdv_msgs__msg__TagRfid__Sequence__copy(
  const sdv_msgs__msg__TagRfid__Sequence * input,
  sdv_msgs__msg__TagRfid__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SDV_MSGS__MSG__DETAIL__TAG_RFID__FUNCTIONS_H_
