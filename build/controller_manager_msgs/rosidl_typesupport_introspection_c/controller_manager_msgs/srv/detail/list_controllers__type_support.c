// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from controller_manager_msgs:srv/ListControllers.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "controller_manager_msgs/srv/detail/list_controllers__rosidl_typesupport_introspection_c.h"
#include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "controller_manager_msgs/srv/detail/list_controllers__functions.h"
#include "controller_manager_msgs/srv/detail/list_controllers__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void controller_manager_msgs__srv__ListControllers_Request__rosidl_typesupport_introspection_c__ListControllers_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_manager_msgs__srv__ListControllers_Request__init(message_memory);
}

void controller_manager_msgs__srv__ListControllers_Request__rosidl_typesupport_introspection_c__ListControllers_Request_fini_function(void * message_memory)
{
  controller_manager_msgs__srv__ListControllers_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember controller_manager_msgs__srv__ListControllers_Request__rosidl_typesupport_introspection_c__ListControllers_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__ListControllers_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controller_manager_msgs__srv__ListControllers_Request__rosidl_typesupport_introspection_c__ListControllers_Request_message_members = {
  "controller_manager_msgs__srv",  // message namespace
  "ListControllers_Request",  // message name
  1,  // number of fields
  sizeof(controller_manager_msgs__srv__ListControllers_Request),
  false,  // has_any_key_member_
  controller_manager_msgs__srv__ListControllers_Request__rosidl_typesupport_introspection_c__ListControllers_Request_message_member_array,  // message members
  controller_manager_msgs__srv__ListControllers_Request__rosidl_typesupport_introspection_c__ListControllers_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  controller_manager_msgs__srv__ListControllers_Request__rosidl_typesupport_introspection_c__ListControllers_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controller_manager_msgs__srv__ListControllers_Request__rosidl_typesupport_introspection_c__ListControllers_Request_message_type_support_handle = {
  0,
  &controller_manager_msgs__srv__ListControllers_Request__rosidl_typesupport_introspection_c__ListControllers_Request_message_members,
  get_message_typesupport_handle_function,
  &controller_manager_msgs__srv__ListControllers_Request__get_type_hash,
  &controller_manager_msgs__srv__ListControllers_Request__get_type_description,
  &controller_manager_msgs__srv__ListControllers_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllers_Request)() {
  if (!controller_manager_msgs__srv__ListControllers_Request__rosidl_typesupport_introspection_c__ListControllers_Request_message_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__srv__ListControllers_Request__rosidl_typesupport_introspection_c__ListControllers_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controller_manager_msgs__srv__ListControllers_Request__rosidl_typesupport_introspection_c__ListControllers_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "controller_manager_msgs/srv/detail/list_controllers__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_controllers__functions.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_controllers__struct.h"


// Include directives for member types
// Member `controller`
#include "controller_manager_msgs/msg/controller_state.h"
// Member `controller`
#include "controller_manager_msgs/msg/detail/controller_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__ListControllers_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_manager_msgs__srv__ListControllers_Response__init(message_memory);
}

void controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__ListControllers_Response_fini_function(void * message_memory)
{
  controller_manager_msgs__srv__ListControllers_Response__fini(message_memory);
}

size_t controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__size_function__ListControllers_Response__controller(
  const void * untyped_member)
{
  const controller_manager_msgs__msg__ControllerState__Sequence * member =
    (const controller_manager_msgs__msg__ControllerState__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__get_const_function__ListControllers_Response__controller(
  const void * untyped_member, size_t index)
{
  const controller_manager_msgs__msg__ControllerState__Sequence * member =
    (const controller_manager_msgs__msg__ControllerState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__get_function__ListControllers_Response__controller(
  void * untyped_member, size_t index)
{
  controller_manager_msgs__msg__ControllerState__Sequence * member =
    (controller_manager_msgs__msg__ControllerState__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__fetch_function__ListControllers_Response__controller(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const controller_manager_msgs__msg__ControllerState * item =
    ((const controller_manager_msgs__msg__ControllerState *)
    controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__get_const_function__ListControllers_Response__controller(untyped_member, index));
  controller_manager_msgs__msg__ControllerState * value =
    (controller_manager_msgs__msg__ControllerState *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__assign_function__ListControllers_Response__controller(
  void * untyped_member, size_t index, const void * untyped_value)
{
  controller_manager_msgs__msg__ControllerState * item =
    ((controller_manager_msgs__msg__ControllerState *)
    controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__get_function__ListControllers_Response__controller(untyped_member, index));
  const controller_manager_msgs__msg__ControllerState * value =
    (const controller_manager_msgs__msg__ControllerState *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__resize_function__ListControllers_Response__controller(
  void * untyped_member, size_t size)
{
  controller_manager_msgs__msg__ControllerState__Sequence * member =
    (controller_manager_msgs__msg__ControllerState__Sequence *)(untyped_member);
  controller_manager_msgs__msg__ControllerState__Sequence__fini(member);
  return controller_manager_msgs__msg__ControllerState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__ListControllers_Response_message_member_array[1] = {
  {
    "controller",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__ListControllers_Response, controller),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__size_function__ListControllers_Response__controller,  // size() function pointer
    controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__get_const_function__ListControllers_Response__controller,  // get_const(index) function pointer
    controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__get_function__ListControllers_Response__controller,  // get(index) function pointer
    controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__fetch_function__ListControllers_Response__controller,  // fetch(index, &value) function pointer
    controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__assign_function__ListControllers_Response__controller,  // assign(index, value) function pointer
    controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__resize_function__ListControllers_Response__controller  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__ListControllers_Response_message_members = {
  "controller_manager_msgs__srv",  // message namespace
  "ListControllers_Response",  // message name
  1,  // number of fields
  sizeof(controller_manager_msgs__srv__ListControllers_Response),
  false,  // has_any_key_member_
  controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__ListControllers_Response_message_member_array,  // message members
  controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__ListControllers_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__ListControllers_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__ListControllers_Response_message_type_support_handle = {
  0,
  &controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__ListControllers_Response_message_members,
  get_message_typesupport_handle_function,
  &controller_manager_msgs__srv__ListControllers_Response__get_type_hash,
  &controller_manager_msgs__srv__ListControllers_Response__get_type_description,
  &controller_manager_msgs__srv__ListControllers_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllers_Response)() {
  controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__ListControllers_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, msg, ControllerState)();
  if (!controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__ListControllers_Response_message_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__ListControllers_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__ListControllers_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "controller_manager_msgs/srv/detail/list_controllers__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_controllers__functions.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_controllers__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "controller_manager_msgs/srv/list_controllers.h"
// Member `request`
// Member `response`
// already included above
// #include "controller_manager_msgs/srv/detail/list_controllers__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__ListControllers_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_manager_msgs__srv__ListControllers_Event__init(message_memory);
}

void controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__ListControllers_Event_fini_function(void * message_memory)
{
  controller_manager_msgs__srv__ListControllers_Event__fini(message_memory);
}

size_t controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__size_function__ListControllers_Event__request(
  const void * untyped_member)
{
  const controller_manager_msgs__srv__ListControllers_Request__Sequence * member =
    (const controller_manager_msgs__srv__ListControllers_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__get_const_function__ListControllers_Event__request(
  const void * untyped_member, size_t index)
{
  const controller_manager_msgs__srv__ListControllers_Request__Sequence * member =
    (const controller_manager_msgs__srv__ListControllers_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__get_function__ListControllers_Event__request(
  void * untyped_member, size_t index)
{
  controller_manager_msgs__srv__ListControllers_Request__Sequence * member =
    (controller_manager_msgs__srv__ListControllers_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__fetch_function__ListControllers_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const controller_manager_msgs__srv__ListControllers_Request * item =
    ((const controller_manager_msgs__srv__ListControllers_Request *)
    controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__get_const_function__ListControllers_Event__request(untyped_member, index));
  controller_manager_msgs__srv__ListControllers_Request * value =
    (controller_manager_msgs__srv__ListControllers_Request *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__assign_function__ListControllers_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  controller_manager_msgs__srv__ListControllers_Request * item =
    ((controller_manager_msgs__srv__ListControllers_Request *)
    controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__get_function__ListControllers_Event__request(untyped_member, index));
  const controller_manager_msgs__srv__ListControllers_Request * value =
    (const controller_manager_msgs__srv__ListControllers_Request *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__resize_function__ListControllers_Event__request(
  void * untyped_member, size_t size)
{
  controller_manager_msgs__srv__ListControllers_Request__Sequence * member =
    (controller_manager_msgs__srv__ListControllers_Request__Sequence *)(untyped_member);
  controller_manager_msgs__srv__ListControllers_Request__Sequence__fini(member);
  return controller_manager_msgs__srv__ListControllers_Request__Sequence__init(member, size);
}

size_t controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__size_function__ListControllers_Event__response(
  const void * untyped_member)
{
  const controller_manager_msgs__srv__ListControllers_Response__Sequence * member =
    (const controller_manager_msgs__srv__ListControllers_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__get_const_function__ListControllers_Event__response(
  const void * untyped_member, size_t index)
{
  const controller_manager_msgs__srv__ListControllers_Response__Sequence * member =
    (const controller_manager_msgs__srv__ListControllers_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__get_function__ListControllers_Event__response(
  void * untyped_member, size_t index)
{
  controller_manager_msgs__srv__ListControllers_Response__Sequence * member =
    (controller_manager_msgs__srv__ListControllers_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__fetch_function__ListControllers_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const controller_manager_msgs__srv__ListControllers_Response * item =
    ((const controller_manager_msgs__srv__ListControllers_Response *)
    controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__get_const_function__ListControllers_Event__response(untyped_member, index));
  controller_manager_msgs__srv__ListControllers_Response * value =
    (controller_manager_msgs__srv__ListControllers_Response *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__assign_function__ListControllers_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  controller_manager_msgs__srv__ListControllers_Response * item =
    ((controller_manager_msgs__srv__ListControllers_Response *)
    controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__get_function__ListControllers_Event__response(untyped_member, index));
  const controller_manager_msgs__srv__ListControllers_Response * value =
    (const controller_manager_msgs__srv__ListControllers_Response *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__resize_function__ListControllers_Event__response(
  void * untyped_member, size_t size)
{
  controller_manager_msgs__srv__ListControllers_Response__Sequence * member =
    (controller_manager_msgs__srv__ListControllers_Response__Sequence *)(untyped_member);
  controller_manager_msgs__srv__ListControllers_Response__Sequence__fini(member);
  return controller_manager_msgs__srv__ListControllers_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__ListControllers_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__ListControllers_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(controller_manager_msgs__srv__ListControllers_Event, request),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__size_function__ListControllers_Event__request,  // size() function pointer
    controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__get_const_function__ListControllers_Event__request,  // get_const(index) function pointer
    controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__get_function__ListControllers_Event__request,  // get(index) function pointer
    controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__fetch_function__ListControllers_Event__request,  // fetch(index, &value) function pointer
    controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__assign_function__ListControllers_Event__request,  // assign(index, value) function pointer
    controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__resize_function__ListControllers_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(controller_manager_msgs__srv__ListControllers_Event, response),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__size_function__ListControllers_Event__response,  // size() function pointer
    controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__get_const_function__ListControllers_Event__response,  // get_const(index) function pointer
    controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__get_function__ListControllers_Event__response,  // get(index) function pointer
    controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__fetch_function__ListControllers_Event__response,  // fetch(index, &value) function pointer
    controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__assign_function__ListControllers_Event__response,  // assign(index, value) function pointer
    controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__resize_function__ListControllers_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__ListControllers_Event_message_members = {
  "controller_manager_msgs__srv",  // message namespace
  "ListControllers_Event",  // message name
  3,  // number of fields
  sizeof(controller_manager_msgs__srv__ListControllers_Event),
  false,  // has_any_key_member_
  controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__ListControllers_Event_message_member_array,  // message members
  controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__ListControllers_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__ListControllers_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__ListControllers_Event_message_type_support_handle = {
  0,
  &controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__ListControllers_Event_message_members,
  get_message_typesupport_handle_function,
  &controller_manager_msgs__srv__ListControllers_Event__get_type_hash,
  &controller_manager_msgs__srv__ListControllers_Event__get_type_description,
  &controller_manager_msgs__srv__ListControllers_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllers_Event)() {
  controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__ListControllers_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__ListControllers_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllers_Request)();
  controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__ListControllers_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllers_Response)();
  if (!controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__ListControllers_Event_message_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__ListControllers_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__ListControllers_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_controllers__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers controller_manager_msgs__srv__detail__list_controllers__rosidl_typesupport_introspection_c__ListControllers_service_members = {
  "controller_manager_msgs__srv",  // service namespace
  "ListControllers",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // controller_manager_msgs__srv__detail__list_controllers__rosidl_typesupport_introspection_c__ListControllers_Request_message_type_support_handle,
  NULL,  // response message
  // controller_manager_msgs__srv__detail__list_controllers__rosidl_typesupport_introspection_c__ListControllers_Response_message_type_support_handle
  NULL  // event_message
  // controller_manager_msgs__srv__detail__list_controllers__rosidl_typesupport_introspection_c__ListControllers_Response_message_type_support_handle
};


static rosidl_service_type_support_t controller_manager_msgs__srv__detail__list_controllers__rosidl_typesupport_introspection_c__ListControllers_service_type_support_handle = {
  0,
  &controller_manager_msgs__srv__detail__list_controllers__rosidl_typesupport_introspection_c__ListControllers_service_members,
  get_service_typesupport_handle_function,
  &controller_manager_msgs__srv__ListControllers_Request__rosidl_typesupport_introspection_c__ListControllers_Request_message_type_support_handle,
  &controller_manager_msgs__srv__ListControllers_Response__rosidl_typesupport_introspection_c__ListControllers_Response_message_type_support_handle,
  &controller_manager_msgs__srv__ListControllers_Event__rosidl_typesupport_introspection_c__ListControllers_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    controller_manager_msgs,
    srv,
    ListControllers
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    controller_manager_msgs,
    srv,
    ListControllers
  ),
  &controller_manager_msgs__srv__ListControllers__get_type_hash,
  &controller_manager_msgs__srv__ListControllers__get_type_description,
  &controller_manager_msgs__srv__ListControllers__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllers_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllers_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllers_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllers)(void) {
  if (!controller_manager_msgs__srv__detail__list_controllers__rosidl_typesupport_introspection_c__ListControllers_service_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__srv__detail__list_controllers__rosidl_typesupport_introspection_c__ListControllers_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)controller_manager_msgs__srv__detail__list_controllers__rosidl_typesupport_introspection_c__ListControllers_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllers_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllers_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllers_Event)()->data;
  }

  return &controller_manager_msgs__srv__detail__list_controllers__rosidl_typesupport_introspection_c__ListControllers_service_type_support_handle;
}