// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from matrix_interface:msg/Message.idl
// generated code does not contain a copyright notice

#ifndef MATRIX_INTERFACE__MSG__DETAIL__MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MATRIX_INTERFACE__MSG__DETAIL__MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "matrix_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "matrix_interface/msg/detail/message__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace matrix_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_matrix_interface
cdr_serialize(
  const matrix_interface::msg::Message & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_matrix_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  matrix_interface::msg::Message & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_matrix_interface
get_serialized_size(
  const matrix_interface::msg::Message & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_matrix_interface
max_serialized_size_Message(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace matrix_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_matrix_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, matrix_interface, msg, Message)();

#ifdef __cplusplus
}
#endif

#endif  // MATRIX_INTERFACE__MSG__DETAIL__MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
