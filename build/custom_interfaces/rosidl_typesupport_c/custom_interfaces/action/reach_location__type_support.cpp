// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from custom_interfaces:action/ReachLocation.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "custom_interfaces/action/detail/reach_location__struct.h"
#include "custom_interfaces/action/detail/reach_location__type_support.h"
#include "custom_interfaces/action/detail/reach_location__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachLocation_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachLocation_Goal_type_support_ids_t;

static const _ReachLocation_Goal_type_support_ids_t _ReachLocation_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachLocation_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachLocation_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachLocation_Goal_type_support_symbol_names_t _ReachLocation_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, ReachLocation_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, ReachLocation_Goal)),
  }
};

typedef struct _ReachLocation_Goal_type_support_data_t
{
  void * data[2];
} _ReachLocation_Goal_type_support_data_t;

static _ReachLocation_Goal_type_support_data_t _ReachLocation_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachLocation_Goal_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_ReachLocation_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_ReachLocation_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_ReachLocation_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachLocation_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachLocation_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_interfaces__action__ReachLocation_Goal__get_type_hash,
  &custom_interfaces__action__ReachLocation_Goal__get_type_description,
  &custom_interfaces__action__ReachLocation_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, ReachLocation_Goal)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::ReachLocation_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__type_support.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachLocation_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachLocation_Result_type_support_ids_t;

static const _ReachLocation_Result_type_support_ids_t _ReachLocation_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachLocation_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachLocation_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachLocation_Result_type_support_symbol_names_t _ReachLocation_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, ReachLocation_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, ReachLocation_Result)),
  }
};

typedef struct _ReachLocation_Result_type_support_data_t
{
  void * data[2];
} _ReachLocation_Result_type_support_data_t;

static _ReachLocation_Result_type_support_data_t _ReachLocation_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachLocation_Result_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_ReachLocation_Result_message_typesupport_ids.typesupport_identifier[0],
  &_ReachLocation_Result_message_typesupport_symbol_names.symbol_name[0],
  &_ReachLocation_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachLocation_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachLocation_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_interfaces__action__ReachLocation_Result__get_type_hash,
  &custom_interfaces__action__ReachLocation_Result__get_type_description,
  &custom_interfaces__action__ReachLocation_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, ReachLocation_Result)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::ReachLocation_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__type_support.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachLocation_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachLocation_Feedback_type_support_ids_t;

static const _ReachLocation_Feedback_type_support_ids_t _ReachLocation_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachLocation_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachLocation_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachLocation_Feedback_type_support_symbol_names_t _ReachLocation_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, ReachLocation_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, ReachLocation_Feedback)),
  }
};

typedef struct _ReachLocation_Feedback_type_support_data_t
{
  void * data[2];
} _ReachLocation_Feedback_type_support_data_t;

static _ReachLocation_Feedback_type_support_data_t _ReachLocation_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachLocation_Feedback_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_ReachLocation_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_ReachLocation_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_ReachLocation_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachLocation_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachLocation_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_interfaces__action__ReachLocation_Feedback__get_type_hash,
  &custom_interfaces__action__ReachLocation_Feedback__get_type_description,
  &custom_interfaces__action__ReachLocation_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, ReachLocation_Feedback)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::ReachLocation_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__type_support.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachLocation_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachLocation_SendGoal_Request_type_support_ids_t;

static const _ReachLocation_SendGoal_Request_type_support_ids_t _ReachLocation_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachLocation_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachLocation_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachLocation_SendGoal_Request_type_support_symbol_names_t _ReachLocation_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, ReachLocation_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, ReachLocation_SendGoal_Request)),
  }
};

typedef struct _ReachLocation_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _ReachLocation_SendGoal_Request_type_support_data_t;

static _ReachLocation_SendGoal_Request_type_support_data_t _ReachLocation_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachLocation_SendGoal_Request_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_ReachLocation_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ReachLocation_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ReachLocation_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachLocation_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachLocation_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_interfaces__action__ReachLocation_SendGoal_Request__get_type_hash,
  &custom_interfaces__action__ReachLocation_SendGoal_Request__get_type_description,
  &custom_interfaces__action__ReachLocation_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, ReachLocation_SendGoal_Request)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::ReachLocation_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__type_support.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachLocation_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachLocation_SendGoal_Response_type_support_ids_t;

static const _ReachLocation_SendGoal_Response_type_support_ids_t _ReachLocation_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachLocation_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachLocation_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachLocation_SendGoal_Response_type_support_symbol_names_t _ReachLocation_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, ReachLocation_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, ReachLocation_SendGoal_Response)),
  }
};

typedef struct _ReachLocation_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _ReachLocation_SendGoal_Response_type_support_data_t;

