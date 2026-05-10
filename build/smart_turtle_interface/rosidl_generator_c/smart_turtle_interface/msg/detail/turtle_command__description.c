// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from smart_turtle_interface:msg/TurtleCommand.idl
// generated code does not contain a copyright notice

#include "smart_turtle_interface/msg/detail/turtle_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_smart_turtle_interface
const rosidl_type_hash_t *
smart_turtle_interface__msg__TurtleCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa8, 0x8b, 0xaf, 0x4c, 0x6f, 0xdf, 0x31, 0x16,
      0x3f, 0x4a, 0x5c, 0x92, 0x06, 0xb7, 0x49, 0x4d,
      0xb8, 0xdc, 0xe3, 0xf5, 0xae, 0xbf, 0x92, 0x9d,
      0xf2, 0x68, 0x50, 0xb7, 0x1a, 0xc0, 0xc5, 0xf0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char smart_turtle_interface__msg__TurtleCommand__TYPE_NAME[] = "smart_turtle_interface/msg/TurtleCommand";

// Define type names, field names, and default values
static char smart_turtle_interface__msg__TurtleCommand__FIELD_NAME__pattern[] = "pattern";
static char smart_turtle_interface__msg__TurtleCommand__FIELD_NAME__speed[] = "speed";

static rosidl_runtime_c__type_description__Field smart_turtle_interface__msg__TurtleCommand__FIELDS[] = {
  {
    {smart_turtle_interface__msg__TurtleCommand__FIELD_NAME__pattern, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {smart_turtle_interface__msg__TurtleCommand__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
smart_turtle_interface__msg__TurtleCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {smart_turtle_interface__msg__TurtleCommand__TYPE_NAME, 40, 40},
      {smart_turtle_interface__msg__TurtleCommand__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Custom command message for controlling turtle movement\n"
  "\n"
  "# Defines the type of motion pattern\n"
  "# Examples: \"circle\", \"square\", \"spiral\", \"stop\"\n"
  "string pattern\n"
  "\n"
  "# Defines the linear/angular speed of movement\n"
  "float32 speed";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
smart_turtle_interface__msg__TurtleCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {smart_turtle_interface__msg__TurtleCommand__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 220, 220},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
smart_turtle_interface__msg__TurtleCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *smart_turtle_interface__msg__TurtleCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
