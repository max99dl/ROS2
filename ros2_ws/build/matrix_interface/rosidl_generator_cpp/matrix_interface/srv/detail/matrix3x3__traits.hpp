// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from matrix_interface:srv/Matrix3x3.idl
// generated code does not contain a copyright notice

#ifndef MATRIX_INTERFACE__SRV__DETAIL__MATRIX3X3__TRAITS_HPP_
#define MATRIX_INTERFACE__SRV__DETAIL__MATRIX3X3__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "matrix_interface/srv/detail/matrix3x3__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace matrix_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Matrix3x3_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: first
  {
    out << "first: ";
    rosidl_generator_traits::value_to_yaml(msg.first, out);
    out << ", ";
  }

  // member: second
  {
    out << "second: ";
    rosidl_generator_traits::value_to_yaml(msg.second, out);
    out << ", ";
  }

  // member: third
  {
    out << "third: ";
    rosidl_generator_traits::value_to_yaml(msg.third, out);
    out << ", ";
  }

  // member: four
  {
    out << "four: ";
    rosidl_generator_traits::value_to_yaml(msg.four, out);
    out << ", ";
  }

  // member: five
  {
    out << "five: ";
    rosidl_generator_traits::value_to_yaml(msg.five, out);
    out << ", ";
  }

  // member: six
  {
    out << "six: ";
    rosidl_generator_traits::value_to_yaml(msg.six, out);
    out << ", ";
  }

  // member: seven
  {
    out << "seven: ";
    rosidl_generator_traits::value_to_yaml(msg.seven, out);
    out << ", ";
  }

  // member: eight
  {
    out << "eight: ";
    rosidl_generator_traits::value_to_yaml(msg.eight, out);
    out << ", ";
  }

  // member: nine
  {
    out << "nine: ";
    rosidl_generator_traits::value_to_yaml(msg.nine, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Matrix3x3_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: first
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first: ";
    rosidl_generator_traits::value_to_yaml(msg.first, out);
    out << "\n";
  }

  // member: second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "second: ";
    rosidl_generator_traits::value_to_yaml(msg.second, out);
    out << "\n";
  }

  // member: third
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "third: ";
    rosidl_generator_traits::value_to_yaml(msg.third, out);
    out << "\n";
  }

  // member: four
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "four: ";
    rosidl_generator_traits::value_to_yaml(msg.four, out);
    out << "\n";
  }

  // member: five
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "five: ";
    rosidl_generator_traits::value_to_yaml(msg.five, out);
    out << "\n";
  }

  // member: six
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "six: ";
    rosidl_generator_traits::value_to_yaml(msg.six, out);
    out << "\n";
  }

  // member: seven
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seven: ";
    rosidl_generator_traits::value_to_yaml(msg.seven, out);
    out << "\n";
  }

  // member: eight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eight: ";
    rosidl_generator_traits::value_to_yaml(msg.eight, out);
    out << "\n";
  }

  // member: nine
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nine: ";
    rosidl_generator_traits::value_to_yaml(msg.nine, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Matrix3x3_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace matrix_interface

namespace rosidl_generator_traits
{

[[deprecated("use matrix_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const matrix_interface::srv::Matrix3x3_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  matrix_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use matrix_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const matrix_interface::srv::Matrix3x3_Request & msg)
{
  return matrix_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<matrix_interface::srv::Matrix3x3_Request>()
{
  return "matrix_interface::srv::Matrix3x3_Request";
}

template<>
inline const char * name<matrix_interface::srv::Matrix3x3_Request>()
{
  return "matrix_interface/srv/Matrix3x3_Request";
}

template<>
struct has_fixed_size<matrix_interface::srv::Matrix3x3_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<matrix_interface::srv::Matrix3x3_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<matrix_interface::srv::Matrix3x3_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace matrix_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Matrix3x3_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Matrix3x3_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Matrix3x3_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace matrix_interface

namespace rosidl_generator_traits
{

[[deprecated("use matrix_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const matrix_interface::srv::Matrix3x3_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  matrix_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use matrix_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const matrix_interface::srv::Matrix3x3_Response & msg)
{
  return matrix_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<matrix_interface::srv::Matrix3x3_Response>()
{
  return "matrix_interface::srv::Matrix3x3_Response";
}

template<>
inline const char * name<matrix_interface::srv::Matrix3x3_Response>()
{
  return "matrix_interface/srv/Matrix3x3_Response";
}

template<>
struct has_fixed_size<matrix_interface::srv::Matrix3x3_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<matrix_interface::srv::Matrix3x3_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<matrix_interface::srv::Matrix3x3_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<matrix_interface::srv::Matrix3x3>()
{
  return "matrix_interface::srv::Matrix3x3";
}

template<>
inline const char * name<matrix_interface::srv::Matrix3x3>()
{
  return "matrix_interface/srv/Matrix3x3";
}

template<>
struct has_fixed_size<matrix_interface::srv::Matrix3x3>
  : std::integral_constant<
    bool,
    has_fixed_size<matrix_interface::srv::Matrix3x3_Request>::value &&
    has_fixed_size<matrix_interface::srv::Matrix3x3_Response>::value
  >
{
};

template<>
struct has_bounded_size<matrix_interface::srv::Matrix3x3>
  : std::integral_constant<
    bool,
    has_bounded_size<matrix_interface::srv::Matrix3x3_Request>::value &&
    has_bounded_size<matrix_interface::srv::Matrix3x3_Response>::value
  >
{
};

template<>
struct is_service<matrix_interface::srv::Matrix3x3>
  : std::true_type
{
};

template<>
struct is_service_request<matrix_interface::srv::Matrix3x3_Request>
  : std::true_type
{
};

template<>
struct is_service_response<matrix_interface::srv::Matrix3x3_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MATRIX_INTERFACE__SRV__DETAIL__MATRIX3X3__TRAITS_HPP_
