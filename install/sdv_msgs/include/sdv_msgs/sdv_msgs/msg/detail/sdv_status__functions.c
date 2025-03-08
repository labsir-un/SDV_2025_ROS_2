// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sdv_msgs:msg/SdvStatus.idl
// generated code does not contain a copyright notice
#include "sdv_msgs/msg/detail/sdv_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sdv_msgs__msg__SdvStatus__init(sdv_msgs__msg__SdvStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sdv_msgs__msg__SdvStatus__fini(msg);
    return false;
  }
  // energized
  // stand_by
  // rotate
  // turn_left
  // turn_right
  // reverse
  // forward
  // low_batt
  // emergency_stop
  // reset_pc
  // poweroff_pc
  // obstacle_stop
  // over_load
  // connection_error
  // tag_disconnected
  // tag_init
  // tag_is_on_platform
  // tag_read_error
  // tag_write_error
  // tag_close
  // not_connection_error
  // connection_error_imu
  // connection_error_msp
  // connection_error_rfid
  // connection_error_ult
  // connection_error_batt
  return true;
}

void
sdv_msgs__msg__SdvStatus__fini(sdv_msgs__msg__SdvStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // energized
  // stand_by
  // rotate
  // turn_left
  // turn_right
  // reverse
  // forward
  // low_batt
  // emergency_stop
  // reset_pc
  // poweroff_pc
  // obstacle_stop
  // over_load
  // connection_error
  // tag_disconnected
  // tag_init
  // tag_is_on_platform
  // tag_read_error
  // tag_write_error
  // tag_close
  // not_connection_error
  // connection_error_imu
  // connection_error_msp
  // connection_error_rfid
  // connection_error_ult
  // connection_error_batt
}

bool
sdv_msgs__msg__SdvStatus__are_equal(const sdv_msgs__msg__SdvStatus * lhs, const sdv_msgs__msg__SdvStatus * rhs)
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
  // energized
  if (lhs->energized != rhs->energized) {
    return false;
  }
  // stand_by
  if (lhs->stand_by != rhs->stand_by) {
    return false;
  }
  // rotate
  if (lhs->rotate != rhs->rotate) {
    return false;
  }
  // turn_left
  if (lhs->turn_left != rhs->turn_left) {
    return false;
  }
  // turn_right
  if (lhs->turn_right != rhs->turn_right) {
    return false;
  }
  // reverse
  if (lhs->reverse != rhs->reverse) {
    return false;
  }
  // forward
  if (lhs->forward != rhs->forward) {
    return false;
  }
  // low_batt
  if (lhs->low_batt != rhs->low_batt) {
    return false;
  }
  // emergency_stop
  if (lhs->emergency_stop != rhs->emergency_stop) {
    return false;
  }
  // reset_pc
  if (lhs->reset_pc != rhs->reset_pc) {
    return false;
  }
  // poweroff_pc
  if (lhs->poweroff_pc != rhs->poweroff_pc) {
    return false;
  }
  // obstacle_stop
  if (lhs->obstacle_stop != rhs->obstacle_stop) {
    return false;
  }
  // over_load
  if (lhs->over_load != rhs->over_load) {
    return false;
  }
  // connection_error
  if (lhs->connection_error != rhs->connection_error) {
    return false;
  }
  // tag_disconnected
  if (lhs->tag_disconnected != rhs->tag_disconnected) {
    return false;
  }
  // tag_init
  if (lhs->tag_init != rhs->tag_init) {
    return false;
  }
  // tag_is_on_platform
  if (lhs->tag_is_on_platform != rhs->tag_is_on_platform) {
    return false;
  }
  // tag_read_error
  if (lhs->tag_read_error != rhs->tag_read_error) {
    return false;
  }
  // tag_write_error
  if (lhs->tag_write_error != rhs->tag_write_error) {
    return false;
  }
  // tag_close
  if (lhs->tag_close != rhs->tag_close) {
    return false;
  }
  // not_connection_error
  if (lhs->not_connection_error != rhs->not_connection_error) {
    return false;
  }
  // connection_error_imu
  if (lhs->connection_error_imu != rhs->connection_error_imu) {
    return false;
  }
  // connection_error_msp
  if (lhs->connection_error_msp != rhs->connection_error_msp) {
    return false;
  }
  // connection_error_rfid
  if (lhs->connection_error_rfid != rhs->connection_error_rfid) {
    return false;
  }
  // connection_error_ult
  if (lhs->connection_error_ult != rhs->connection_error_ult) {
    return false;
  }
  // connection_error_batt
  if (lhs->connection_error_batt != rhs->connection_error_batt) {
    return false;
  }
  return true;
}

