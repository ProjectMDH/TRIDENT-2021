// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from trident_msgs:srv/KalmanSensorService.idl
// generated code does not contain a copyright notice
#include "trident_msgs/srv/detail/kalman_sensor_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `state`
// Member `covar`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
trident_msgs__srv__KalmanSensorService_Request__init(trident_msgs__srv__KalmanSensorService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__double__Sequence__init(&msg->state, 0)) {
    trident_msgs__srv__KalmanSensorService_Request__fini(msg);
    return false;
  }
  // covar
  if (!rosidl_runtime_c__double__Sequence__init(&msg->covar, 0)) {
    trident_msgs__srv__KalmanSensorService_Request__fini(msg);
    return false;
  }
  return true;
}

void
trident_msgs__srv__KalmanSensorService_Request__fini(trident_msgs__srv__KalmanSensorService_Request * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__double__Sequence__fini(&msg->state);
  // covar
  rosidl_runtime_c__double__Sequence__fini(&msg->covar);
}

trident_msgs__srv__KalmanSensorService_Request *
trident_msgs__srv__KalmanSensorService_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trident_msgs__srv__KalmanSensorService_Request * msg = (trident_msgs__srv__KalmanSensorService_Request *)allocator.allocate(sizeof(trident_msgs__srv__KalmanSensorService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(trident_msgs__srv__KalmanSensorService_Request));
  bool success = trident_msgs__srv__KalmanSensorService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
trident_msgs__srv__KalmanSensorService_Request__destroy(trident_msgs__srv__KalmanSensorService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    trident_msgs__srv__KalmanSensorService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
trident_msgs__srv__KalmanSensorService_Request__Sequence__init(trident_msgs__srv__KalmanSensorService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trident_msgs__srv__KalmanSensorService_Request * data = NULL;

  if (size) {
    data = (trident_msgs__srv__KalmanSensorService_Request *)allocator.zero_allocate(size, sizeof(trident_msgs__srv__KalmanSensorService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = trident_msgs__srv__KalmanSensorService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        trident_msgs__srv__KalmanSensorService_Request__fini(&data[i - 1]);
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
trident_msgs__srv__KalmanSensorService_Request__Sequence__fini(trident_msgs__srv__KalmanSensorService_Request__Sequence * array)
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
      trident_msgs__srv__KalmanSensorService_Request__fini(&array->data[i]);
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

trident_msgs__srv__KalmanSensorService_Request__Sequence *
trident_msgs__srv__KalmanSensorService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trident_msgs__srv__KalmanSensorService_Request__Sequence * array = (trident_msgs__srv__KalmanSensorService_Request__Sequence *)allocator.allocate(sizeof(trident_msgs__srv__KalmanSensorService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = trident_msgs__srv__KalmanSensorService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
trident_msgs__srv__KalmanSensorService_Request__Sequence__destroy(trident_msgs__srv__KalmanSensorService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    trident_msgs__srv__KalmanSensorService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}


// Include directives for member types
// Member `residual`
// Member `gain`
// Member `observationmatrix`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
trident_msgs__srv__KalmanSensorService_Response__init(trident_msgs__srv__KalmanSensorService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // residual
  if (!rosidl_runtime_c__double__Sequence__init(&msg->residual, 0)) {
    trident_msgs__srv__KalmanSensorService_Response__fini(msg);
    return false;
  }
  // gain
  if (!rosidl_runtime_c__double__Sequence__init(&msg->gain, 0)) {
    trident_msgs__srv__KalmanSensorService_Response__fini(msg);
    return false;
  }
  // observationmatrix
  if (!rosidl_runtime_c__double__Sequence__init(&msg->observationmatrix, 0)) {
    trident_msgs__srv__KalmanSensorService_Response__fini(msg);
    return false;
  }
  return true;
}

void
trident_msgs__srv__KalmanSensorService_Response__fini(trident_msgs__srv__KalmanSensorService_Response * msg)
{
  if (!msg) {
    return;
  }
  // residual
  rosidl_runtime_c__double__Sequence__fini(&msg->residual);
  // gain
  rosidl_runtime_c__double__Sequence__fini(&msg->gain);
  // observationmatrix
  rosidl_runtime_c__double__Sequence__fini(&msg->observationmatrix);
}

trident_msgs__srv__KalmanSensorService_Response *
trident_msgs__srv__KalmanSensorService_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trident_msgs__srv__KalmanSensorService_Response * msg = (trident_msgs__srv__KalmanSensorService_Response *)allocator.allocate(sizeof(trident_msgs__srv__KalmanSensorService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(trident_msgs__srv__KalmanSensorService_Response));
  bool success = trident_msgs__srv__KalmanSensorService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
trident_msgs__srv__KalmanSensorService_Response__destroy(trident_msgs__srv__KalmanSensorService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    trident_msgs__srv__KalmanSensorService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
trident_msgs__srv__KalmanSensorService_Response__Sequence__init(trident_msgs__srv__KalmanSensorService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trident_msgs__srv__KalmanSensorService_Response * data = NULL;

  if (size) {
    data = (trident_msgs__srv__KalmanSensorService_Response *)allocator.zero_allocate(size, sizeof(trident_msgs__srv__KalmanSensorService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = trident_msgs__srv__KalmanSensorService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        trident_msgs__srv__KalmanSensorService_Response__fini(&data[i - 1]);
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
trident_msgs__srv__KalmanSensorService_Response__Sequence__fini(trident_msgs__srv__KalmanSensorService_Response__Sequence * array)
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
      trident_msgs__srv__KalmanSensorService_Response__fini(&array->data[i]);
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

trident_msgs__srv__KalmanSensorService_Response__Sequence *
trident_msgs__srv__KalmanSensorService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trident_msgs__srv__KalmanSensorService_Response__Sequence * array = (trident_msgs__srv__KalmanSensorService_Response__Sequence *)allocator.allocate(sizeof(trident_msgs__srv__KalmanSensorService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = trident_msgs__srv__KalmanSensorService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
trident_msgs__srv__KalmanSensorService_Response__Sequence__destroy(trident_msgs__srv__KalmanSensorService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    trident_msgs__srv__KalmanSensorService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}