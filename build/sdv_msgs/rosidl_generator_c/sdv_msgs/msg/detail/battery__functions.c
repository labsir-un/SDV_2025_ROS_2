// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sdv_msgs:msg/Battery.idl
// generated code does not contain a copyright notice
#include "sdv_msgs/msg/detail/battery__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `cell_voltages`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
sdv_msgs__msg__Battery__init(sdv_msgs__msg__Battery * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    sdv_msgs__msg__Battery__fini(msg);
    return false;
  }
  // cell_voltages
  if (!rosidl_runtime_c__float__Sequence__init(&msg->cell_voltages, 0)) {
    sdv_msgs__msg__Battery__fini(msg);
    return false;
  }
  return true;
}

void
sdv_msgs__msg__Battery__fini(sdv_msgs__msg__Battery * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // cell_voltages
  rosidl_runtime_c__float__Sequence__fini(&msg->cell_voltages);
}

bool
sdv_msgs__msg__Battery__are_equal(const sdv_msgs__msg__Battery * lhs, const sdv_msgs__msg__Battery * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // cell_voltages
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->cell_voltages), &(rhs->cell_voltages)))
  {
    return false;
  }
  return true;
}

bool
sdv_msgs__msg__Battery__copy(
  const sdv_msgs__msg__Battery * input,
  sdv_msgs__msg__Battery * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // cell_voltages
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->cell_voltages), &(output->cell_voltages)))
  {
    return false;
  }
  return true;
}

sdv_msgs__msg__Battery *
sdv_msgs__msg__Battery__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__Battery * msg = (sdv_msgs__msg__Battery *)allocator.allocate(sizeof(sdv_msgs__msg__Battery), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdv_msgs__msg__Battery));
  bool success = sdv_msgs__msg__Battery__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdv_msgs__msg__Battery__destroy(sdv_msgs__msg__Battery * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdv_msgs__msg__Battery__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdv_msgs__msg__Battery__Sequence__init(sdv_msgs__msg__Battery__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__Battery * data = NULL;

  if (size) {
    data = (sdv_msgs__msg__Battery *)allocator.zero_allocate(size, sizeof(sdv_msgs__msg__Battery), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdv_msgs__msg__Battery__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdv_msgs__msg__Battery__fini(&data[i - 1]);
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
sdv_msgs__msg__Battery__Sequence__fini(sdv_msgs__msg__Battery__Sequence * array)
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
      sdv_msgs__msg__Battery__fini(&array->data[i]);
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

sdv_msgs__msg__Battery__Sequence *
sdv_msgs__msg__Battery__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__Battery__Sequence * array = (sdv_msgs__msg__Battery__Sequence *)allocator.allocate(sizeof(sdv_msgs__msg__Battery__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdv_msgs__msg__Battery__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdv_msgs__msg__Battery__Sequence__destroy(sdv_msgs__msg__Battery__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdv_msgs__msg__Battery__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdv_msgs__msg__Battery__Sequence__are_equal(const sdv_msgs__msg__Battery__Sequence * lhs, const sdv_msgs__msg__Battery__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdv_msgs__msg__Battery__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdv_msgs__msg__Battery__Sequence__copy(
  const sdv_msgs__msg__Battery__Sequence * input,
  sdv_msgs__msg__Battery__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdv_msgs__msg__Battery);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdv_msgs__msg__Battery * data =
      (sdv_msgs__msg__Battery *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdv_msgs__msg__Battery__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdv_msgs__msg__Battery__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdv_msgs__msg__Battery__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
