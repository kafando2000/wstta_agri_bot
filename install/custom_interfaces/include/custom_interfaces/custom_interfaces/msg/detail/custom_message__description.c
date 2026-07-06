// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/custom_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__CustomMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc8, 0x12, 0xa3, 0x93, 0xa2, 0x7b, 0xbf, 0x24,
      0x40, 0xfd, 0xb6, 0xe6, 0x1f, 0xb0, 0xd8, 0xc9,
      0x93, 0x42, 0x58, 0x08, 0x52, 0x8b, 0x93, 0xa0,
      0x40, 0x89, 0x7f, 0xa3, 0x20, 0x53, 0x26, 0xa1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__CustomMessage__TYPE_NAME[] = "custom_interfaces/msg/CustomMessage";

// Define type names, field names, and default values
static char custom_interfaces__msg__CustomMessage__FIELD_NAME__mystring[] = "mystring";
static char custom_interfaces__msg__CustomMessage__FIELD_NAME__myint[] = "myint";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__CustomMessage__FIELDS[] = {
  {
    {custom_interfaces__msg__CustomMessage__FIELD_NAME__mystring, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__CustomMessage__FIELD_NAME__myint, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interfaces__msg__CustomMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__CustomMessage__TYPE_NAME, 35, 35},
      {custom_interfaces__msg__CustomMessage__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# data type\n"
  "\n"
  "string mystring\n"
  "\n"
  "int32 myint";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__CustomMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__CustomMessage__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 41, 41},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__CustomMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__CustomMessage__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
