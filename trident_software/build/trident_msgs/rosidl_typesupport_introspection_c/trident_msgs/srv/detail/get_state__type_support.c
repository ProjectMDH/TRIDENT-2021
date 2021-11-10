// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from trident_msgs:srv/GetState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "trident_msgs/srv/detail/get_state__rosidl_typesupport_introspection_c.h"
#include "trident_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "trident_msgs/srv/detail/get_state__functions.h"
#include "trident_msgs/srv/detail/get_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetState_Request__rosidl_typesupport_introspection_c__GetState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  trident_msgs__srv__GetState_Request__init(message_memory);
}

void GetState_Request__rosidl_typesupport_introspection_c__GetState_Request_fini_function(void * message_memory)
{
  trident_msgs__srv__GetState_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetState_Request__rosidl_typesupport_introspection_c__GetState_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trident_msgs__srv__GetState_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetState_Request__rosidl_typesupport_introspection_c__GetState_Request_message_members = {
  "trident_msgs__srv",  // message namespace
  "GetState_Request",  // message name
  1,  // number of fields
  sizeof(trident_msgs__srv__GetState_Request),
  GetState_Request__rosidl_typesupport_introspection_c__GetState_Request_message_member_array,  // message members
  GetState_Request__rosidl_typesupport_introspection_c__GetState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetState_Request__rosidl_typesupport_introspection_c__GetState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetState_Request__rosidl_typesupport_introspection_c__GetState_Request_message_type_support_handle = {
  0,
  &GetState_Request__rosidl_typesupport_introspection_c__GetState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_trident_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trident_msgs, srv, GetState_Request)() {
  if (!GetState_Request__rosidl_typesupport_introspection_c__GetState_Request_message_type_support_handle.typesupport_identifier) {
    GetState_Request__rosidl_typesupport_introspection_c__GetState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetState_Request__rosidl_typesupport_introspection_c__GetState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "trident_msgs/srv/detail/get_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "trident_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "trident_msgs/srv/detail/get_state__functions.h"
// already included above
// #include "trident_msgs/srv/detail/get_state__struct.h"


// Include directives for member types
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetState_Response__rosidl_typesupport_introspection_c__GetState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  trident_msgs__srv__GetState_Response__init(message_memory);
}

void GetState_Response__rosidl_typesupport_introspection_c__GetState_Response_fini_function(void * message_memory)
{
  trident_msgs__srv__GetState_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetState_Response__rosidl_typesupport_introspection_c__GetState_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trident_msgs__srv__GetState_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trident_msgs__srv__GetState_Response, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trident_msgs__srv__GetState_Response, int_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetState_Response__rosidl_typesupport_introspection_c__GetState_Response_message_members = {
  "trident_msgs__srv",  // message namespace
  "GetState_Response",  // message name
  3,  // number of fields
  sizeof(trident_msgs__srv__GetState_Response),
  GetState_Response__rosidl_typesupport_introspection_c__GetState_Response_message_member_array,  // message members
  GetState_Response__rosidl_typesupport_introspection_c__GetState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetState_Response__rosidl_typesupport_introspection_c__GetState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetState_Response__rosidl_typesupport_introspection_c__GetState_Response_message_type_support_handle = {
  0,
  &GetState_Response__rosidl_typesupport_introspection_c__GetState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_trident_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trident_msgs, srv, GetState_Response)() {
  if (!GetState_Response__rosidl_typesupport_introspection_c__GetState_Response_message_type_support_handle.typesupport_identifier) {
    GetState_Response__rosidl_typesupport_introspection_c__GetState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetState_Response__rosidl_typesupport_introspection_c__GetState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "trident_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "trident_msgs/srv/detail/get_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers trident_msgs__srv__detail__get_state__rosidl_typesupport_introspection_c__GetState_service_members = {
  "trident_msgs__srv",  // service namespace
  "GetState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // trident_msgs__srv__detail__get_state__rosidl_typesupport_introspection_c__GetState_Request_message_type_support_handle,
  NULL  // response message
  // trident_msgs__srv__detail__get_state__rosidl_typesupport_introspection_c__GetState_Response_message_type_support_handle
};

static rosidl_service_type_support_t trident_msgs__srv__detail__get_state__rosidl_typesupport_introspection_c__GetState_service_type_support_handle = {
  0,
  &trident_msgs__srv__detail__get_state__rosidl_typesupport_introspection_c__GetState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trident_msgs, srv, GetState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trident_msgs, srv, GetState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_trident_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trident_msgs, srv, GetState)() {
  if (!trident_msgs__srv__detail__get_state__rosidl_typesupport_introspection_c__GetState_service_type_support_handle.typesupport_identifier) {
    trident_msgs__srv__detail__get_state__rosidl_typesupport_introspection_c__GetState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)trident_msgs__srv__detail__get_state__rosidl_typesupport_introspection_c__GetState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trident_msgs, srv, GetState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trident_msgs, srv, GetState_Response)()->data;
  }

  return &trident_msgs__srv__detail__get_state__rosidl_typesupport_introspection_c__GetState_service_type_support_handle;
}
