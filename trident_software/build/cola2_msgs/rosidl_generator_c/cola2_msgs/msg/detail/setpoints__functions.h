// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cola2_msgs:msg/Setpoints.idl
// generated code does not contain a copyright notice

#ifndef COLA2_MSGS__MSG__DETAIL__SETPOINTS__FUNCTIONS_H_
#define COLA2_MSGS__MSG__DETAIL__SETPOINTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cola2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cola2_msgs/msg/detail/setpoints__struct.h"

/// Initialize msg/Setpoints message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cola2_msgs__msg__Setpoints
 * )) before or use
 * cola2_msgs__msg__Setpoints__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
bool
cola2_msgs__msg__Setpoints__init(cola2_msgs__msg__Setpoints * msg);

/// Finalize msg/Setpoints message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
void
cola2_msgs__msg__Setpoints__fini(cola2_msgs__msg__Setpoints * msg);

/// Create msg/Setpoints message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cola2_msgs__msg__Setpoints__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
cola2_msgs__msg__Setpoints *
cola2_msgs__msg__Setpoints__create();

/// Destroy msg/Setpoints message.
/**
 * It calls
 * cola2_msgs__msg__Setpoints__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
void
cola2_msgs__msg__Setpoints__destroy(cola2_msgs__msg__Setpoints * msg);


/// Initialize array of msg/Setpoints messages.
/**
 * It allocates the memory for the number of elements and calls
 * cola2_msgs__msg__Setpoints__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
bool
cola2_msgs__msg__Setpoints__Sequence__init(cola2_msgs__msg__Setpoints__Sequence * array, size_t size);

/// Finalize array of msg/Setpoints messages.
/**
 * It calls
 * cola2_msgs__msg__Setpoints__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
void
cola2_msgs__msg__Setpoints__Sequence__fini(cola2_msgs__msg__Setpoints__Sequence * array);

/// Create array of msg/Setpoints messages.
/**
 * It allocates the memory for the array and calls
 * cola2_msgs__msg__Setpoints__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
cola2_msgs__msg__Setpoints__Sequence *
cola2_msgs__msg__Setpoints__Sequence__create(size_t size);

/// Destroy array of msg/Setpoints messages.
/**
 * It calls
 * cola2_msgs__msg__Setpoints__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
void
cola2_msgs__msg__Setpoints__Sequence__destroy(cola2_msgs__msg__Setpoints__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // COLA2_MSGS__MSG__DETAIL__SETPOINTS__FUNCTIONS_H_
