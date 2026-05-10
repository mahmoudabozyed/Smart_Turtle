// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smart_turtle_interface:msg/TurtleCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "smart_turtle_interface/msg/turtle_command.h"


#ifndef SMART_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_COMMAND__STRUCT_H_
#define SMART_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'pattern'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TurtleCommand in the package smart_turtle_interface.
/**
  * Custom command message for controlling turtle movement
 */
typedef struct smart_turtle_interface__msg__TurtleCommand
{
  /// Defines the type of motion pattern
  /// Examples: "circle", "square", "spiral", "stop"
  rosidl_runtime_c__String pattern;
  /// Defines the linear/angular speed of movement
  float speed;
} smart_turtle_interface__msg__TurtleCommand;

// Struct for a sequence of smart_turtle_interface__msg__TurtleCommand.
typedef struct smart_turtle_interface__msg__TurtleCommand__Sequence
{
  smart_turtle_interface__msg__TurtleCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smart_turtle_interface__msg__TurtleCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMART_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_COMMAND__STRUCT_H_
