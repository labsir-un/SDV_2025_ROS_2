// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sdv_msgs:msg/SdvPlatform.idl
// generated code does not contain a copyright notice
#include "sdv_msgs/msg/detail/sdv_platform__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `status`
// Member `source`
#include "rosidl_runtime_c/string_functions.h"

bool
sdv_msgs__msg__SdvPlatform__init(sdv_msgs__msg__SdvPlatform * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sdv_msgs__msg__SdvPlatform__fini(msg);
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    sdv_msgs__msg__SdvPlatform__fini(msg);
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    sdv_msgs__msg__SdvPlatform__fini(msg);
    return false;
  }
  return true;
}

void
sdv_msgs__msg__SdvPlatform__fini(sdv_msgs__msg__SdvPlatform * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // source
  rosidl_runtime_c__String__fini(&msg->source);
}

bool
sdv_msgs__msg__SdvPlatform__are_equal(const sdv_msgs__msg__SdvPlatform * lhs, const sdv_msgs__msg__SdvPlatform * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  return true;
}

bool
sdv_msgs__msg__SdvPlatform__copy(
  const sdv_msgs__msg__SdvPlatform * input,
  sdv_msgs__msg__SdvPlatform * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  return true;
}

sdv_msgs__msg__SdvPlatform *
sdv_msgs__msg__SdvPlatform__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__SdvPlatform * msg = (sdv_msgs__msg__SdvPlatform *)allocator.allocate(sizeof(sdv_msgs__msg__SdvPlatform), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdv_msgs__msg__SdvPlatform));
  bool success = sdv_msgs__msg__SdvPlatform__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdv_msgs__msg__SdvPlatform__destroy(sdv_msgs__msg__SdvPlatform * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdv_msgs__msg__SdvPlatform__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdv_msgs__msg__SdvPlatform__Sequence__init(sdv_msgs__msg__SdvPlatform__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__SdvPlatform * data = NULL;

  if (size) {
    data = (sdv_msgs__msg__SdvPlatform *)allocator.zero_allocate(size, sizeof(sdv_msgs__msg__SdvPlatform), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdv_msgs__msg__SdvPlatform__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdv_msgs__msg__SdvPlatform__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sdv_msgs__msg__SdvPlatform__Sequence__fini(sdv_msgs__msg__SdvPlatform__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sdv_msgs__msg__SdvPlatform__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sdv_msgs__msg__SdvPlatform__Sequence *
sdv_msgs__msg__SdvPlatform__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__SdvPlatform__Sequence * array = (sdv_msgs__msg__SdvPlatform__Sequence *)allocator.allocate(sizeof(sdv_msgs__msg__SdvPlatform__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdv_msgs__msg__SdvPlatform__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdv_msgs__msg__SdvPlatform__Sequence__destroy(sdv_msgs__msg__SdvPlatform__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdv_msgs__msg__SdvPlatform__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdv_msgs__msg__SdvPlatform__Sequence__are_equal(const sdv_msgs__msg__SdvPlatform__Sequence * lhs, const sdv_msgs__msg__SdvPlatform__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdv_msgs__msg__SdvPlatform__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdv_msgs__msg__SdvPlatform__Sequence__copy(
  const sdv_msgs__msg__SdvPlatform__Sequence * input,
  sdv_msgs__msg__SdvPlatform__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdv_msgs__msg__SdvPlatform);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdv_msgs__msg__SdvPlatform * data =
      (sdv_msgs__msg__SdvPlatform *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdv_msgs__msg__SdvPlatform__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdv_msgs__msg__SdvPlatform__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdv_msgs__msg__SdvPlatform__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
