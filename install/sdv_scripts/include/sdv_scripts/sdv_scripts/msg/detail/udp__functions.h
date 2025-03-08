// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sdv_scripts:msg/Udp.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_scripts/msg/udp.h"


#ifndef SDV_SCRIPTS__MSG__DETAIL__UDP__FUNCTIONS_H_
#define SDV_SCRIPTS__MSG__DETAIL__UDP__FUNCTIONS_H_

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
#include "sdv_scripts/msg/rosidl_generator_c__visibility_control.h"

#include "sdv_scripts/msg/detail/udp__struct.h"

/// Initialize msg/Udp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sdv_scripts__msg__Udp
 * )) before or use
 * sdv_scripts__msg__Udp__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_scripts
bool
sdv_scripts__msg__Udp__init(sdv_scripts__msg__Udp * msg);

/// Finalize msg/Udp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_scripts
void
sdv_scripts__msg__Udp__fini(sdv_scripts__msg__Udp * msg);

/// Create msg/Udp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sdv_scripts__msg__Udp__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_scripts
sdv_scripts__msg__Udp *
sdv_scripts__msg__Udp__create(void);

/// Destroy msg/Udp message.
/**
 * It calls
 * sdv_scripts__msg__Udp__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_scripts
void
sdv_scripts__msg__Udp__destroy(sdv_scripts__msg__Udp * msg);

/// Check for msg/Udp message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_scripts
bool
sdv_scripts__msg__Udp__are_equal(const sdv_scripts__msg__Udp * lhs, const sdv_scripts__msg__Udp * rhs);

/// Copy a msg/Udp message.
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
ROSIDL_GENERATOR_C_PUBLIC_sdv_scripts
bool
sdv_scripts__msg__Udp__copy(
  const sdv_scripts__msg__Udp * input,
  sdv_scripts__msg__Udp * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdv_scripts
const rosidl_type_hash_t *
sdv_scripts__msg__Udp__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdv_scripts
const rosidl_runtime_c__type_description__TypeDescription *
sdv_scripts__msg__Udp__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_sdv_scripts
const rosidl_runtime_c__type_description__TypeSource *
sdv_scripts__msg__Udp__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdv_scripts
const rosidl_runtime_c__type_description__TypeSource__Sequence *
sdv_scripts__msg__Udp__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Udp messages.
/**
 * It allocates the memory for the number of elements and calls
 * sdv_scripts__msg__Udp__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_scripts
bool
sdv_scripts__msg__Udp__Sequence__init(sdv_scripts__msg__Udp__Sequence * array, size_t size);

/// Finalize array of msg/Udp messages.
/**
 * It calls
 * sdv_scripts__msg__Udp__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_scripts
void
sdv_scripts__msg__Udp__Sequence__fini(sdv_scripts__msg__Udp__Sequence * array);

/// Create array of msg/Udp messages.
/**
 * It allocates the memory for the array and calls
 * sdv_scripts__msg__Udp__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_scripts
sdv_scripts__msg__Udp__Sequence *
sdv_scripts__msg__Udp__Sequence__create(size_t size);

/// Destroy array of msg/Udp messages.
/**
 * It calls
 * sdv_scripts__msg__Udp__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_scripts
void
sdv_scripts__msg__Udp__Sequence__destroy(sdv_scripts__msg__Udp__Sequence * array);

/// Check for msg/Udp message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_scripts
bool
sdv_scripts__msg__Udp__Sequence__are_equal(const sdv_scripts__msg__Udp__Sequence * lhs, const sdv_scripts__msg__Udp__Sequence * rhs);

/// Copy an array of msg/Udp messages.
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
ROSIDL_GENERATOR_C_PUBLIC_sdv_scripts
bool
sdv_scripts__msg__Udp__Sequence__copy(
  const sdv_scripts__msg__Udp__Sequence * input,
  sdv_scripts__msg__Udp__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SDV_SCRIPTS__MSG__DETAIL__UDP__FUNCTIONS_H_
