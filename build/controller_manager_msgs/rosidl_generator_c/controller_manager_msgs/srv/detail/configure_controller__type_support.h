// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from controller_manager_msgs:srv/ConfigureController.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_manager_msgs/srv/configure_controller.h"


#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__CONFIGURE_CONTROLLER__TYPE_SUPPORT_H_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__CONFIGURE_CONTROLLER__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "controller_manager_msgs/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  controller_manager_msgs,
  srv,
  ConfigureController_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  controller_manager_msgs,
  srv,
  ConfigureController_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  controller_manager_msgs,
  srv,
  ConfigureController_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  controller_manager_msgs,
  srv,
  ConfigureController
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  controller_manager_msgs,
  srv,
  ConfigureController
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  controller_manager_msgs,
  srv,
  ConfigureController
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__CONFIGURE_CONTROLLER__TYPE_SUPPORT_H_