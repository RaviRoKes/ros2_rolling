// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from control_msgs:msg/JointTrajectoryControllerState.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/joint_trajectory_controller_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "control_msgs/msg/detail/joint_trajectory_controller_state__struct.h"
#include "control_msgs/msg/detail/joint_trajectory_controller_state__functions.h"
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

#include "rosidl_runtime_c/string.h"  // joint_names, multi_dof_joint_names
#include "rosidl_runtime_c/string_functions.h"  // joint_names, multi_dof_joint_names
#include "std_msgs/msg/detail/header__functions.h"  // header
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"  // error, feedback, output, reference
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__functions.h"  // multi_dof_error, multi_dof_feedback, multi_dof_output, multi_dof_reference

// forward declare type support functions

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

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_trajectory_msgs__msg__JointTrajectoryPoint(
  const trajectory_msgs__msg__JointTrajectoryPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_deserialize_trajectory_msgs__msg__JointTrajectoryPoint(
  eprosima::fastcdr::Cdr & cdr,
  trajectory_msgs__msg__JointTrajectoryPoint * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_key_trajectory_msgs__msg__JointTrajectoryPoint(
  const trajectory_msgs__msg__JointTrajectoryPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_key_trajectory_msgs__msg__JointTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_key_trajectory_msgs__msg__JointTrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
  const trajectory_msgs__msg__MultiDOFJointTrajectoryPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_deserialize_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
  eprosima::fastcdr::Cdr & cdr,
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
  const trajectory_msgs__msg__MultiDOFJointTrajectoryPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint)();


using _JointTrajectoryControllerState__ros_msg_type = control_msgs__msg__JointTrajectoryControllerState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
bool cdr_serialize_control_msgs__msg__JointTrajectoryControllerState(
  const control_msgs__msg__JointTrajectoryControllerState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: joint_names
  {
    size_t size = ros_message->joint_names.size;
    auto array_ptr = ros_message->joint_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: reference
  {
    cdr_serialize_trajectory_msgs__msg__JointTrajectoryPoint(
      &ros_message->reference, cdr);
  }

  // Field name: feedback
  {
    cdr_serialize_trajectory_msgs__msg__JointTrajectoryPoint(
      &ros_message->feedback, cdr);
  }

  // Field name: error
  {
    cdr_serialize_trajectory_msgs__msg__JointTrajectoryPoint(
      &ros_message->error, cdr);
  }

  // Field name: output
  {
    cdr_serialize_trajectory_msgs__msg__JointTrajectoryPoint(
      &ros_message->output, cdr);
  }

  // Field name: multi_dof_joint_names
  {
    size_t size = ros_message->multi_dof_joint_names.size;
    auto array_ptr = ros_message->multi_dof_joint_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: multi_dof_reference
  {
    cdr_serialize_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
      &ros_message->multi_dof_reference, cdr);
  }

  // Field name: multi_dof_feedback
  {
    cdr_serialize_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
      &ros_message->multi_dof_feedback, cdr);
  }

  // Field name: multi_dof_error
  {
    cdr_serialize_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
      &ros_message->multi_dof_error, cdr);
  }

  // Field name: multi_dof_output
  {
    cdr_serialize_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
      &ros_message->multi_dof_output, cdr);
  }

  // Field name: speed_scaling_factor
  {
    cdr << ros_message->speed_scaling_factor;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
bool cdr_deserialize_control_msgs__msg__JointTrajectoryControllerState(
  eprosima::fastcdr::Cdr & cdr,
  control_msgs__msg__JointTrajectoryControllerState * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: joint_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->joint_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->joint_names, size)) {
      fprintf(stderr, "failed to create array for field 'joint_names'");
      return false;
    }
    auto array_ptr = ros_message->joint_names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'joint_names'\n");
        return false;
      }
    }
  }

  // Field name: reference
  {
    cdr_deserialize_trajectory_msgs__msg__JointTrajectoryPoint(cdr, &ros_message->reference);
  }

  // Field name: feedback
  {
    cdr_deserialize_trajectory_msgs__msg__JointTrajectoryPoint(cdr, &ros_message->feedback);
  }

  // Field name: error
  {
    cdr_deserialize_trajectory_msgs__msg__JointTrajectoryPoint(cdr, &ros_message->error);
  }

  // Field name: output
  {
    cdr_deserialize_trajectory_msgs__msg__JointTrajectoryPoint(cdr, &ros_message->output);
  }

  // Field name: multi_dof_joint_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->multi_dof_joint_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->multi_dof_joint_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->multi_dof_joint_names, size)) {
      fprintf(stderr, "failed to create array for field 'multi_dof_joint_names'");
      return false;
    }
    auto array_ptr = ros_message->multi_dof_joint_names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'multi_dof_joint_names'\n");
        return false;
      }
    }
  }

  // Field name: multi_dof_reference
  {
    cdr_deserialize_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(cdr, &ros_message->multi_dof_reference);
  }

  // Field name: multi_dof_feedback
  {
    cdr_deserialize_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(cdr, &ros_message->multi_dof_feedback);
  }

  // Field name: multi_dof_error
  {
    cdr_deserialize_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(cdr, &ros_message->multi_dof_error);
  }

  // Field name: multi_dof_output
  {
    cdr_deserialize_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(cdr, &ros_message->multi_dof_output);
  }

  // Field name: speed_scaling_factor
  {
    cdr >> ros_message->speed_scaling_factor;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t get_serialized_size_control_msgs__msg__JointTrajectoryControllerState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointTrajectoryControllerState__ros_msg_type * ros_message = static_cast<const _JointTrajectoryControllerState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: joint_names
  {
    size_t array_size = ros_message->joint_names.size;
    auto array_ptr = ros_message->joint_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: reference
  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->reference), current_alignment);

  // Field name: feedback
  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->feedback), current_alignment);

  // Field name: error
  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->error), current_alignment);

  // Field name: output
  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->output), current_alignment);

  // Field name: multi_dof_joint_names
  {
    size_t array_size = ros_message->multi_dof_joint_names.size;
    auto array_ptr = ros_message->multi_dof_joint_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: multi_dof_reference
  current_alignment += get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
    &(ros_message->multi_dof_reference), current_alignment);

  // Field name: multi_dof_feedback
  current_alignment += get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
    &(ros_message->multi_dof_feedback), current_alignment);

  // Field name: multi_dof_error
  current_alignment += get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
    &(ros_message->multi_dof_error), current_alignment);

  // Field name: multi_dof_output
  current_alignment += get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
    &(ros_message->multi_dof_output), current_alignment);

  // Field name: speed_scaling_factor
  {
    size_t item_size = sizeof(ros_message->speed_scaling_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t max_serialized_size_control_msgs__msg__JointTrajectoryControllerState(
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

  // Field name: joint_names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: reference
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: feedback
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: error
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: output
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: multi_dof_joint_names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: multi_dof_reference
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: multi_dof_feedback
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: multi_dof_error
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: multi_dof_output
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: speed_scaling_factor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = control_msgs__msg__JointTrajectoryControllerState;
    is_plain =
      (
      offsetof(DataType, speed_scaling_factor) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
bool cdr_serialize_key_control_msgs__msg__JointTrajectoryControllerState(
  const control_msgs__msg__JointTrajectoryControllerState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: joint_names
  {
    size_t size = ros_message->joint_names.size;
    auto array_ptr = ros_message->joint_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: reference
  {
    cdr_serialize_key_trajectory_msgs__msg__JointTrajectoryPoint(
      &ros_message->reference, cdr);
  }

  // Field name: feedback
  {
    cdr_serialize_key_trajectory_msgs__msg__JointTrajectoryPoint(
      &ros_message->feedback, cdr);
  }

  // Field name: error
  {
    cdr_serialize_key_trajectory_msgs__msg__JointTrajectoryPoint(
      &ros_message->error, cdr);
  }

  // Field name: output
  {
    cdr_serialize_key_trajectory_msgs__msg__JointTrajectoryPoint(
      &ros_message->output, cdr);
  }

  // Field name: multi_dof_joint_names
  {
    size_t size = ros_message->multi_dof_joint_names.size;
    auto array_ptr = ros_message->multi_dof_joint_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: multi_dof_reference
  {
    cdr_serialize_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
      &ros_message->multi_dof_reference, cdr);
  }

  // Field name: multi_dof_feedback
  {
    cdr_serialize_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
      &ros_message->multi_dof_feedback, cdr);
  }

  // Field name: multi_dof_error
  {
    cdr_serialize_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
      &ros_message->multi_dof_error, cdr);
  }

  // Field name: multi_dof_output
  {
    cdr_serialize_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
      &ros_message->multi_dof_output, cdr);
  }

  // Field name: speed_scaling_factor
  {
    cdr << ros_message->speed_scaling_factor;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t get_serialized_size_key_control_msgs__msg__JointTrajectoryControllerState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointTrajectoryControllerState__ros_msg_type * ros_message = static_cast<const _JointTrajectoryControllerState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: joint_names
  {
    size_t array_size = ros_message->joint_names.size;
    auto array_ptr = ros_message->joint_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: reference
  current_alignment += get_serialized_size_key_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->reference), current_alignment);

  // Field name: feedback
  current_alignment += get_serialized_size_key_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->feedback), current_alignment);

  // Field name: error
  current_alignment += get_serialized_size_key_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->error), current_alignment);

  // Field name: output
  current_alignment += get_serialized_size_key_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->output), current_alignment);

  // Field name: multi_dof_joint_names
  {
    size_t array_size = ros_message->multi_dof_joint_names.size;
    auto array_ptr = ros_message->multi_dof_joint_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: multi_dof_reference
  current_alignment += get_serialized_size_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
    &(ros_message->multi_dof_reference), current_alignment);

  // Field name: multi_dof_feedback
  current_alignment += get_serialized_size_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
    &(ros_message->multi_dof_feedback), current_alignment);

  // Field name: multi_dof_error
  current_alignment += get_serialized_size_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
    &(ros_message->multi_dof_error), current_alignment);

  // Field name: multi_dof_output
  current_alignment += get_serialized_size_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
    &(ros_message->multi_dof_output), current_alignment);

  // Field name: speed_scaling_factor
  {
    size_t item_size = sizeof(ros_message->speed_scaling_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t max_serialized_size_key_control_msgs__msg__JointTrajectoryControllerState(
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

  // Field name: joint_names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: reference
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_trajectory_msgs__msg__JointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: feedback
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_trajectory_msgs__msg__JointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: error
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_trajectory_msgs__msg__JointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: output
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_trajectory_msgs__msg__JointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: multi_dof_joint_names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: multi_dof_reference
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: multi_dof_feedback
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: multi_dof_error
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: multi_dof_output
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: speed_scaling_factor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = control_msgs__msg__JointTrajectoryControllerState;
    is_plain =
      (
      offsetof(DataType, speed_scaling_factor) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _JointTrajectoryControllerState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const control_msgs__msg__JointTrajectoryControllerState * ros_message = static_cast<const control_msgs__msg__JointTrajectoryControllerState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_control_msgs__msg__JointTrajectoryControllerState(ros_message, cdr);
}

static bool _JointTrajectoryControllerState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  control_msgs__msg__JointTrajectoryControllerState * ros_message = static_cast<control_msgs__msg__JointTrajectoryControllerState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_control_msgs__msg__JointTrajectoryControllerState(cdr, ros_message);
}

static uint32_t _JointTrajectoryControllerState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_control_msgs__msg__JointTrajectoryControllerState(
      untyped_ros_message, 0));
}

static size_t _JointTrajectoryControllerState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_control_msgs__msg__JointTrajectoryControllerState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointTrajectoryControllerState = {
  "control_msgs::msg",
  "JointTrajectoryControllerState",
  _JointTrajectoryControllerState__cdr_serialize,
  _JointTrajectoryControllerState__cdr_deserialize,
  _JointTrajectoryControllerState__get_serialized_size,
  _JointTrajectoryControllerState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _JointTrajectoryControllerState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointTrajectoryControllerState,
  get_message_typesupport_handle_function,
  &control_msgs__msg__JointTrajectoryControllerState__get_type_hash,
  &control_msgs__msg__JointTrajectoryControllerState__get_type_description,
  &control_msgs__msg__JointTrajectoryControllerState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, msg, JointTrajectoryControllerState)() {
  return &_JointTrajectoryControllerState__type_support;
}

#if defined(__cplusplus)
}
#endif