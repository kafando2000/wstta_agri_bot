// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:action/ReachLocation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/action/reach_location.h"


#ifndef CUSTOM_INTERFACES__ACTION__DETAIL__REACH_LOCATION__STRUCT_H_
#define CUSTOM_INTERFACES__ACTION__DETAIL__REACH_LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ReachLocation in the package custom_interfaces.
typedef struct custom_interfaces__action__ReachLocation_Goal
{
  float x;
  float y;
  float timeout;
} custom_interfaces__action__ReachLocation_Goal;

// Struct for a sequence of custom_interfaces__action__ReachLocation_Goal.
typedef struct custom_interfaces__action__ReachLocation_Goal__Sequence
{
  custom_interfaces__action__ReachLocation_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__ReachLocation_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ReachLocation in the package custom_interfaces.
typedef struct custom_interfaces__action__ReachLocation_Result
{
  bool success;
  rosidl_runtime_c__String message;
} custom_interfaces__action__ReachLocation_Result;

// Struct for a sequence of custom_interfaces__action__ReachLocation_Result.
typedef struct custom_interfaces__action__ReachLocation_Result__Sequence
{
  custom_interfaces__action__ReachLocation_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__ReachLocation_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/ReachLocation in the package custom_interfaces.
typedef struct custom_interfaces__action__ReachLocation_Feedback
{
  float current_x;
  float current_y;
} custom_interfaces__action__ReachLocation_Feedback;

// Struct for a sequence of custom_interfaces__action__ReachLocation_Feedback.
typedef struct custom_interfaces__action__ReachLocation_Feedback__Sequence
{
  custom_interfaces__action__ReachLocation_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__ReachLocation_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "custom_interfaces/action/detail/reach_location__struct.h"

/// Struct defined in action/ReachLocation in the package custom_interfaces.
typedef struct custom_interfaces__action__ReachLocation_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  custom_interfaces__action__ReachLocation_Goal goal;
} custom_interfaces__action__ReachLocation_SendGoal_Request;

// Struct for a sequence of custom_interfaces__action__ReachLocation_SendGoal_Request.
typedef struct custom_interfaces__action__ReachLocation_SendGoal_Request__Sequence
{
  custom_interfaces__action__ReachLocation_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__ReachLocation_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ReachLocation in the package custom_interfaces.
typedef struct custom_interfaces__action__ReachLocation_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} custom_interfaces__action__ReachLocation_SendGoal_Response;

// Struct for a sequence of custom_interfaces__action__ReachLocation_SendGoal_Response.
typedef struct custom_interfaces__action__ReachLocation_SendGoal_Response__Sequence
{
  custom_interfaces__action__ReachLocation_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__ReachLocation_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  custom_interfaces__action__ReachLocation_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  custom_interfaces__action__ReachLocation_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ReachLocation in the package custom_interfaces.
typedef struct custom_interfaces__action__ReachLocation_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  custom_interfaces__action__ReachLocation_SendGoal_Request__Sequence request;
  custom_interfaces__action__ReachLocation_SendGoal_Response__Sequence response;
} custom_interfaces__action__ReachLocation_SendGoal_Event;

// Struct for a sequence of custom_interfaces__action__ReachLocation_SendGoal_Event.
typedef struct custom_interfaces__action__ReachLocation_SendGoal_Event__Sequence
{
  custom_interfaces__action__ReachLocation_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__ReachLocation_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ReachLocation in the package custom_interfaces.
typedef struct custom_interfaces__action__ReachLocation_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} custom_interfaces__action__ReachLocation_GetResult_Request;

// Struct for a sequence of custom_interfaces__action__ReachLocation_GetResult_Request.
typedef struct custom_interfaces__action__ReachLocation_GetResult_Request__Sequence
{
  custom_interfaces__action__ReachLocation_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__ReachLocation_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "custom_interfaces/action/detail/reach_location__struct.h"

/// Struct defined in action/ReachLocation in the package custom_interfaces.
typedef struct custom_interfaces__action__ReachLocation_GetResult_Response
{
  int8_t status;
  custom_interfaces__action__ReachLocation_Result result;
} custom_interfaces__action__ReachLocation_GetResult_Response;

// Struct for a sequence of custom_interfaces__action__ReachLocation_GetResult_Response.
typedef struct custom_interfaces__action__ReachLocation_GetResult_Response__Sequence
{
  custom_interfaces__action__ReachLocation_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__ReachLocation_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  custom_interfaces__action__ReachLocation_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  custom_interfaces__action__ReachLocation_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ReachLocation in the package custom_interfaces.
typedef struct custom_interfaces__action__ReachLocation_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  custom_interfaces__action__ReachLocation_GetResult_Request__Sequence request;
  custom_interfaces__action__ReachLocation_GetResult_Response__Sequence response;
} custom_interfaces__action__ReachLocation_GetResult_Event;

// Struct for a sequence of custom_interfaces__action__ReachLocation_GetResult_Event.
typedef struct custom_interfaces__action__ReachLocation_GetResult_Event__Sequence
{
  custom_interfaces__action__ReachLocation_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__ReachLocation_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "custom_interfaces/action/detail/reach_location__struct.h"

/// Struct defined in action/ReachLocation in the package custom_interfaces.
typedef struct custom_interfaces__action__ReachLocation_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  custom_interfaces__action__ReachLocation_Feedback feedback;
} custom_interfaces__action__ReachLocation_FeedbackMessage;

// Struct for a sequence of custom_interfaces__action__ReachLocation_FeedbackMessage.
typedef struct custom_interfaces__action__ReachLocation_FeedbackMessage__Sequence
{
  custom_interfaces__action__ReachLocation_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__ReachLocation_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__ACTION__DETAIL__REACH_LOCATION__STRUCT_H_
