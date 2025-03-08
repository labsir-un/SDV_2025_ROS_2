// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sdv_msgs:msg/Flexiforce.idl
// generated code does not contain a copyright notice
#include "sdv_msgs/msg/detail/flexiforce__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sdv_msgs__msg__Flexiforce__init(sdv_msgs__msg__Flexiforce * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sdv_msgs__msg__Flexiforce__fini(msg);
    return false;
  }
  // front_left
  // front_right
  // back_left
  // back_right
  return true;
}

void
sdv_msgs__msg__Flexiforce__fini(sdv_msgs__msg__Flexiforce * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // front_left
  // front_right
  // back_left
  // back_right
}

bool
sdv_msgs__msg__Flexiforce__are_equal(const sdv_msgs__msg__Flexiforce * lhs, const sdv_msgs__msg__Flexiforce * rhs)
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
  // front_left
  if (lhs->front_left != rhs->front_left) {
    return false;
  }
  // front_right
  if (lhs->front_right != rhs->front_right) {
    return false;
  }
  // back_left
  if (lhs->back_left != rhs->back_left) {
    return false;
  }
  // back_right
  if (lhs->back_right != rhs->back_right) {
    return false;
  }
  return true;
}

bool
sdv_msgs__msg__Flexiforce__copy(
  const sdv_msgs__msg__Flexiforce * input,
  sdv_msgs__msg__Flexiforce * output)
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
  // front_left
  output->front_left = input->front_left;
  // front_right
  output->front_right = input->front_right;
  // back_left
  output->back_left = input->back_left;
  // back_right
  output->back_right = input->back_right;
  return true;
}

sdv_msgs__msg__Flexiforce *
sdv_msgs__msg__Flexiforce__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__Flexiforce * msg = (sdv_msgs__msg__Flexiforce *)allocator.allocate(sizeof(sdv_msgs__msg__Flexiforce), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdv_msgs__msg__Flexiforce));
  bool success = sdv_msgs__msg__Flexiforce__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdv_msgs__msg__Flexiforce__destroy(sdv_msgs__msg__Flexiforce * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdv_msgs__msg__Flexiforce__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdv_msgs__msg__Flexiforce__Sequence__init(sdv_msgs__msg__Flexiforce__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__Flexiforce * data = NULL;

  if (size) {
    data = (sdv_msgs__msg__Flexiforce *)allocator.zero_allocate(size, sizeof(sdv_msgs__msg__Flexiforce), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdv_msgs__msg__Flexiforce__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdv_msgs__msg__Flexiforce__fini(&data[i - 1]);
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
sdv_msgs__msg__Flexiforce__Sequence__fini(sdv_msgs__msg__Flexiforce__Sequence * array)
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
      sdv_msgs__msg__Flexiforce__fini(&array->data[i]);
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

sdv_msgs__msg__Flexiforce__Sequence *
sdv_msgs__msg__Flexiforce__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__Flexiforce__Sequence * array = (sdv_msgs__msg__Flexiforce__Sequence *)allocator.allocate(sizeof(sdv_msgs__msg__Flexiforce__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdv_msgs__msg__Flexiforce__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdv_msgs__msg__Flexiforce__Sequence__destroy(sdv_msgs__msg__Flexiforce__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdv_msgs__msg__Flexiforce__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdv_msgs__msg__Flexiforce__Sequence__are_equal(const sdv_msgs__msg__Flexiforce__Sequence * lhs, const sdv_msgs__msg__Flexiforce__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdv_msgs__msg__Flexiforce__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdv_msgs__msg__Flexiforce__Sequence__copy(
  const sdv_msgs__msg__Flexiforce__Sequence * input,
  sdv_msgs__msg__Flexiforce__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdv_msgs__msg__Flexiforce);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdv_msgs__msg__Flexiforce * data =
      (sdv_msgs__msg__Flexiforce *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdv_msgs__msg__Flexiforce__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdv_msgs__msg__Flexiforce__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdv_msgs__msg__Flexiforce__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
