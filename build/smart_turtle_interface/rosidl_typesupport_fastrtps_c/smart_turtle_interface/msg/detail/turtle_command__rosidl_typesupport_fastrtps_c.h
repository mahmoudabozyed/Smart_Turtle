// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from smart_turtle_interface:msg/TurtleCommand.idl
// generated code does not contain a copyright notice
#ifndef SMART_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define SMART_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "smart_turtle_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "smart_turtle_interface/msg/detail/turtle_command__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_turtle_interface
bool cdr_serialize_smart_turtle_interface__msg__TurtleCommand(
  const smart_turtle_interface__msg__TurtleCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_turtle_interface
bool cdr_deserialize_smart_turtle_interface__msg__TurtleCommand(
  eprosima::fastcdr::Cdr &,
  smart_turtle_interface__msg__TurtleCommand * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_turtle_interface
size_t get_serialized_size_smart_turtle_interface__msg__TurtleCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_turtle_interface
size_t max_serialized_size_smart_turtle_interface__msg__TurtleCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_turtle_interface
bool cdr_serialize_key_smart_turtle_interface__msg__TurtleCommand(
  const smart_turtle_interface__msg__TurtleCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_turtle_interface
size_t get_serialized_size_key_smart_turtle_interface__msg__TurtleCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_turtle_interface
size_t max_serialized_size_key_smart_turtle_interface__msg__TurtleCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_turtle_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, smart_turtle_interface, msg, TurtleCommand)();

#ifdef __cplusplus
}
#endif

#endif  // SMART_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
