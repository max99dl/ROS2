// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from matrix_interface:srv/Matrix3x3.idl
// generated code does not contain a copyright notice

#ifndef MATRIX_INTERFACE__SRV__DETAIL__MATRIX3X3__STRUCT_HPP_
#define MATRIX_INTERFACE__SRV__DETAIL__MATRIX3X3__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__matrix_interface__srv__Matrix3x3_Request __attribute__((deprecated))
#else
# define DEPRECATED__matrix_interface__srv__Matrix3x3_Request __declspec(deprecated)
#endif

namespace matrix_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Matrix3x3_Request_
{
  using Type = Matrix3x3_Request_<ContainerAllocator>;

  explicit Matrix3x3_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first = 0ll;
      this->second = 0ll;
      this->third = 0ll;
      this->four = 0ll;
      this->five = 0ll;
      this->six = 0ll;
      this->seven = 0ll;
      this->eight = 0ll;
      this->nine = 0ll;
    }
  }

  explicit Matrix3x3_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first = 0ll;
      this->second = 0ll;
      this->third = 0ll;
      this->four = 0ll;
      this->five = 0ll;
      this->six = 0ll;
      this->seven = 0ll;
      this->eight = 0ll;
      this->nine = 0ll;
    }
  }

  // field types and members
  using _first_type =
    int64_t;
  _first_type first;
  using _second_type =
    int64_t;
  _second_type second;
  using _third_type =
    int64_t;
  _third_type third;
  using _four_type =
    int64_t;
  _four_type four;
  using _five_type =
    int64_t;
  _five_type five;
  using _six_type =
    int64_t;
  _six_type six;
  using _seven_type =
    int64_t;
  _seven_type seven;
  using _eight_type =
    int64_t;
  _eight_type eight;
  using _nine_type =
    int64_t;
  _nine_type nine;

  // setters for named parameter idiom
  Type & set__first(
    const int64_t & _arg)
  {
    this->first = _arg;
    return *this;
  }
  Type & set__second(
    const int64_t & _arg)
  {
    this->second = _arg;
    return *this;
  }
  Type & set__third(
    const int64_t & _arg)
  {
    this->third = _arg;
    return *this;
  }
  Type & set__four(
    const int64_t & _arg)
  {
    this->four = _arg;
    return *this;
  }
  Type & set__five(
    const int64_t & _arg)
  {
    this->five = _arg;
    return *this;
  }
  Type & set__six(
    const int64_t & _arg)
  {
    this->six = _arg;
    return *this;
  }
  Type & set__seven(
    const int64_t & _arg)
  {
    this->seven = _arg;
    return *this;
  }
  Type & set__eight(
    const int64_t & _arg)
  {
    this->eight = _arg;
    return *this;
  }
  Type & set__nine(
    const int64_t & _arg)
  {
    this->nine = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    matrix_interface::srv::Matrix3x3_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const matrix_interface::srv::Matrix3x3_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<matrix_interface::srv::Matrix3x3_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<matrix_interface::srv::Matrix3x3_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      matrix_interface::srv::Matrix3x3_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<matrix_interface::srv::Matrix3x3_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      matrix_interface::srv::Matrix3x3_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<matrix_interface::srv::Matrix3x3_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<matrix_interface::srv::Matrix3x3_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<matrix_interface::srv::Matrix3x3_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__matrix_interface__srv__Matrix3x3_Request
    std::shared_ptr<matrix_interface::srv::Matrix3x3_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__matrix_interface__srv__Matrix3x3_Request
    std::shared_ptr<matrix_interface::srv::Matrix3x3_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Matrix3x3_Request_ & other) const
  {
    if (this->first != other.first) {
      return false;
    }
    if (this->second != other.second) {
      return false;
    }
    if (this->third != other.third) {
      return false;
    }
    if (this->four != other.four) {
      return false;
    }
    if (this->five != other.five) {
      return false;
    }
    if (this->six != other.six) {
      return false;
    }
    if (this->seven != other.seven) {
      return false;
    }
    if (this->eight != other.eight) {
      return false;
    }
    if (this->nine != other.nine) {
      return false;
    }
    return true;
  }
  bool operator!=(const Matrix3x3_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Matrix3x3_Request_

// alias to use template instance with default allocator
using Matrix3x3_Request =
  matrix_interface::srv::Matrix3x3_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace matrix_interface


#ifndef _WIN32
# define DEPRECATED__matrix_interface__srv__Matrix3x3_Response __attribute__((deprecated))
#else
# define DEPRECATED__matrix_interface__srv__Matrix3x3_Response __declspec(deprecated)
#endif

namespace matrix_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Matrix3x3_Response_
{
  using Type = Matrix3x3_Response_<ContainerAllocator>;

  explicit Matrix3x3_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0.0;
    }
  }

  explicit Matrix3x3_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0.0;
    }
  }

  // field types and members
  using _result_type =
    double;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const double & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    matrix_interface::srv::Matrix3x3_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const matrix_interface::srv::Matrix3x3_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<matrix_interface::srv::Matrix3x3_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<matrix_interface::srv::Matrix3x3_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      matrix_interface::srv::Matrix3x3_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<matrix_interface::srv::Matrix3x3_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      matrix_interface::srv::Matrix3x3_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<matrix_interface::srv::Matrix3x3_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<matrix_interface::srv::Matrix3x3_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<matrix_interface::srv::Matrix3x3_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__matrix_interface__srv__Matrix3x3_Response
    std::shared_ptr<matrix_interface::srv::Matrix3x3_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__matrix_interface__srv__Matrix3x3_Response
    std::shared_ptr<matrix_interface::srv::Matrix3x3_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Matrix3x3_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Matrix3x3_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Matrix3x3_Response_

// alias to use template instance with default allocator
using Matrix3x3_Response =
  matrix_interface::srv::Matrix3x3_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace matrix_interface

namespace matrix_interface
{

namespace srv
{

struct Matrix3x3
{
  using Request = matrix_interface::srv::Matrix3x3_Request;
  using Response = matrix_interface::srv::Matrix3x3_Response;
};

}  // namespace srv

}  // namespace matrix_interface

#endif  // MATRIX_INTERFACE__SRV__DETAIL__MATRIX3X3__STRUCT_HPP_
