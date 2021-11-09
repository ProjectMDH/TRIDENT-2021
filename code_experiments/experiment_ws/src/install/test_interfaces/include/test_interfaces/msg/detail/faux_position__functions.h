// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from test_interfaces:msg/FauxPosition.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__FAUX_POSITION__FUNCTIONS_H_
#define TEST_INTERFACES__MSG__DETAIL__FAUX_POSITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "test_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "test_interfaces/msg/detail/faux_position__struct.h"

/// Initialize msg/FauxPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_interfaces__msg__FauxPosition
 * )) before or use
 * test_interfaces__msg__FauxPosition__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
bool
test_interfaces__msg__FauxPosition__init(test_interfaces__msg__FauxPosition * msg);

/// Finalize msg/FauxPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
void
test_interfaces__msg__FauxPosition__fini(test_interfaces__msg__FauxPosition * msg);

/// Create msg/FauxPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_interfaces__msg__FauxPosition__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
test_interfaces__msg__FauxPosition *
test_interfaces__msg__FauxPosition__create();

/// Destroy msg/FauxPosition message.
/**
 * It calls
 * test_interfaces__msg__FauxPosition__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
void
test_interfaces__msg__FauxPosition__destroy(test_interfaces__msg__FauxPosition * msg);


/// Initialize array of msg/FauxPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_interfaces__msg__FauxPosition__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
bool
test_interfaces__msg__FauxPosition__Sequence__init(test_interfaces__msg__FauxPosition__Sequence * array, size_t size);

/// Finalize array of msg/FauxPosition messages.
/**
 * It calls
 * test_interfaces__msg__FauxPosition__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
void
test_interfaces__msg__FauxPosition__Sequence__fini(test_interfaces__msg__FauxPosition__Sequence * array);

/// Create array of msg/FauxPosition messages.
/**
 * It allocates the memory for the array and calls
 * test_interfaces__msg__FauxPosition__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
test_interfaces__msg__FauxPosition__Sequence *
test_interfaces__msg__FauxPosition__Sequence__create(size_t size);

/// Destroy array of msg/FauxPosition messages.
/**
 * It calls
 * test_interfaces__msg__FauxPosition__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
void
test_interfaces__msg__FauxPosition__Sequence__destroy(test_interfaces__msg__FauxPosition__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TEST_INTERFACES__MSG__DETAIL__FAUX_POSITION__FUNCTIONS_H_
