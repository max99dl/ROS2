// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from matrix_interface:srv/Matrix3x3.idl
// generated code does not contain a copyright notice

#ifndef MATRIX_INTERFACE__SRV__DETAIL__MATRIX3X3__STRUCT_H_
#define MATRIX_INTERFACE__SRV__DETAIL__MATRIX3X3__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Matrix3x3 in the package matrix_interface.
typedef struct matrix_interface__srv__Matrix3x3_Request
{
  int64_t first;
  int64_t second;
  int64_t third;
  int64_t four;
  int64_t five;
  int64_t six;
  int64_t seven;
  int64_t eight;
  int64_t nine;
} matrix_interface__srv__Matrix3x3_Request;

// Struct for a sequence of matrix_interface__srv__Matrix3x3_Request.
typedef struct matrix_interface__srv__Matrix3x3_Request__Sequence
{
  matrix_interface__srv__Matrix3x3_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} matrix_interface__srv__Matrix3x3_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Matrix3x3 in the package matrix_interface.
typedef struct matrix_interface__srv__Matrix3x3_Response
{
  double result;
} matrix_interface__srv__Matrix3x3_Response;

// Struct for a sequence of matrix_interface__srv__Matrix3x3_Response.
typedef struct matrix_interface__srv__Matrix3x3_Response__Sequence
{
  matrix_interface__srv__Matrix3x3_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} matrix_interface__srv__Matrix3x3_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MATRIX_INTERFACE__SRV__DETAIL__MATRIX3X3__STRUCT_H_
