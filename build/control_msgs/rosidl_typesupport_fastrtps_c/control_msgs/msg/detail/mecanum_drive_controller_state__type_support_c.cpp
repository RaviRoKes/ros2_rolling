// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from control_msgs:msg/MecanumDriveControllerState.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/mecanum_drive_controller_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "control_msgs/msg/detail/mecanum_drive_controller_state__struct.h"
#include "control_msgs/msg/detail/mecanum_drive_controller_state__functions.h"
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

#include "geometry_msgs/msg/detail/twist__functions.h"  // reference_velocity
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_geometry_msgs__msg__Twist(
  const geometry_msgs__msg__Twist * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_deserialize_geometry_msgs__msg__Twist(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Twist * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_geometry_msgs__msg__Twist(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_key_geometry_msgs__msg__Twist(
  const geometry_msgs__msg__Twist * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Twist(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _MecanumDriveControllerState__ros_msg_type = control_msgs__msg__MecanumDriveControllerState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
bool cdr_serialize_control_msgs__msg__MecanumDriveControllerState(
  const control_msgs__msg__MecanumDriveControllerState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: front_left_wheel_velocity
  {
    cdr << ros_message->front_left_wheel_velocity;
  }

  // Field name: back_left_wheel_velocity
  {
    cdr << ros_message->back_left_wheel_velocity;
  }

  // Field name: back_right_wheel_velocity
  {
    cdr << ros_message->back_right_wheel_velocity;
  }

  // Field name: front_right_wheel_velocity
  {
    cdr << ros_message->front_right_wheel_velocity;
  }

  // Field name: reference_velocity
  {
    cdr_serialize_geometry_msgs__msg__Twist(
      &ros_message->reference_velocity, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
bool cdr_deserialize_control_msgs__msg__MecanumDriveControllerState(
  eprosima::fastcdr::Cdr & cdr,
  control_msgs__msg__MecanumDriveControllerState * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: front_left_wheel_velocity
  {
    cdr >> ros_message->front_left_wheel_velocity;
  }

  // Field name: back_left_wheel_velocity
  {
    cdr >> ros_message->back_left_wheel_velocity;
  }

  // Field name: back_right_wheel_velocity
  {
    cdr >> ros_message->back_right_wheel_velocity;
  }

  // Field name: front_right_wheel_velocity
  {
    cdr >> ros_message->front_right_wheel_velocity;
  }

  // Field name: reference_velocity
  {
    cdr_deserialize_geometry_msgs__msg__Twist(cdr, &ros_message->reference_velocity);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t get_serialized_size_control_msgs__msg__MecanumDriveControllerState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MecanumDriveControllerState__ros_msg_type * ros_message = static_cast<const _MecanumDriveControllerState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: front_left_wheel_velocity
  {
    size_t item_size = sizeof(ros_message->front_left_wheel_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: back_left_wheel_velocity
  {
    size_t item_size = sizeof(ros_message->back_left_wheel_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: back_right_wheel_velocity
  {
    size_t item_size = sizeof(ros_message->back_right_wheel_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: front_right_wheel_velocity
  {
    size_t item_size = sizeof(ros_message->front_right_wheel_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reference_velocity
  current_alignment += get_serialized_size_geometry_msgs__msg__Twist(
    &(ros_message->reference_velocity), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t max_serialized_size_control_msgs__msg__MecanumDriveControllerState(
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

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: front_left_wheel_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: back_left_wheel_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: back_right_wheel_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: front_right_wheel_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: reference_velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Twist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = control_msgs__msg__MecanumDriveControllerState;
    is_plain =
      (
      offsetof(DataType, reference_velocity) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
bool cdr_serialize_key_control_msgs__msg__MecanumDriveControllerState(
  const control_msgs__msg__MecanumDriveControllerState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: front_left_wheel_velocity
  {
    cdr << ros_message->front_left_wheel_velocity;
  }

  // Field name: back_left_wheel_velocity
  {
    cdr << ros_message->back_left_wheel_velocity;
  }

  // Field name: back_right_wheel_velocity
  {
    cdr << ros_message->back_right_wheel_velocity;
  }

  // Field name: front_right_wheel_velocity
  {
    cdr << ros_message->front_right_wheel_velocity;
  }

  // Field name: reference_velocity
  {
    cdr_serialize_key_geometry_msgs__msg__Twist(
      &ros_message->reference_velocity, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t get_serialized_size_key_control_msgs__msg__MecanumDriveControllerState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MecanumDriveControllerState__ros_msg_type * ros_message = static_cast<const _MecanumDriveControllerState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: front_left_wheel_velocity
  {
    size_t item_size = sizeof(ros_message->front_left_wheel_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: back_left_wheel_velocity
  {
    size_t item_size = sizeof(ros_message->back_left_wheel_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: back_right_wheel_velocity
  {
    size_t item_size = sizeof(ros_message->back_right_wheel_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: front_right_wheel_velocity
  {
    size_t item_size = sizeof(ros_message->front_right_wheel_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reference_velocity
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Twist(
    &(ros_message->reference_velocity), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t max_serialized_size_key_control_msgs__msg__MecanumDriveControllerState(
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
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: front_left_wheel_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: back_left_wheel_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: back_right_wheel_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: front_right_wheel_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: reference_velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Twist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = control_msgs__msg__MecanumDriveControllerState;
    is_plain =
      (
      offsetof(DataType, reference_velocity) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MecanumDriveControllerState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const control_msgs__msg__MecanumDriveControllerState * ros_message = static_cast<const control_msgs__msg__MecanumDriveControllerState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_control_msgs__msg__MecanumDriveControllerState(ros_message, cdr);
}

static bool _MecanumDriveControllerState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  control_msgs__msg__MecanumDriveControllerState * ros_message = static_cast<control_msgs__msg__MecanumDriveControllerState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_control_msgs__msg__MecanumDriveControllerState(cdr, ros_message);
}

static uint32_t _MecanumDriveControllerState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_control_msgs__msg__MecanumDriveControllerState(
      untyped_ros_message, 0));
}

static size_t _MecanumDriveControllerState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_control_msgs__msg__MecanumDriveControllerState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MecanumDriveControllerState = {
  "control_msgs::msg",
  "MecanumDriveControllerState",
  _MecanumDriveControllerState__cdr_serialize,
  _MecanumDriveControllerState__cdr_deserialize,
  _MecanumDriveControllerState__get_serialized_size,
  _MecanumDriveControllerState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MecanumDriveControllerState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MecanumDriveControllerState,
  get_message_typesupport_handle_function,
  &control_msgs__msg__MecanumDriveControllerState__get_type_hash,
  &control_msgs__msg__MecanumDriveControllerState__get_type_description,
  &control_msgs__msg__MecanumDriveControllerState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, msg, MecanumDriveControllerState)() {
  return &_MecanumDriveControllerState__type_support;
}

#if defined(__cplusplus)
}
#endif