static _ReachLocation_SendGoal_Response_type_support_data_t _ReachLocation_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachLocation_SendGoal_Response_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_ReachLocation_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ReachLocation_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ReachLocation_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachLocation_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachLocation_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_interfaces__action__ReachLocation_SendGoal_Response__get_type_hash,
  &custom_interfaces__action__ReachLocation_SendGoal_Response__get_type_description,
  &custom_interfaces__action__ReachLocation_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, ReachLocation_SendGoal_Response)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::ReachLocation_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__type_support.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachLocation_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachLocation_SendGoal_Event_type_support_ids_t;

static const _ReachLocation_SendGoal_Event_type_support_ids_t _ReachLocation_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachLocation_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachLocation_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachLocation_SendGoal_Event_type_support_symbol_names_t _ReachLocation_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, ReachLocation_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, ReachLocation_SendGoal_Event)),
  }
};

typedef struct _ReachLocation_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _ReachLocation_SendGoal_Event_type_support_data_t;

static _ReachLocation_SendGoal_Event_type_support_data_t _ReachLocation_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachLocation_SendGoal_Event_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_ReachLocation_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ReachLocation_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ReachLocation_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachLocation_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachLocation_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_interfaces__action__ReachLocation_SendGoal_Event__get_type_hash,
  &custom_interfaces__action__ReachLocation_SendGoal_Event__get_type_description,
  &custom_interfaces__action__ReachLocation_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, ReachLocation_SendGoal_Event)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::ReachLocation_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _ReachLocation_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachLocation_SendGoal_type_support_ids_t;

static const _ReachLocation_SendGoal_type_support_ids_t _ReachLocation_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachLocation_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachLocation_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachLocation_SendGoal_type_support_symbol_names_t _ReachLocation_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, ReachLocation_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, ReachLocation_SendGoal)),
  }
};

typedef struct _ReachLocation_SendGoal_type_support_data_t
{
  void * data[2];
} _ReachLocation_SendGoal_type_support_data_t;

static _ReachLocation_SendGoal_type_support_data_t _ReachLocation_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachLocation_SendGoal_service_typesupport_map = {
  2,
  "custom_interfaces",
  &_ReachLocation_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_ReachLocation_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_ReachLocation_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ReachLocation_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachLocation_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ReachLocation_SendGoal_Request_message_type_support_handle,
  &ReachLocation_SendGoal_Response_message_type_support_handle,
  &ReachLocation_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    custom_interfaces,
    action,
    ReachLocation_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    custom_interfaces,
    action,
    ReachLocation_SendGoal
  ),
  &custom_interfaces__action__ReachLocation_SendGoal__get_type_hash,
  &custom_interfaces__action__ReachLocation_SendGoal__get_type_description,
  &custom_interfaces__action__ReachLocation_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, ReachLocation_SendGoal)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::ReachLocation_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__type_support.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachLocation_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachLocation_GetResult_Request_type_support_ids_t;

static const _ReachLocation_GetResult_Request_type_support_ids_t _ReachLocation_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachLocation_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachLocation_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachLocation_GetResult_Request_type_support_symbol_names_t _ReachLocation_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, ReachLocation_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, ReachLocation_GetResult_Request)),
  }
};

typedef struct _ReachLocation_GetResult_Request_type_support_data_t
{
  void * data[2];
} _ReachLocation_GetResult_Request_type_support_data_t;

static _ReachLocation_GetResult_Request_type_support_data_t _ReachLocation_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachLocation_GetResult_Request_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_ReachLocation_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ReachLocation_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ReachLocation_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachLocation_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachLocation_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_interfaces__action__ReachLocation_GetResult_Request__get_type_hash,
  &custom_interfaces__action__ReachLocation_GetResult_Request__get_type_description,
  &custom_interfaces__action__ReachLocation_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, ReachLocation_GetResult_Request)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::ReachLocation_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__type_support.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachLocation_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachLocation_GetResult_Response_type_support_ids_t;

static const _ReachLocation_GetResult_Response_type_support_ids_t _ReachLocation_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachLocation_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachLocation_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachLocation_GetResult_Response_type_support_symbol_names_t _ReachLocation_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, ReachLocation_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, ReachLocation_GetResult_Response)),
  }
};

typedef struct _ReachLocation_GetResult_Response_type_support_data_t
{
  void * data[2];
} _ReachLocation_GetResult_Response_type_support_data_t;

