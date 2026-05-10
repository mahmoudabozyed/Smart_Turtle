// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from smart_turtle_interface:msg/TurtleCommand.idl
// generated code does not contain a copyright notice
#include "smart_turtle_interface/msg/detail/turtle_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "smart_turtle_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "smart_turtle_interface/msg/detail/turtle_command__struct.h"
#include "smart_turtle_interface/msg/detail/turtle_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // pattern
#include "rosidl_runtime_c/string_functions.h"  // pattern

// forward declare type support functions


using _TurtleCommand__ros_msg_type = smart_turtle_interface__msg__TurtleCommand;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_turtle_interface
bool cdr_serialize_smart_turtle_interface__msg__TurtleCommand(
  const smart_turtle_interface__msg__TurtleCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: pattern
  {
    const rosidl_runtime_c__String * str = &ros_message->pattern;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_turtle_interface
bool cdr_deserialize_smart_turtle_interface__msg__TurtleCommand(
  eprosima::fastcdr::Cdr & cdr,
  smart_turtle_interface__msg__TurtleCommand * ros_message)
{
  // Field name: pattern
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->pattern.data) {
      rosidl_runtime_c__String__init(&ros_message->pattern);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->pattern,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'pattern'\n");
      return false;
    }
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_turtle_interface
size_t get_serialized_size_smart_turtle_interface__msg__TurtleCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TurtleCommand__ros_msg_type * ros_message = static_cast<const _TurtleCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: pattern
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pattern.size + 1);

  // Field name: speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_turtle_interface
size_t max_serialized_size_smart_turtle_interface__msg__TurtleCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: pattern
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = smart_turtle_interface__msg__TurtleCommand;
    is_plain =
      (
      offsetof(DataType, speed) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_turtle_interface
bool cdr_serialize_key_smart_turtle_interface__msg__TurtleCommand(
  const smart_turtle_interface__msg__TurtleCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: pattern
  {
    const rosidl_runtime_c__String * str = &ros_message->pattern;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_turtle_interface
size_t get_serialized_size_key_smart_turtle_interface__msg__TurtleCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TurtleCommand__ros_msg_type * ros_message = static_cast<const _TurtleCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: pattern
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pattern.size + 1);

  // Field name: speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_turtle_interface
size_t max_serialized_size_key_smart_turtle_interface__msg__TurtleCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: pattern
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = smart_turtle_interface__msg__TurtleCommand;
    is_plain =
      (
      offsetof(DataType, speed) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TurtleCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const smart_turtle_interface__msg__TurtleCommand * ros_message = static_cast<const smart_turtle_interface__msg__TurtleCommand *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_smart_turtle_interface__msg__TurtleCommand(ros_message, cdr);
}

static bool _TurtleCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  smart_turtle_interface__msg__TurtleCommand * ros_message = static_cast<smart_turtle_interface__msg__TurtleCommand *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_smart_turtle_interface__msg__TurtleCommand(cdr, ros_message);
}

static uint32_t _TurtleCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_smart_turtle_interface__msg__TurtleCommand(
      untyped_ros_message, 0));
}

static size_t _TurtleCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_smart_turtle_interface__msg__TurtleCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TurtleCommand = {
  "smart_turtle_interface::msg",
  "TurtleCommand",
  _TurtleCommand__cdr_serialize,
  _TurtleCommand__cdr_deserialize,
  _TurtleCommand__get_serialized_size,
  _TurtleCommand__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TurtleCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TurtleCommand,
  get_message_typesupport_handle_function,
  &smart_turtle_interface__msg__TurtleCommand__get_type_hash,
  &smart_turtle_interface__msg__TurtleCommand__get_type_description,
  &smart_turtle_interface__msg__TurtleCommand__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, smart_turtle_interface, msg, TurtleCommand)() {
  return &_TurtleCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
