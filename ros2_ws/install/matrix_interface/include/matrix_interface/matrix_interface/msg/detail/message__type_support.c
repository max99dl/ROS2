// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from matrix_interface:msg/Message.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "matrix_interface/msg/detail/message__rosidl_typesupport_introspection_c.h"
#include "matrix_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "matrix_interface/msg/detail/message__functions.h"
#include "matrix_interface/msg/detail/message__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void matrix_interface__msg__Message__rosidl_typesupport_introspection_c__Message_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  matrix_interface__msg__Message__init(message_memory);
}

void matrix_interface__msg__Message__rosidl_typesupport_introspection_c__Message_fini_function(void * message_memory)
{
  matrix_interface__msg__Message__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember matrix_interface__msg__Message__rosidl_typesupport_introspection_c__Message_message_member_array[1] = {
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(matrix_interface__msg__Message, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers matrix_interface__msg__Message__rosidl_typesupport_introspection_c__Message_message_members = {
  "matrix_interface__msg",  // message namespace
  "Message",  // message name
  1,  // number of fields
  sizeof(matrix_interface__msg__Message),
  matrix_interface__msg__Message__rosidl_typesupport_introspection_c__Message_message_member_array,  // message members
  matrix_interface__msg__Message__rosidl_typesupport_introspection_c__Message_init_function,  // function to initialize message memory (memory has to be allocated)
  matrix_interface__msg__Message__rosidl_typesupport_introspection_c__Message_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t matrix_interface__msg__Message__rosidl_typesupport_introspection_c__Message_message_type_support_handle = {
  0,
  &matrix_interface__msg__Message__rosidl_typesupport_introspection_c__Message_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_matrix_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, matrix_interface, msg, Message)() {
  if (!matrix_interface__msg__Message__rosidl_typesupport_introspection_c__Message_message_type_support_handle.typesupport_identifier) {
    matrix_interface__msg__Message__rosidl_typesupport_introspection_c__Message_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &matrix_interface__msg__Message__rosidl_typesupport_introspection_c__Message_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
