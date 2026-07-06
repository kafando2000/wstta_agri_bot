// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/CustomMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/custom_message.h"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'mystring'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CustomMessage in the package custom_interfaces.
/**
  * data type
 */
typedef struct custom_interfaces__msg__CustomMessage
{
  rosidl_runtime_c__String mystring;
  int32_t myint;
} custom_interfaces__msg__CustomMessage;

// Struct for a sequence of custom_interfaces__msg__CustomMessage.
typedef struct custom_interfaces__msg__CustomMessage__Sequence
{
  custom_interfaces__msg__CustomMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__CustomMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_