static _ReachLocation_GetResult_Response_type_support_data_t _ReachLocation_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachLocation_GetResult_Response_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_ReachLocation_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ReachLocation_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ReachLocation_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachLocation_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachLocation_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_interfaces__action__ReachLocation_GetResult_Response__get_type_hash,
  &custom_interfaces__action__ReachLocation_GetResult_Response__get_type_description,
  &custom_interfaces__action__ReachLocation_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, ReachLocation_GetResult_Response)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::ReachLocation_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__type_support.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachLocation_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachLocation_GetResult_Event_type_support_ids_t;

static const _ReachLocation_GetResult_Event_type_support_ids_t _ReachLocation_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachLocation_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachLocation_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachLocation_GetResult_Event_type_support_symbol_names_t _ReachLocation_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, ReachLocation_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, ReachLocation_GetResult_Event)),
  }
};

typedef struct _ReachLocation_GetResult_Event_type_support_data_t
{
  void * data[2];
} _ReachLocation_GetResult_Event_type_support_data_t;

static _ReachLocation_GetResult_Event_type_support_data_t _ReachLocation_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachLocation_GetResult_Event_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_ReachLocation_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ReachLocation_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ReachLocation_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachLocation_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachLocation_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_interfaces__action__ReachLocation_GetResult_Event__get_type_hash,
  &custom_interfaces__action__ReachLocation_GetResult_Event__get_type_description,
  &custom_interfaces__action__ReachLocation_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, ReachLocation_GetResult_Event)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::ReachLocation_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _ReachLocation_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachLocation_GetResult_type_support_ids_t;

static const _ReachLocation_GetResult_type_support_ids_t _ReachLocation_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachLocation_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachLocation_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachLocation_GetResult_type_support_symbol_names_t _ReachLocation_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, ReachLocation_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, ReachLocation_GetResult)),
  }
};

typedef struct _ReachLocation_GetResult_type_support_data_t
{
  void * data[2];
} _ReachLocation_GetResult_type_support_data_t;

static _ReachLocation_GetResult_type_support_data_t _ReachLocation_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachLocation_GetResult_service_typesupport_map = {
  2,
  "custom_interfaces",
  &_ReachLocation_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_ReachLocation_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_ReachLocation_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ReachLocation_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachLocation_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ReachLocation_GetResult_Request_message_type_support_handle,
  &ReachLocation_GetResult_Response_message_type_support_handle,
  &ReachLocation_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    custom_interfaces,
    action,
    ReachLocation_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    custom_interfaces,
    action,
    ReachLocation_GetResult
  ),
  &custom_interfaces__action__ReachLocation_GetResult__get_type_hash,
  &custom_interfaces__action__ReachLocation_GetResult__get_type_description,
  &custom_interfaces__action__ReachLocation_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, ReachLocation_GetResult)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::ReachLocation_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__struct.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__type_support.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachLocation_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachLocation_FeedbackMessage_type_support_ids_t;

static const _ReachLocation_FeedbackMessage_type_support_ids_t _ReachLocation_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachLocation_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachLocation_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachLocation_FeedbackMessage_type_support_symbol_names_t _ReachLocation_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, action, ReachLocation_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, ReachLocation_FeedbackMessage)),
  }
};

typedef struct _ReachLocation_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _ReachLocation_FeedbackMessage_type_support_data_t;

static _ReachLocation_FeedbackMessage_type_support_data_t _ReachLocation_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachLocation_FeedbackMessage_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_ReachLocation_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_ReachLocation_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_ReachLocation_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachLocation_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachLocation_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_interfaces__action__ReachLocation_FeedbackMessage__get_type_hash,
  &custom_interfaces__action__ReachLocation_FeedbackMessage__get_type_description,
  &custom_interfaces__action__ReachLocation_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, action, ReachLocation_FeedbackMessage)() {
  return &::custom_interfaces::action::rosidl_typesupport_c::ReachLocation_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "custom_interfaces/action/reach_location.h"
// already included above
// #include "custom_interfaces/action/detail/reach_location__type_support.h"

static rosidl_action_type_support_t _custom_interfaces__action__ReachLocation__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &custom_interfaces__action__ReachLocation__get_type_hash,
  &custom_interfaces__action__ReachLocation__get_type_description,
  &custom_interfaces__action__ReachLocation__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, custom_interfaces, action, ReachLocation)()
{
  // Thread-safe by always writing the same values to the static struct
  _custom_interfaces__action__ReachLocation__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, custom_interfaces, action, ReachLocation_SendGoal)();
  _custom_interfaces__action__ReachLocation__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, custom_interfaces, action, ReachLocation_GetResult)();
  _custom_interfaces__action__ReachLocation__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _custom_interfaces__action__ReachLocation__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, custom_interfaces, action, ReachLocation_FeedbackMessage)();
  _custom_interfaces__action__ReachLocation__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_custom_interfaces__action__ReachLocation__typesupport_c;
}

#ifdef __cplusplus
}
#endif
