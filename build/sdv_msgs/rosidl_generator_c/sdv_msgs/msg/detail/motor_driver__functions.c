// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sdv_msgs:msg/MotorDriver.idl
// generated code does not contain a copyright notice
#include "sdv_msgs/msg/detail/motor_driver__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `driver_status`
#include "rosidl_runtime_c/string_functions.h"

bool
sdv_msgs__msg__MotorDriver__init(sdv_msgs__msg__MotorDriver * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    sdv_msgs__msg__MotorDriver__fini(msg);
    return false;
  }
  // current
  // driver_status
  if (!rosidl_runtime_c__String__init(&msg->driver_status)) {
    sdv_msgs__msg__MotorDriver__fini(msg);
    return false;
  }
  return true;
}

void
sdv_msgs__msg__MotorDriver__fini(sdv_msgs__msg__MotorDriver * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // current
  // driver_status
  rosidl_runtime_c__String__fini(&msg->driver_status);
}

bool
sdv_msgs__msg__MotorDriver__are_equal(const sdv_msgs__msg__MotorDriver * lhs, const sdv_msgs__msg__MotorDriver * rhs)
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
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // driver_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->driver_status), &(rhs->driver_status)))
  {
    return false;
  }
  return true;
}

bool
sdv_msgs__msg__MotorDriver__copy(
  const sdv_msgs__msg__MotorDriver * input,
  sdv_msgs__msg__MotorDriver * output)
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
  // current
  output->current = input->current;
  // driver_status
  if (!rosidl_runtime_c__String__copy(
      &(input->driver_status), &(output->driver_status)))
  {
    return false;
  }
  return true;
}

sdv_msgs__msg__MotorDriver *
sdv_msgs__msg__MotorDriver__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__MotorDriver * msg = (sdv_msgs__msg__MotorDriver *)allocator.allocate(sizeof(sdv_msgs__msg__MotorDriver), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdv_msgs__msg__MotorDriver));
  bool success = sdv_msgs__msg__MotorDriver__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdv_msgs__msg__MotorDriver__destroy(sdv_msgs__msg__MotorDriver * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdv_msgs__msg__MotorDriver__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdv_msgs__msg__MotorDriver__Sequence__init(sdv_msgs__msg__MotorDriver__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__MotorDriver * data = NULL;

  if (size) {
    data = (sdv_msgs__msg__MotorDriver *)allocator.zero_allocate(size, sizeof(sdv_msgs__msg__MotorDriver), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdv_msgs__msg__MotorDriver__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdv_msgs__msg__MotorDriver__fini(&data[i - 1]);
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
sdv_msgs__msg__MotorDriver__Sequence__fini(sdv_msgs__msg__MotorDriver__Sequence * array)
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
      sdv_msgs__msg__MotorDriver__fini(&array->data[i]);
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

sdv_msgs__msg__MotorDriver__Sequence *
sdv_msgs__msg__MotorDriver__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__MotorDriver__Sequence * array = (sdv_msgs__msg__MotorDriver__Sequence *)allocator.allocate(sizeof(sdv_msgs__msg__MotorDriver__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdv_msgs__msg__MotorDriver__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdv_msgs__msg__MotorDriver__Sequence__destroy(sdv_msgs__msg__MotorDriver__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdv_msgs__msg__MotorDriver__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdv_msgs__msg__MotorDriver__Sequence__are_equal(const sdv_msgs__msg__MotorDriver__Sequence * lhs, const sdv_msgs__msg__MotorDriver__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdv_msgs__msg__MotorDriver__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdv_msgs__msg__MotorDriver__Sequence__copy(
  const sdv_msgs__msg__MotorDriver__Sequence * input,
  sdv_msgs__msg__MotorDriver__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdv_msgs__msg__MotorDriver);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdv_msgs__msg__MotorDriver * data =
      (sdv_msgs__msg__MotorDriver *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdv_msgs__msg__MotorDriver__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdv_msgs__msg__MotorDriver__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdv_msgs__msg__MotorDriver__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
