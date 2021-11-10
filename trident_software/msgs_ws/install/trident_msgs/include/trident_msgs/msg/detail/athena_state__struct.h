// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from trident_msgs:msg/AthenaState.idl
// generated code does not contain a copyright notice

#ifndef TRIDENT_MSGS__MSG__DETAIL__ATHENA_STATE__STRUCT_H_
#define TRIDENT_MSGS__MSG__DETAIL__ATHENA_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/AthenaState in the package trident_msgs.
typedef struct trident_msgs__msg__AthenaState
{
  double x;
  double y;
  float heading;
  float velx;
  float vely;
  float velheading;
} trident_msgs__msg__AthenaState;

// Struct for a sequence of trident_msgs__msg__AthenaState.
typedef struct trident_msgs__msg__AthenaState__Sequence
{
  trident_msgs__msg__AthenaState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trident_msgs__msg__AthenaState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRIDENT_MSGS__MSG__DETAIL__ATHENA_STATE__STRUCT_H_