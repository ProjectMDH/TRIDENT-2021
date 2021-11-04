// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from trident_msgs:srv/GetState.idl
// generated code does not contain a copyright notice
#include "trident_msgs/srv/detail/get_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
trident_msgs__srv__GetState_Request__init(trident_msgs__srv__GetState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
trident_msgs__srv__GetState_Request__fini(trident_msgs__srv__GetState_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

trident_msgs__srv__GetState_Request *
trident_msgs__srv__GetState_Request__create()
{
  trident_msgs__srv__GetState_Request * msg = (trident_msgs__srv__GetState_Request *)malloc(sizeof(trident_msgs__srv__GetState_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(trident_msgs__srv__GetState_Request));
  bool success = trident_msgs__srv__GetState_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
trident_msgs__srv__GetState_Request__destroy(trident_msgs__srv__GetState_Request * msg)
{
  if (msg) {
    trident_msgs__srv__GetState_Request__fini(msg);
  }
  free(msg);
}


bool
trident_msgs__srv__GetState_Request__Sequence__init(trident_msgs__srv__GetState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  trident_msgs__srv__GetState_Request * data = NULL;
  if (size) {
    data = (trident_msgs__srv__GetState_Request *)calloc(size, sizeof(trident_msgs__srv__GetState_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = trident_msgs__srv__GetState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        trident_msgs__srv__GetState_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
trident_msgs__srv__GetState_Request__Sequence__fini(trident_msgs__srv__GetState_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      trident_msgs__srv__GetState_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

trident_msgs__srv__GetState_Request__Sequence *
trident_msgs__srv__GetState_Request__Sequence__create(size_t size)
{
  trident_msgs__srv__GetState_Request__Sequence * array = (trident_msgs__srv__GetState_Request__Sequence *)malloc(sizeof(trident_msgs__srv__GetState_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = trident_msgs__srv__GetState_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
trident_msgs__srv__GetState_Request__Sequence__destroy(trident_msgs__srv__GetState_Request__Sequence * array)
{
  if (array) {
    trident_msgs__srv__GetState_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

bool
trident_msgs__srv__GetState_Response__init(trident_msgs__srv__GetState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    trident_msgs__srv__GetState_Response__fini(msg);
    return false;
  }
  // int_state
  msg->int_state = -1ll;
  return true;
}

void
trident_msgs__srv__GetState_Response__fini(trident_msgs__srv__GetState_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // int_state
}

trident_msgs__srv__GetState_Response *
trident_msgs__srv__GetState_Response__create()
{
  trident_msgs__srv__GetState_Response * msg = (trident_msgs__srv__GetState_Response *)malloc(sizeof(trident_msgs__srv__GetState_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(trident_msgs__srv__GetState_Response));
  bool success = trident_msgs__srv__GetState_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
trident_msgs__srv__GetState_Response__destroy(trident_msgs__srv__GetState_Response * msg)
{
  if (msg) {
    trident_msgs__srv__GetState_Response__fini(msg);
  }
  free(msg);
}


bool
trident_msgs__srv__GetState_Response__Sequence__init(trident_msgs__srv__GetState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  trident_msgs__srv__GetState_Response * data = NULL;
  if (size) {
    data = (trident_msgs__srv__GetState_Response *)calloc(size, sizeof(trident_msgs__srv__GetState_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = trident_msgs__srv__GetState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        trident_msgs__srv__GetState_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
trident_msgs__srv__GetState_Response__Sequence__fini(trident_msgs__srv__GetState_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      trident_msgs__srv__GetState_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

trident_msgs__srv__GetState_Response__Sequence *
trident_msgs__srv__GetState_Response__Sequence__create(size_t size)
{
  trident_msgs__srv__GetState_Response__Sequence * array = (trident_msgs__srv__GetState_Response__Sequence *)malloc(sizeof(trident_msgs__srv__GetState_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = trident_msgs__srv__GetState_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
trident_msgs__srv__GetState_Response__Sequence__destroy(trident_msgs__srv__GetState_Response__Sequence * array)
{
  if (array) {
    trident_msgs__srv__GetState_Response__Sequence__fini(array);
  }
  free(array);
}
