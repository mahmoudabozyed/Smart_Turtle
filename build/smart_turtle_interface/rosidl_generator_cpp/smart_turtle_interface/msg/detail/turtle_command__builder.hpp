// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smart_turtle_interface:msg/TurtleCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "smart_turtle_interface/msg/turtle_command.hpp"


#ifndef SMART_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_COMMAND__BUILDER_HPP_
#define SMART_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smart_turtle_interface/msg/detail/turtle_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smart_turtle_interface
{

namespace msg
{

namespace builder
{

class Init_TurtleCommand_speed
{
public:
  explicit Init_TurtleCommand_speed(::smart_turtle_interface::msg::TurtleCommand & msg)
  : msg_(msg)
  {}
  ::smart_turtle_interface::msg::TurtleCommand speed(::smart_turtle_interface::msg::TurtleCommand::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smart_turtle_interface::msg::TurtleCommand msg_;
};

class Init_TurtleCommand_pattern
{
public:
  Init_TurtleCommand_pattern()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleCommand_speed pattern(::smart_turtle_interface::msg::TurtleCommand::_pattern_type arg)
  {
    msg_.pattern = std::move(arg);
    return Init_TurtleCommand_speed(msg_);
  }

private:
  ::smart_turtle_interface::msg::TurtleCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::smart_turtle_interface::msg::TurtleCommand>()
{
  return smart_turtle_interface::msg::builder::Init_TurtleCommand_pattern();
}

}  // namespace smart_turtle_interface

#endif  // SMART_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_COMMAND__BUILDER_HPP_
