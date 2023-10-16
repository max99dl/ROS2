// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from matrix_interface:srv/Matrix3x3.idl
// generated code does not contain a copyright notice
#include "matrix_interface/srv/detail/matrix3x3__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
matrix_interface__srv__Matrix3x3_Request__init(matrix_interface__srv__Matrix3x3_Request * msg)
{
  if (!msg) {
    return false;
  }
  // first
  // second
  // third
  // four
  // five
  // six
  // seven
  // eight
  // nine
  return true;
}

void
matrix_interface__srv__Matrix3x3_Request__fini(matrix_interface__srv__Matrix3x3_Request * msg)
{
  if (!msg) {
    return;
  }
  // first
  // second
  // third
  // four
  // five
  // six
  // seven
  // eight
  // nine
}

bool
matrix_interface__srv__Matrix3x3_Request__are_equal(const matrix_interface__srv__Matrix3x3_Request * lhs, const matrix_interface__srv__Matrix3x3_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // first
  if (lhs->first != rhs->first) {
    return false;
  }
  // second
  if (lhs->second != rhs->second) {
    return false;
  }
  // third
  if (lhs->third != rhs->third) {
    return false;
  }
  // four
  if (lhs->four != rhs->four) {
    return false;
  }
  // five
  if (lhs->five != rhs->five) {
    return false;
  }
  // six
  if (lhs->six != rhs->six) {
    return false;
  }
  // seven
  if (lhs->seven != rhs->seven) {
    return false;
  }
  // eight
  if (lhs->eight != rhs->eight) {
    return false;
  }
  // nine
  if (lhs->nine != rhs->nine) {
    return false;
  }
  return true;
}

bool
matrix_interface__srv__Matrix3x3_Request__copy(
  const matrix_interface__srv__Matrix3x3_Request * input,
  matrix_interface__srv__Matrix3x3_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // first
  output->first = input->first;
  // second
  output->second = input->second;
  // third
  output->third = input->third;
  // four
  output->four = input->four;
  // five
  output->five = input->five;
  // six
  output->six = input->six;
  // seven
  output->seven = input->seven;
  // eight
  output->eight = input->eight;
  // nine
  output->nine = input->nine;
  return true;
}