bool
sdv_msgs__msg__SdvStatus__copy(
  const sdv_msgs__msg__SdvStatus * input,
  sdv_msgs__msg__SdvStatus * output)
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
  // energized
  output->energized = input->energized;
  // stand_by
  output->stand_by = input->stand_by;
  // rotate
  output->rotate = input->rotate;
  // turn_left
  output->turn_left = input->turn_left;
  // turn_right
  output->turn_right = input->turn_right;
  // reverse
  output->reverse = input->reverse;
  // forward
  output->forward = input->forward;
  // low_batt
  output->low_batt = input->low_batt;
  // emergency_stop
  output->emergency_stop = input->emergency_stop;
  // reset_pc
  output->reset_pc = input->reset_pc;
  // poweroff_pc
  output->poweroff_pc = input->poweroff_pc;
  // obstacle_stop
  output->obstacle_stop = input->obstacle_stop;
  // over_load
  output->over_load = input->over_load;
  // connection_error
  output->connection_error = input->connection_error;
  // tag_disconnected
  output->tag_disconnected = input->tag_disconnected;
  // tag_init
  output->tag_init = input->tag_init;
  // tag_is_on_platform
  output->tag_is_on_platform = input->tag_is_on_platform;
  // tag_read_error
  output->tag_read_error = input->tag_read_error;
  // tag_write_error
  output->tag_write_error = input->tag_write_error;
  // tag_close
  output->tag_close = input->tag_close;
  // not_connection_error
  output->not_connection_error = input->not_connection_error;
  // connection_error_imu
  output->connection_error_imu = input->connection_error_imu;
  // connection_error_msp
  output->connection_error_msp = input->connection_error_msp;
  // connection_error_rfid
  output->connection_error_rfid = input->connection_error_rfid;
  // connection_error_ult
  output->connection_error_ult = input->connection_error_ult;
  // connection_error_batt
  output->connection_error_batt = input->connection_error_batt;
  return true;
}

sdv_msgs__msg__SdvStatus *
sdv_msgs__msg__SdvStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__SdvStatus * msg = (sdv_msgs__msg__SdvStatus *)allocator.allocate(sizeof(sdv_msgs__msg__SdvStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdv_msgs__msg__SdvStatus));
  bool success = sdv_msgs__msg__SdvStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdv_msgs__msg__SdvStatus__destroy(sdv_msgs__msg__SdvStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdv_msgs__msg__SdvStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdv_msgs__msg__SdvStatus__Sequence__init(sdv_msgs__msg__SdvStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__SdvStatus * data = NULL;

  if (size) {
    data = (sdv_msgs__msg__SdvStatus *)allocator.zero_allocate(size, sizeof(sdv_msgs__msg__SdvStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdv_msgs__msg__SdvStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdv_msgs__msg__SdvStatus__fini(&data[i - 1]);
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
sdv_msgs__msg__SdvStatus__Sequence__fini(sdv_msgs__msg__SdvStatus__Sequence * array)
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
      sdv_msgs__msg__SdvStatus__fini(&array->data[i]);
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

sdv_msgs__msg__SdvStatus__Sequence *
sdv_msgs__msg__SdvStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__SdvStatus__Sequence * array = (sdv_msgs__msg__SdvStatus__Sequence *)allocator.allocate(sizeof(sdv_msgs__msg__SdvStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdv_msgs__msg__SdvStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdv_msgs__msg__SdvStatus__Sequence__destroy(sdv_msgs__msg__SdvStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdv_msgs__msg__SdvStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdv_msgs__msg__SdvStatus__Sequence__are_equal(const sdv_msgs__msg__SdvStatus__Sequence * lhs, const sdv_msgs__msg__SdvStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdv_msgs__msg__SdvStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdv_msgs__msg__SdvStatus__Sequence__copy(
  const sdv_msgs__msg__SdvStatus__Sequence * input,
  sdv_msgs__msg__SdvStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdv_msgs__msg__SdvStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdv_msgs__msg__SdvStatus * data =
      (sdv_msgs__msg__SdvStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdv_msgs__msg__SdvStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdv_msgs__msg__SdvStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdv_msgs__msg__SdvStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
