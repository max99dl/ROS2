// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from matrix_interface:srv/Matrix3x3.idl
// generated code does not contain a copyright notice
#include "matrix_interface/srv/detail/matrix3x3__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "matrix_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "matrix_interface/srv/detail/matrix3x3__struct.h"
#include "matrix_interface/srv/detail/matrix3x3__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Matrix3x3_Request__ros_msg_type = matrix_interface__srv__Matrix3x3_Request;

static bool _Matrix3x3_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Matrix3x3_Request__ros_msg_type * ros_message = static_cast<const _Matrix3x3_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: first
  {
    cdr << ros_message->first;
  }

  // Field name: second
  {
    cdr << ros_message->second;
  }

  // Field name: third
  {
    cdr << ros_message->third;
  }

  // Field name: four
  {
    cdr << ros_message->four;
  }

  // Field name: five
  {
    cdr << ros_message->five;
  }

  // Field name: six
  {
    cdr << ros_message->six;
  }

  // Field name: seven
  {
    cdr << ros_message->seven;
  }

  // Field name: eight
  {
    cdr << ros_message->eight;
  }

  // Field name: nine
  {
    cdr << ros_message->nine;
  }

  return true;
}

static bool _Matrix3x3_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Matrix3x3_Request__ros_msg_type * ros_message = static_cast<_Matrix3x3_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: first
  {
    cdr >> ros_message->first;
  }

  // Field name: second
  {
    cdr >> ros_message->second;
  }

  // Field name: third
  {
    cdr >> ros_message->third;
  }

  // Field name: four
  {
    cdr >> ros_message->four;
  }

  // Field name: five
  {
    cdr >> ros_message->five;
  }

  // Field name: six
  {
    cdr >> ros_message->six;
  }

  // Field name: seven
  {
    cdr >> ros_message->seven;
  }

  // Field name: eight
  {
    cdr >> ros_message->eight;
  }

  // Field name: nine
  {
    cdr >> ros_message->nine;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_matrix_interface
size_t get_serialized_size_matrix_interface__srv__Matrix3x3_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Matrix3x3_Request__ros_msg_type * ros_message = static_cast<const _Matrix3x3_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name first
  {
    size_t item_size = sizeof(ros_message->first);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name second
  {
    size_t item_size = sizeof(ros_message->second);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name third
  {
    size_t item_size = sizeof(ros_message->third);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name four
  {
    size_t item_size = sizeof(ros_message->four);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name five
  {
    size_t item_size = sizeof(ros_message->five);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name six
  {
    size_t item_size = sizeof(ros_message->six);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seven
  {
    size_t item_size = sizeof(ros_message->seven);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eight
  {
    size_t item_size = sizeof(ros_message->eight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nine
  {
    size_t item_size = sizeof(ros_message->nine);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Matrix3x3_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_matrix_interface__srv__Matrix3x3_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_matrix_interface
size_t max_serialized_size_matrix_interface__srv__Matrix3x3_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: first
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: second
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: third
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: four
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: five
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: six
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: seven
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: eight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: nine
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Matrix3x3_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_matrix_interface__srv__Matrix3x3_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Matrix3x3_Request = {
  "matrix_interface::srv",
  "Matrix3x3_Request",
  _Matrix3x3_Request__cdr_serialize,
  _Matrix3x3_Request__cdr_deserialize,
  _Matrix3x3_Request__get_serialized_size,
  _Matrix3x3_Request__max_serialized_size
};

static rosidl_message_type_support_t _Matrix3x3_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Matrix3x3_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, matrix_interface, srv, Matrix3x3_Request)() {
  return &_Matrix3x3_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "matrix_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "matrix_interface/srv/detail/matrix3x3__struct.h"
// already included above
// #include "matrix_interface/srv/detail/matrix3x3__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Matrix3x3_Response__ros_msg_type = matrix_interface__srv__Matrix3x3_Response;

static bool _Matrix3x3_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Matrix3x3_Response__ros_msg_type * ros_message = static_cast<const _Matrix3x3_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << ros_message->result;
  }

  return true;
}

static bool _Matrix3x3_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Matrix3x3_Response__ros_msg_type * ros_message = static_cast<_Matrix3x3_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr >> ros_message->result;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_matrix_interface
size_t get_serialized_size_matrix_interface__srv__Matrix3x3_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Matrix3x3_Response__ros_msg_type * ros_message = static_cast<const _Matrix3x3_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Matrix3x3_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_matrix_interface__srv__Matrix3x3_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_matrix_interface
size_t max_serialized_size_matrix_interface__srv__Matrix3x3_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Matrix3x3_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_matrix_interface__srv__Matrix3x3_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Matrix3x3_Response = {
  "matrix_interface::srv",
  "Matrix3x3_Response",
  _Matrix3x3_Response__cdr_serialize,
  _Matrix3x3_Response__cdr_deserialize,
  _Matrix3x3_Response__get_serialized_size,
  _Matrix3x3_Response__max_serialized_size
};

static rosidl_message_type_support_t _Matrix3x3_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Matrix3x3_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, matrix_interface, srv, Matrix3x3_Response)() {
  return &_Matrix3x3_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "matrix_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "matrix_interface/srv/matrix3x3.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Matrix3x3__callbacks = {
  "matrix_interface::srv",
  "Matrix3x3",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, matrix_interface, srv, Matrix3x3_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, matrix_interface, srv, Matrix3x3_Response)(),
};

static rosidl_service_type_support_t Matrix3x3__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Matrix3x3__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, matrix_interface, srv, Matrix3x3)() {
  return &Matrix3x3__handle;
}

#if defined(__cplusplus)
}
#endif
