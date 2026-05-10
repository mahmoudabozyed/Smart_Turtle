// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smart_turtle_interface:msg/TurtleCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "smart_turtle_interface/msg/turtle_command.hpp"


#ifndef SMART_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_COMMAND__TRAITS_HPP_
#define SMART_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smart_turtle_interface/msg/detail/turtle_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace smart_turtle_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const TurtleCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: pattern
  {
    out << "pattern: ";
    rosidl_generator_traits::value_to_yaml(msg.pattern, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pattern
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pattern: ";
    rosidl_generator_traits::value_to_yaml(msg.pattern, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleCommand & msg, bool use_flow_style = false)
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

}  // namespace smart_turtle_interface

namespace rosidl_generator_traits
{

[[deprecated("use smart_turtle_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const smart_turtle_interface::msg::TurtleCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  smart_turtle_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smart_turtle_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const smart_turtle_interface::msg::TurtleCommand & msg)
{
  return smart_turtle_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<smart_turtle_interface::msg::TurtleCommand>()
{
  return "smart_turtle_interface::msg::TurtleCommand";
}

template<>
inline const char * name<smart_turtle_interface::msg::TurtleCommand>()
{
  return "smart_turtle_interface/msg/TurtleCommand";
}

template<>
struct has_fixed_size<smart_turtle_interface::msg::TurtleCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smart_turtle_interface::msg::TurtleCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smart_turtle_interface::msg::TurtleCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SMART_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_COMMAND__TRAITS_HPP_
