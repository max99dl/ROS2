// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from matrix_interface:msg/Message.idl
// generated code does not contain a copyright notice

#ifndef MATRIX_INTERFACE__MSG__DETAIL__MESSAGE__BUILDER_HPP_
#define MATRIX_INTERFACE__MSG__DETAIL__MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "matrix_interface/msg/detail/message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace matrix_interface
{

namespace msg
{

namespace builder
{

class Init_Message_message
{
public:
  Init_Message_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::matrix_interface::msg::Message message(::matrix_interface::msg::Message::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::matrix_interface::msg::Message msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::matrix_interface::msg::Message>()
{
  return matrix_interface::msg::builder::Init_Message_message();
}

}  // namespace matrix_interface

#endif  // MATRIX_INTERFACE__MSG__DETAIL__MESSAGE__BUILDER_HPP_
