// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from matrix_interface:srv/Matrix3x3.idl
// generated code does not contain a copyright notice
#include "matrix_interface/srv/detail/matrix3x3__rosidl_typesupport_fastrtps_cpp.hpp"
#include "matrix_interface/srv/detail/matrix3x3__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace matrix_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_matrix_interface
cdr_serialize(
  const matrix_interface::srv::Matrix3x3_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: first
  cdr << ros_message.first;
  // Member: second
  cdr << ros_message.second;
  // Member: third
  cdr << ros_message.third;
  // Member: four
  cdr << ros_message.four;
  // Member: five
  cdr << ros_message.five;
  // Member: six
  cdr << ros_message.six;
  // Member: seven
  cdr << ros_message.seven;
  // Member: eight
  cdr << ros_message.eight;
  // Member: nine
  cdr << ros_message.nine;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_matrix_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  matrix_interface::srv::Matrix3x3_Request & ros_message)
{
  // Member: first
  cdr >> ros_message.first;

  // Member: second
  cdr >> ros_message.second;

  // Member: third
  cdr >> ros_message.third;

  // Member: four
  cdr >> ros_message.four;

  // Member: five
  cdr >> ros_message.five;

  // Member: six
  cdr >> ros_message.six;

  // Member: seven
  cdr >> ros_message.seven;

  // Member: eight
  cdr >> ros_message.eight;

  // Member: nine
  cdr >> ros_message.nine;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_matrix_interface
get_serialized_size(
  const matrix_interface::srv::Matrix3x3_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: first
  {
    size_t item_size = sizeof(ros_message.first);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: second
  {
    size_t item_size = sizeof(ros_message.second);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: third
  {
    size_t item_size = sizeof(ros_message.third);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: four
  {
    size_t item_size = sizeof(ros_message.four);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: five
  {
    size_t item_size = sizeof(ros_message.five);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: six
  {
    size_t item_size = sizeof(ros_message.six);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: seven
  {
    size_t item_size = sizeof(ros_message.seven);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eight
  {
    size_t item_size = sizeof(ros_message.eight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nine
  {
    size_t item_size = sizeof(ros_message.nine);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_matrix_interface
max_serialized_size_Matrix3x3_Request(
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


  // Member: first
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: second
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: third
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: four
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: five
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: six
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: seven
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: eight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: nine
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Matrix3x3_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const matrix_interface::srv::Matrix3x3_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Matrix3x3_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<matrix_interface::srv::Matrix3x3_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Matrix3x3_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const matrix_interface::srv::Matrix3x3_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Matrix3x3_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Matrix3x3_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Matrix3x3_Request__callbacks = {
  "matrix_interface::srv",
  "Matrix3x3_Request",
  _Matrix3x3_Request__cdr_serialize,
  _Matrix3x3_Request__cdr_deserialize,
  _Matrix3x3_Request__get_serialized_size,
  _Matrix3x3_Request__max_serialized_size
};

static rosidl_message_type_support_t _Matrix3x3_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Matrix3x3_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace matrix_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_matrix_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<matrix_interface::srv::Matrix3x3_Request>()
{
  return &matrix_interface::srv::typesupport_fastrtps_cpp::_Matrix3x3_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, matrix_interface, srv, Matrix3x3_Request)() {
  return &matrix_interface::srv::typesupport_fastrtps_cpp::_Matrix3x3_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace matrix_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_matrix_interface
cdr_serialize(
  const matrix_interface::srv::Matrix3x3_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: result
  cdr << ros_message.result;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_matrix_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  matrix_interface::srv::Matrix3x3_Response & ros_message)
{
  // Member: result
  cdr >> ros_message.result;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_matrix_interface
get_serialized_size(
  const matrix_interface::srv::Matrix3x3_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: result
  {
    size_t item_size = sizeof(ros_message.result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_matrix_interface
max_serialized_size_Matrix3x3_Response(
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


  // Member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Matrix3x3_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const matrix_interface::srv::Matrix3x3_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Matrix3x3_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<matrix_interface::srv::Matrix3x3_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Matrix3x3_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const matrix_interface::srv::Matrix3x3_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Matrix3x3_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Matrix3x3_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Matrix3x3_Response__callbacks = {
  "matrix_interface::srv",
  "Matrix3x3_Response",
  _Matrix3x3_Response__cdr_serialize,
  _Matrix3x3_Response__cdr_deserialize,
  _Matrix3x3_Response__get_serialized_size,
  _Matrix3x3_Response__max_serialized_size
};

static rosidl_message_type_support_t _Matrix3x3_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Matrix3x3_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace matrix_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_matrix_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<matrix_interface::srv::Matrix3x3_Response>()
{
  return &matrix_interface::srv::typesupport_fastrtps_cpp::_Matrix3x3_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, matrix_interface, srv, Matrix3x3_Response)() {
  return &matrix_interface::srv::typesupport_fastrtps_cpp::_Matrix3x3_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace matrix_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Matrix3x3__callbacks = {
  "matrix_interface::srv",
  "Matrix3x3",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, matrix_interface, srv, Matrix3x3_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, matrix_interface, srv, Matrix3x3_Response)(),
};

static rosidl_service_type_support_t _Matrix3x3__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Matrix3x3__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace matrix_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_matrix_interface
const rosidl_service_type_support_t *
get_service_type_support_handle<matrix_interface::srv::Matrix3x3>()
{
  return &matrix_interface::srv::typesupport_fastrtps_cpp::_Matrix3x3__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, matrix_interface, srv, Matrix3x3)() {
  return &matrix_interface::srv::typesupport_fastrtps_cpp::_Matrix3x3__handle;
}

#ifdef __cplusplus
}
#endif
