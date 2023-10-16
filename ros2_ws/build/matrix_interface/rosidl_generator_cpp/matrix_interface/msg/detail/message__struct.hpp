// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from matrix_interface:msg/Message.idl
// generated code does not contain a copyright notice

#ifndef MATRIX_INTERFACE__MSG__DETAIL__MESSAGE__STRUCT_HPP_
#define MATRIX_INTERFACE__MSG__DETAIL__MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__matrix_interface__msg__Message __attribute__((deprecated))
#else
# define DEPRECATED__matrix_interface__msg__Message __declspec(deprecated)
#endif

namespace matrix_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Message_
{
  using Type = Message_<ContainerAllocator>;

  explicit Message_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  explicit Message_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    matrix_interface::msg::Message_<ContainerAllocator> *;
  using ConstRawPtr =
    const matrix_interface::msg::Message_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<matrix_interface::msg::Message_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<matrix_interface::msg::Message_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      matrix_interface::msg::Message_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<matrix_interface::msg::Message_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      matrix_interface::msg::Message_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<matrix_interface::msg::Message_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<matrix_interface::msg::Message_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<matrix_interface::msg::Message_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__matrix_interface__msg__Message
    std::shared_ptr<matrix_interface::msg::Message_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__matrix_interface__msg__Message
    std::shared_ptr<matrix_interface::msg::Message_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Message_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Message_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Message_

// alias to use template instance with default allocator
using Message =
  matrix_interface::msg::Message_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace matrix_interface

#endif  // MATRIX_INTERFACE__MSG__DETAIL__MESSAGE__STRUCT_HPP_
