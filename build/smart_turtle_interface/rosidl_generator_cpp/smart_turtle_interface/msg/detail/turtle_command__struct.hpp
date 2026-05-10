// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from smart_turtle_interface:msg/TurtleCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "smart_turtle_interface/msg/turtle_command.hpp"


#ifndef SMART_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_COMMAND__STRUCT_HPP_
#define SMART_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__smart_turtle_interface__msg__TurtleCommand __attribute__((deprecated))
#else
# define DEPRECATED__smart_turtle_interface__msg__TurtleCommand __declspec(deprecated)
#endif

namespace smart_turtle_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TurtleCommand_
{
  using Type = TurtleCommand_<ContainerAllocator>;

  explicit TurtleCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pattern = "";
      this->speed = 0.0f;
    }
  }

  explicit TurtleCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pattern(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pattern = "";
      this->speed = 0.0f;
    }
  }

  // field types and members
  using _pattern_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pattern_type pattern;
  using _speed_type =
    float;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__pattern(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pattern = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smart_turtle_interface::msg::TurtleCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const smart_turtle_interface::msg::TurtleCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smart_turtle_interface::msg::TurtleCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smart_turtle_interface::msg::TurtleCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smart_turtle_interface::msg::TurtleCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smart_turtle_interface::msg::TurtleCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smart_turtle_interface::msg::TurtleCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smart_turtle_interface::msg::TurtleCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smart_turtle_interface::msg::TurtleCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smart_turtle_interface::msg::TurtleCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smart_turtle_interface__msg__TurtleCommand
    std::shared_ptr<smart_turtle_interface::msg::TurtleCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smart_turtle_interface__msg__TurtleCommand
    std::shared_ptr<smart_turtle_interface::msg::TurtleCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleCommand_ & other) const
  {
    if (this->pattern != other.pattern) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleCommand_

// alias to use template instance with default allocator
using TurtleCommand =
  smart_turtle_interface::msg::TurtleCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace smart_turtle_interface

#endif  // SMART_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_COMMAND__STRUCT_HPP_
