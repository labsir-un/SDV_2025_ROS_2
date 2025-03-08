// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sdv_msgs:msg/Buzzer.idl
// generated code does not contain a copyright notice
#include "sdv_msgs/msg/detail/buzzer__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sdv_msgs__msg__Buzzer__init(sdv_msgs__msg__Buzzer * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sdv_msgs__msg__Buzzer__fini(msg);
    return false;
  }
  // time_on
  // time_off
  // cicles
  return true;
}

void
sdv_msgs__msg__Buzzer__fini(sdv_msgs__msg__Buzzer * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // time_on
  // time_off
  // cicles
}

bool
sdv_msgs__msg__Buzzer__are_equal(const sdv_msgs__msg__Buzzer * lhs, const sdv_msgs__msg__Buzzer * rhs)
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
  // time_on
  if (lhs->time_on != rhs->time_on) {
    return false;
  }
  // time_off
  if (lhs->time_off != rhs->time_off) {
    return false;
  }
  // cicles
  if (lhs->cicles != rhs->cicles) {
    return false;
  }
  return true;
}

bool
sdv_msgs__msg__Buzzer__copy(
  const sdv_msgs__msg__Buzzer * input,
  sdv_msgs__msg__Buzzer * output)
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
  // time_on
  output->time_on = input->time_on;
  // time_off
  output->time_off = input->time_off;
  // cicles
  output->cicles = input->cicles;
  return true;
}

sdv_msgs__msg__Buzzer *
sdv_msgs__msg__Buzzer__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__Buzzer * msg = (sdv_msgs__msg__Buzzer *)allocator.allocate(sizeof(sdv_msgs__msg__Buzzer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdv_msgs__msg__Buzzer));
  bool success = sdv_msgs__msg__Buzzer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdv_msgs__msg__Buzzer__destroy(sdv_msgs__msg__Buzzer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdv_msgs__msg__Buzzer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdv_msgs__msg__Buzzer__Sequence__init(sdv_msgs__msg__Buzzer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__Buzzer * data = NULL;

  if (size) {
    data = (sdv_msgs__msg__Buzzer *)allocator.zero_allocate(size, sizeof(sdv_msgs__msg__Buzzer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdv_msgs__msg__Buzzer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdv_msgs__msg__Buzzer__fini(&data[i - 1]);
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
sdv_msgs__msg__Buzzer__Sequence__fini(sdv_msgs__msg__Buzzer__Sequence * array)
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
      sdv_msgs__msg__Buzzer__fini(&array->data[i]);
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

sdv_msgs__msg__Buzzer__Sequence *
sdv_msgs__msg__Buzzer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__Buzzer__Sequence * array = (sdv_msgs__msg__Buzzer__Sequence *)allocator.allocate(sizeof(sdv_msgs__msg__Buzzer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdv_msgs__msg__Buzzer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdv_msgs__msg__Buzzer__Sequence__destroy(sdv_msgs__msg__Buzzer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdv_msgs__msg__Buzzer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdv_msgs__msg__Buzzer__Sequence__are_equal(const sdv_msgs__msg__Buzzer__Sequence * lhs, const sdv_msgs__msg__Buzzer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdv_msgs__msg__Buzzer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdv_msgs__msg__Buzzer__Sequence__copy(
  const sdv_msgs__msg__Buzzer__Sequence * input,
  sdv_msgs__msg__Buzzer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdv_msgs__msg__Buzzer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdv_msgs__msg__Buzzer * data =
      (sdv_msgs__msg__Buzzer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdv_msgs__msg__Buzzer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdv_msgs__msg__Buzzer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdv_msgs__msg__Buzzer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
