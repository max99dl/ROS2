// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from matrix_interface:srv/Matrix3x3.idl
// generated code does not contain a copyright notice

#ifndef MATRIX_INTERFACE__SRV__DETAIL__MATRIX3X3__BUILDER_HPP_
#define MATRIX_INTERFACE__SRV__DETAIL__MATRIX3X3__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "matrix_interface/srv/detail/matrix3x3__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace matrix_interface
{

namespace srv
{

namespace builder
{

class Init_Matrix3x3_Request_nine
{
public:
  explicit Init_Matrix3x3_Request_nine(::matrix_interface::srv::Matrix3x3_Request & msg)
  : msg_(msg)
  {}
  ::matrix_interface::srv::Matrix3x3_Request nine(::matrix_interface::srv::Matrix3x3_Request::_nine_type arg)
  {
    msg_.nine = std::move(arg);
    return std::move(msg_);
  }

private:
  ::matrix_interface::srv::Matrix3x3_Request msg_;
};

class Init_Matrix3x3_Request_eight
{
public:
  explicit Init_Matrix3x3_Request_eight(::matrix_interface::srv::Matrix3x3_Request & msg)
  : msg_(msg)
  {}
  Init_Matrix3x3_Request_nine eight(::matrix_interface::srv::Matrix3x3_Request::_eight_type arg)
  {
    msg_.eight = std::move(arg);
    return Init_Matrix3x3_Request_nine(msg_);
  }

private:
  ::matrix_interface::srv::Matrix3x3_Request msg_;
};

class Init_Matrix3x3_Request_seven
{
public:
  explicit Init_Matrix3x3_Request_seven(::matrix_interface::srv::Matrix3x3_Request & msg)
  : msg_(msg)
  {}
  Init_Matrix3x3_Request_eight seven(::matrix_interface::srv::Matrix3x3_Request::_seven_type arg)
  {
    msg_.seven = std::move(arg);
    return Init_Matrix3x3_Request_eight(msg_);
  }

private:
  ::matrix_interface::srv::Matrix3x3_Request msg_;
};

class Init_Matrix3x3_Request_six
{
public:
  explicit Init_Matrix3x3_Request_six(::matrix_interface::srv::Matrix3x3_Request & msg)
  : msg_(msg)
  {}
  Init_Matrix3x3_Request_seven six(::matrix_interface::srv::Matrix3x3_Request::_six_type arg)
  {
    msg_.six = std::move(arg);
    return Init_Matrix3x3_Request_seven(msg_);
  }

private:
  ::matrix_interface::srv::Matrix3x3_Request msg_;
};

class Init_Matrix3x3_Request_five
{
public:
  explicit Init_Matrix3x3_Request_five(::matrix_interface::srv::Matrix3x3_Request & msg)
  : msg_(msg)
  {}
  Init_Matrix3x3_Request_six five(::matrix_interface::srv::Matrix3x3_Request::_five_type arg)
  {
    msg_.five = std::move(arg);
    return Init_Matrix3x3_Request_six(msg_);
  }

private:
  ::matrix_interface::srv::Matrix3x3_Request msg_;
};

class Init_Matrix3x3_Request_four
{
public:
  explicit Init_Matrix3x3_Request_four(::matrix_interface::srv::Matrix3x3_Request & msg)
  : msg_(msg)
  {}
  Init_Matrix3x3_Request_five four(::matrix_interface::srv::Matrix3x3_Request::_four_type arg)
  {
    msg_.four = std::move(arg);
    return Init_Matrix3x3_Request_five(msg_);
  }

private:
  ::matrix_interface::srv::Matrix3x3_Request msg_;
};

class Init_Matrix3x3_Request_third
{
public:
  explicit Init_Matrix3x3_Request_third(::matrix_interface::srv::Matrix3x3_Request & msg)
  : msg_(msg)
  {}
  Init_Matrix3x3_Request_four third(::matrix_interface::srv::Matrix3x3_Request::_third_type arg)
  {
    msg_.third = std::move(arg);
    return Init_Matrix3x3_Request_four(msg_);
  }

private:
  ::matrix_interface::srv::Matrix3x3_Request msg_;
};

class Init_Matrix3x3_Request_second
{
public:
  explicit Init_Matrix3x3_Request_second(::matrix_interface::srv::Matrix3x3_Request & msg)
  : msg_(msg)
  {}
  Init_Matrix3x3_Request_third second(::matrix_interface::srv::Matrix3x3_Request::_second_type arg)
  {
    msg_.second = std::move(arg);
    return Init_Matrix3x3_Request_third(msg_);
  }

private:
  ::matrix_interface::srv::Matrix3x3_Request msg_;
};

class Init_Matrix3x3_Request_first
{
public:
  Init_Matrix3x3_Request_first()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Matrix3x3_Request_second first(::matrix_interface::srv::Matrix3x3_Request::_first_type arg)
  {
    msg_.first = std::move(arg);
    return Init_Matrix3x3_Request_second(msg_);
  }

private:
  ::matrix_interface::srv::Matrix3x3_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::matrix_interface::srv::Matrix3x3_Request>()
{
  return matrix_interface::srv::builder::Init_Matrix3x3_Request_first();
}

}  // namespace matrix_interface


namespace matrix_interface
{

namespace srv
{

namespace builder
{

class Init_Matrix3x3_Response_result
{
public:
  Init_Matrix3x3_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::matrix_interface::srv::Matrix3x3_Response result(::matrix_interface::srv::Matrix3x3_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::matrix_interface::srv::Matrix3x3_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::matrix_interface::srv::Matrix3x3_Response>()
{
  return matrix_interface::srv::builder::Init_Matrix3x3_Response_result();
}

}  // namespace matrix_interface

#endif  // MATRIX_INTERFACE__SRV__DETAIL__MATRIX3X3__BUILDER_HPP_
