// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from matrix_interface:msg/Message.idl
// generated code does not contain a copyright notice

#ifndef MATRIX_INTERFACE__MSG__DETAIL__MESSAGE__STRUCT_H_
#define MATRIX_INTERFACE__MSG__DETAIL__MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Message in the package matrix_interface.
typedef struct matrix_interface__msg__Message
{
  rosidl_runtime_c__String message;
} matrix_interface__msg__Message;

// Struct for a sequence of matrix_interface__msg__Message.
typedef struct matrix_interface__msg__Message__Sequence
{
  matrix_interface__msg__Message * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} matrix_interface__msg__Message__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MATRIX_INTERFACE__MSG__DETAIL__MESSAGE__STRUCT_H_
