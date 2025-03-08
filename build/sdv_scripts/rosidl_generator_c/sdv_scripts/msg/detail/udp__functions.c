// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sdv_scripts:msg/Udp.idl
// generated code does not contain a copyright notice
#include "sdv_scripts/msg/detail/udp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `content`
#include "rosidl_runtime_c/string_functions.h"

bool
sdv_scripts__msg__Udp__init(sdv_scripts__msg__Udp * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sdv_scripts__msg__Udp__fini(msg);
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__init(&msg->content)) {
    sdv_scripts__msg__Udp__fini(msg);
    return false;
  }
  return true;
}

void
sdv_scripts__msg__Udp__fini(sdv_scripts__msg__Udp * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // content
  rosidl_runtime_c__String__fini(&msg->content);
}

bool
sdv_scripts__msg__Udp__are_equal(const sdv_scripts__msg__Udp * lhs, const sdv_scripts__msg__Udp * rhs)
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
  // content
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->content), &(rhs->content)))
  {
    return false;
  }
  return true;
}

bool
sdv_scripts__msg__Udp__copy(
  const sdv_scripts__msg__Udp * input,
  sdv_scripts__msg__Udp * output)
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
  // content
  if (!rosidl_runtime_c__String__copy(
      &(input->content), &(output->content)))
  {
    return false;
  }
  return true;
}

sdv_scripts__msg__Udp *
sdv_scripts__msg__Udp__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_scripts__msg__Udp * msg = (sdv_scripts__msg__Udp *)allocator.allocate(sizeof(sdv_scripts__msg__Udp), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdv_scripts__msg__Udp));
  bool success = sdv_scripts__msg__Udp__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdv_scripts__msg__Udp__destroy(sdv_scripts__msg__Udp * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdv_scripts__msg__Udp__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdv_scripts__msg__Udp__Sequence__init(sdv_scripts__msg__Udp__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_scripts__msg__Udp * data = NULL;

  if (size) {
    data = (sdv_scripts__msg__Udp *)allocator.zero_allocate(size, sizeof(sdv_scripts__msg__Udp), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdv_scripts__msg__Udp__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdv_scripts__msg__Udp__fini(&data[i - 1]);
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
sdv_scripts__msg__Udp__Sequence__fini(sdv_scripts__msg__Udp__Sequence * array)
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
      sdv_scripts__msg__Udp__fini(&array->data[i]);
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

sdv_scripts__msg__Udp__Sequence *
sdv_scripts__msg__Udp__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_scripts__msg__Udp__Sequence * array = (sdv_scripts__msg__Udp__Sequence *)allocator.allocate(sizeof(sdv_scripts__msg__Udp__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdv_scripts__msg__Udp__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdv_scripts__msg__Udp__Sequence__destroy(sdv_scripts__msg__Udp__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdv_scripts__msg__Udp__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdv_scripts__msg__Udp__Sequence__are_equal(const sdv_scripts__msg__Udp__Sequence * lhs, const sdv_scripts__msg__Udp__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdv_scripts__msg__Udp__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdv_scripts__msg__Udp__Sequence__copy(
  const sdv_scripts__msg__Udp__Sequence * input,
  sdv_scripts__msg__Udp__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdv_scripts__msg__Udp);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdv_scripts__msg__Udp * data =
      (sdv_scripts__msg__Udp *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdv_scripts__msg__Udp__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdv_scripts__msg__Udp__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdv_scripts__msg__Udp__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
