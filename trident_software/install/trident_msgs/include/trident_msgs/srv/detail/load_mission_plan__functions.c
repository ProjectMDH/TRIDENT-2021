// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from trident_msgs:srv/LoadMissionPlan.idl
// generated code does not contain a copyright notice
#include "trident_msgs/srv/detail/load_mission_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `latitude`
// Member `longitude`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
trident_msgs__srv__LoadMissionPlan_Request__init(trident_msgs__srv__LoadMissionPlan_Request * msg)
{
  if (!msg) {
    return false;
  }
  // latitude
  if (!rosidl_runtime_c__float__Sequence__init(&msg->latitude, 0)) {
    trident_msgs__srv__LoadMissionPlan_Request__fini(msg);
    return false;
  }
  // longitude
  if (!rosidl_runtime_c__float__Sequence__init(&msg->longitude, 0)) {
    trident_msgs__srv__LoadMissionPlan_Request__fini(msg);
    return false;
  }
  return true;
}

void
trident_msgs__srv__LoadMissionPlan_Request__fini(trident_msgs__srv__LoadMissionPlan_Request * msg)
{
  if (!msg) {
    return;
  }
  // latitude
  rosidl_runtime_c__float__Sequence__fini(&msg->latitude);
  // longitude
  rosidl_runtime_c__float__Sequence__fini(&msg->longitude);
}

trident_msgs__srv__LoadMissionPlan_Request *
trident_msgs__srv__LoadMissionPlan_Request__create()
{
  trident_msgs__srv__LoadMissionPlan_Request * msg = (trident_msgs__srv__LoadMissionPlan_Request *)malloc(sizeof(trident_msgs__srv__LoadMissionPlan_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(trident_msgs__srv__LoadMissionPlan_Request));
  bool success = trident_msgs__srv__LoadMissionPlan_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
trident_msgs__srv__LoadMissionPlan_Request__destroy(trident_msgs__srv__LoadMissionPlan_Request * msg)
{
  if (msg) {
    trident_msgs__srv__LoadMissionPlan_Request__fini(msg);
  }
  free(msg);
}


bool
trident_msgs__srv__LoadMissionPlan_Request__Sequence__init(trident_msgs__srv__LoadMissionPlan_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  trident_msgs__srv__LoadMissionPlan_Request * data = NULL;
  if (size) {
    data = (trident_msgs__srv__LoadMissionPlan_Request *)calloc(size, sizeof(trident_msgs__srv__LoadMissionPlan_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = trident_msgs__srv__LoadMissionPlan_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        trident_msgs__srv__LoadMissionPlan_Request__fini(&data[i - 1]);
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
trident_msgs__srv__LoadMissionPlan_Request__Sequence__fini(trident_msgs__srv__LoadMissionPlan_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      trident_msgs__srv__LoadMissionPlan_Request__fini(&array->data[i]);
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

trident_msgs__srv__LoadMissionPlan_Request__Sequence *
trident_msgs__srv__LoadMissionPlan_Request__Sequence__create(size_t size)
{
  trident_msgs__srv__LoadMissionPlan_Request__Sequence * array = (trident_msgs__srv__LoadMissionPlan_Request__Sequence *)malloc(sizeof(trident_msgs__srv__LoadMissionPlan_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = trident_msgs__srv__LoadMissionPlan_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
trident_msgs__srv__LoadMissionPlan_Request__Sequence__destroy(trident_msgs__srv__LoadMissionPlan_Request__Sequence * array)
{
  if (array) {
    trident_msgs__srv__LoadMissionPlan_Request__Sequence__fini(array);
  }
  free(array);
}


bool
trident_msgs__srv__LoadMissionPlan_Response__init(trident_msgs__srv__LoadMissionPlan_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
trident_msgs__srv__LoadMissionPlan_Response__fini(trident_msgs__srv__LoadMissionPlan_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
}

trident_msgs__srv__LoadMissionPlan_Response *
trident_msgs__srv__LoadMissionPlan_Response__create()
{
  trident_msgs__srv__LoadMissionPlan_Response * msg = (trident_msgs__srv__LoadMissionPlan_Response *)malloc(sizeof(trident_msgs__srv__LoadMissionPlan_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(trident_msgs__srv__LoadMissionPlan_Response));
  bool success = trident_msgs__srv__LoadMissionPlan_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
trident_msgs__srv__LoadMissionPlan_Response__destroy(trident_msgs__srv__LoadMissionPlan_Response * msg)
{
  if (msg) {
    trident_msgs__srv__LoadMissionPlan_Response__fini(msg);
  }
  free(msg);
}


bool
trident_msgs__srv__LoadMissionPlan_Response__Sequence__init(trident_msgs__srv__LoadMissionPlan_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  trident_msgs__srv__LoadMissionPlan_Response * data = NULL;
  if (size) {
    data = (trident_msgs__srv__LoadMissionPlan_Response *)calloc(size, sizeof(trident_msgs__srv__LoadMissionPlan_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = trident_msgs__srv__LoadMissionPlan_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        trident_msgs__srv__LoadMissionPlan_Response__fini(&data[i - 1]);
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
trident_msgs__srv__LoadMissionPlan_Response__Sequence__fini(trident_msgs__srv__LoadMissionPlan_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      trident_msgs__srv__LoadMissionPlan_Response__fini(&array->data[i]);
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

trident_msgs__srv__LoadMissionPlan_Response__Sequence *
trident_msgs__srv__LoadMissionPlan_Response__Sequence__create(size_t size)
{
  trident_msgs__srv__LoadMissionPlan_Response__Sequence * array = (trident_msgs__srv__LoadMissionPlan_Response__Sequence *)malloc(sizeof(trident_msgs__srv__LoadMissionPlan_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = trident_msgs__srv__LoadMissionPlan_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
trident_msgs__srv__LoadMissionPlan_Response__Sequence__destroy(trident_msgs__srv__LoadMissionPlan_Response__Sequence * array)
{
  if (array) {
    trident_msgs__srv__LoadMissionPlan_Response__Sequence__fini(array);
  }
  free(array);
}