matrix_interface__srv__Matrix3x3_Request *
matrix_interface__srv__Matrix3x3_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  matrix_interface__srv__Matrix3x3_Request * msg = (matrix_interface__srv__Matrix3x3_Request *)allocator.allocate(sizeof(matrix_interface__srv__Matrix3x3_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(matrix_interface__srv__Matrix3x3_Request));
  bool success = matrix_interface__srv__Matrix3x3_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
matrix_interface__srv__Matrix3x3_Request__destroy(matrix_interface__srv__Matrix3x3_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    matrix_interface__srv__Matrix3x3_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
matrix_interface__srv__Matrix3x3_Request__Sequence__init(matrix_interface__srv__Matrix3x3_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  matrix_interface__srv__Matrix3x3_Request * data = NULL;

  if (size) {
    data = (matrix_interface__srv__Matrix3x3_Request *)allocator.zero_allocate(size, sizeof(matrix_interface__srv__Matrix3x3_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = matrix_interface__srv__Matrix3x3_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        matrix_interface__srv__Matrix3x3_Request__fini(&data[i - 1]);
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
matrix_interface__srv__Matrix3x3_Request__Sequence__fini(matrix_interface__srv__Matrix3x3_Request__Sequence * array)
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
      matrix_interface__srv__Matrix3x3_Request__fini(&array->data[i]);
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

matrix_interface__srv__Matrix3x3_Request__Sequence *
matrix_interface__srv__Matrix3x3_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  matrix_interface__srv__Matrix3x3_Request__Sequence * array = (matrix_interface__srv__Matrix3x3_Request__Sequence *)allocator.allocate(sizeof(matrix_interface__srv__Matrix3x3_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = matrix_interface__srv__Matrix3x3_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
matrix_interface__srv__Matrix3x3_Request__Sequence__destroy(matrix_interface__srv__Matrix3x3_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    matrix_interface__srv__Matrix3x3_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
matrix_interface__srv__Matrix3x3_Request__Sequence__are_equal(const matrix_interface__srv__Matrix3x3_Request__Sequence * lhs, const matrix_interface__srv__Matrix3x3_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!matrix_interface__srv__Matrix3x3_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
matrix_interface__srv__Matrix3x3_Request__Sequence__copy(
  const matrix_interface__srv__Matrix3x3_Request__Sequence * input,
  matrix_interface__srv__Matrix3x3_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(matrix_interface__srv__Matrix3x3_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    matrix_interface__srv__Matrix3x3_Request * data =
      (matrix_interface__srv__Matrix3x3_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!matrix_interface__srv__Matrix3x3_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          matrix_interface__srv__Matrix3x3_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!matrix_interface__srv__Matrix3x3_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
matrix_interface__srv__Matrix3x3_Response__init(matrix_interface__srv__Matrix3x3_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
matrix_interface__srv__Matrix3x3_Response__fini(matrix_interface__srv__Matrix3x3_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
matrix_interface__srv__Matrix3x3_Response__are_equal(const matrix_interface__srv__Matrix3x3_Response * lhs, const matrix_interface__srv__Matrix3x3_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
matrix_interface__srv__Matrix3x3_Response__copy(
  const matrix_interface__srv__Matrix3x3_Response * input,
  matrix_interface__srv__Matrix3x3_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

matrix_interface__srv__Matrix3x3_Response *
matrix_interface__srv__Matrix3x3_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  matrix_interface__srv__Matrix3x3_Response * msg = (matrix_interface__srv__Matrix3x3_Response *)allocator.allocate(sizeof(matrix_interface__srv__Matrix3x3_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(matrix_interface__srv__Matrix3x3_Response));
  bool success = matrix_interface__srv__Matrix3x3_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
matrix_interface__srv__Matrix3x3_Response__destroy(matrix_interface__srv__Matrix3x3_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    matrix_interface__srv__Matrix3x3_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
matrix_interface__srv__Matrix3x3_Response__Sequence__init(matrix_interface__srv__Matrix3x3_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  matrix_interface__srv__Matrix3x3_Response * data = NULL;

  if (size) {
    data = (matrix_interface__srv__Matrix3x3_Response *)allocator.zero_allocate(size, sizeof(matrix_interface__srv__Matrix3x3_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = matrix_interface__srv__Matrix3x3_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        matrix_interface__srv__Matrix3x3_Response__fini(&data[i - 1]);
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
matrix_interface__srv__Matrix3x3_Response__Sequence__fini(matrix_interface__srv__Matrix3x3_Response__Sequence * array)
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
      matrix_interface__srv__Matrix3x3_Response__fini(&array->data[i]);
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

matrix_interface__srv__Matrix3x3_Response__Sequence *
matrix_interface__srv__Matrix3x3_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  matrix_interface__srv__Matrix3x3_Response__Sequence * array = (matrix_interface__srv__Matrix3x3_Response__Sequence *)allocator.allocate(sizeof(matrix_interface__srv__Matrix3x3_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = matrix_interface__srv__Matrix3x3_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
matrix_interface__srv__Matrix3x3_Response__Sequence__destroy(matrix_interface__srv__Matrix3x3_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    matrix_interface__srv__Matrix3x3_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
matrix_interface__srv__Matrix3x3_Response__Sequence__are_equal(const matrix_interface__srv__Matrix3x3_Response__Sequence * lhs, const matrix_interface__srv__Matrix3x3_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!matrix_interface__srv__Matrix3x3_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
matrix_interface__srv__Matrix3x3_Response__Sequence__copy(
  const matrix_interface__srv__Matrix3x3_Response__Sequence * input,
  matrix_interface__srv__Matrix3x3_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(matrix_interface__srv__Matrix3x3_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    matrix_interface__srv__Matrix3x3_Response * data =
      (matrix_interface__srv__Matrix3x3_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!matrix_interface__srv__Matrix3x3_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          matrix_interface__srv__Matrix3x3_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!matrix_interface__srv__Matrix3x3_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
