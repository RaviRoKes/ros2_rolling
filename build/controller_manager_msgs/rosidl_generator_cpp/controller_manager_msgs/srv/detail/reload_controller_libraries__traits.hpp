// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:srv/ReloadControllerLibraries.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_manager_msgs/srv/reload_controller_libraries.hpp"


#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controller_manager_msgs/srv/detail/reload_controller_libraries__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace controller_manager_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReloadControllerLibraries_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: force_kill
  {
    out << "force_kill: ";
    rosidl_generator_traits::value_to_yaml(msg.force_kill, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReloadControllerLibraries_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: force_kill
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_kill: ";
    rosidl_generator_traits::value_to_yaml(msg.force_kill, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReloadControllerLibraries_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace controller_manager_msgs

namespace rosidl_generator_traits
{

[[deprecated("use controller_manager_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const controller_manager_msgs::srv::ReloadControllerLibraries_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_manager_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_manager_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const controller_manager_msgs::srv::ReloadControllerLibraries_Request & msg)
{
  return controller_manager_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<controller_manager_msgs::srv::ReloadControllerLibraries_Request>()
{
  return "controller_manager_msgs::srv::ReloadControllerLibraries_Request";
}

template<>
inline const char * name<controller_manager_msgs::srv::ReloadControllerLibraries_Request>()
{
  return "controller_manager_msgs/srv/ReloadControllerLibraries_Request";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ReloadControllerLibraries_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ReloadControllerLibraries_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_manager_msgs::srv::ReloadControllerLibraries_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace controller_manager_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReloadControllerLibraries_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ok
  {
    out << "ok: ";
    rosidl_generator_traits::value_to_yaml(msg.ok, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReloadControllerLibraries_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ok: ";
    rosidl_generator_traits::value_to_yaml(msg.ok, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReloadControllerLibraries_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace controller_manager_msgs

namespace rosidl_generator_traits
{

[[deprecated("use controller_manager_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const controller_manager_msgs::srv::ReloadControllerLibraries_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_manager_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_manager_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const controller_manager_msgs::srv::ReloadControllerLibraries_Response & msg)
{
  return controller_manager_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<controller_manager_msgs::srv::ReloadControllerLibraries_Response>()
{
  return "controller_manager_msgs::srv::ReloadControllerLibraries_Response";
}

template<>
inline const char * name<controller_manager_msgs::srv::ReloadControllerLibraries_Response>()
{
  return "controller_manager_msgs/srv/ReloadControllerLibraries_Response";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ReloadControllerLibraries_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ReloadControllerLibraries_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_manager_msgs::srv::ReloadControllerLibraries_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace controller_manager_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReloadControllerLibraries_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReloadControllerLibraries_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReloadControllerLibraries_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace controller_manager_msgs

namespace rosidl_generator_traits
{

[[deprecated("use controller_manager_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const controller_manager_msgs::srv::ReloadControllerLibraries_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_manager_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_manager_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const controller_manager_msgs::srv::ReloadControllerLibraries_Event & msg)
{
  return controller_manager_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<controller_manager_msgs::srv::ReloadControllerLibraries_Event>()
{
  return "controller_manager_msgs::srv::ReloadControllerLibraries_Event";
}

template<>
inline const char * name<controller_manager_msgs::srv::ReloadControllerLibraries_Event>()
{
  return "controller_manager_msgs/srv/ReloadControllerLibraries_Event";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ReloadControllerLibraries_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ReloadControllerLibraries_Event>
  : std::integral_constant<bool, has_bounded_size<controller_manager_msgs::srv::ReloadControllerLibraries_Request>::value && has_bounded_size<controller_manager_msgs::srv::ReloadControllerLibraries_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<controller_manager_msgs::srv::ReloadControllerLibraries_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::srv::ReloadControllerLibraries>()
{
  return "controller_manager_msgs::srv::ReloadControllerLibraries";
}

template<>
inline const char * name<controller_manager_msgs::srv::ReloadControllerLibraries>()
{
  return "controller_manager_msgs/srv/ReloadControllerLibraries";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ReloadControllerLibraries>
  : std::integral_constant<
    bool,
    has_fixed_size<controller_manager_msgs::srv::ReloadControllerLibraries_Request>::value &&
    has_fixed_size<controller_manager_msgs::srv::ReloadControllerLibraries_Response>::value
  >
{
};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ReloadControllerLibraries>
  : std::integral_constant<
    bool,
    has_bounded_size<controller_manager_msgs::srv::ReloadControllerLibraries_Request>::value &&
    has_bounded_size<controller_manager_msgs::srv::ReloadControllerLibraries_Response>::value
  >
{
};

template<>
struct is_service<controller_manager_msgs::srv::ReloadControllerLibraries>
  : std::true_type
{
};

template<>
struct is_service_request<controller_manager_msgs::srv::ReloadControllerLibraries_Request>
  : std::true_type
{
};

template<>
struct is_service_response<controller_manager_msgs::srv::ReloadControllerLibraries_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__TRAITS_HPP_