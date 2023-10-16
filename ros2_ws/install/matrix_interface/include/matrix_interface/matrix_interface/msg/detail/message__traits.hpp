// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from matrix_interface:msg/Message.idl
// generated code does not contain a copyright notice

#ifndef MATRIX_INTERFACE__MSG__DETAIL__MESSAGE__TRAITS_HPP_
#define MATRIX_INTERFACE__MSG__DETAIL__MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "matrix_interface/msg/detail/message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace matrix_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Message & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Message & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Message & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace matrix_interface

namespace rosidl_generator_traits
{

[[deprecated("use matrix_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const matrix_interface::msg::Message & msg,
  std::ostream & out, size_t indentation = 0)
{
  matrix_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use matrix_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const matrix_interface::msg::Message & msg)
{
  return matrix_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<matrix_interface::msg::Message>()
{
  return "matrix_interface::msg::Message";
}

template<>
inline const char * name<matrix_interface::msg::Message>()
{
  return "matrix_interface/msg/Message";
}

template<>
struct has_fixed_size<matrix_interface::msg::Message>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<matrix_interface::msg::Message>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<matrix_interface::msg::Message>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MATRIX_INTERFACE__MSG__DETAIL__MESSAGE__TRAITS_HPP_
