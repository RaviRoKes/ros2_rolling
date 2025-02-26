// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_manager_msgs:srv/ReloadControllerLibraries.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_manager_msgs/srv/reload_controller_libraries.hpp"


#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__BUILDER_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_manager_msgs/srv/detail/reload_controller_libraries__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_ReloadControllerLibraries_Request_force_kill
{
public:
  Init_ReloadControllerLibraries_Request_force_kill()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::controller_manager_msgs::srv::ReloadControllerLibraries_Request force_kill(::controller_manager_msgs::srv::ReloadControllerLibraries_Request::_force_kill_type arg)
  {
    msg_.force_kill = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::srv::ReloadControllerLibraries_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::ReloadControllerLibraries_Request>()
{
  return controller_manager_msgs::srv::builder::Init_ReloadControllerLibraries_Request_force_kill();
}

}  // namespace controller_manager_msgs


namespace controller_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_ReloadControllerLibraries_Response_ok
{
public:
  Init_ReloadControllerLibraries_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::controller_manager_msgs::srv::ReloadControllerLibraries_Response ok(::controller_manager_msgs::srv::ReloadControllerLibraries_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::srv::ReloadControllerLibraries_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::ReloadControllerLibraries_Response>()
{
  return controller_manager_msgs::srv::builder::Init_ReloadControllerLibraries_Response_ok();
}

}  // namespace controller_manager_msgs


namespace controller_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_ReloadControllerLibraries_Event_response
{
public:
  explicit Init_ReloadControllerLibraries_Event_response(::controller_manager_msgs::srv::ReloadControllerLibraries_Event & msg)
  : msg_(msg)
  {}
  ::controller_manager_msgs::srv::ReloadControllerLibraries_Event response(::controller_manager_msgs::srv::ReloadControllerLibraries_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::srv::ReloadControllerLibraries_Event msg_;
};

class Init_ReloadControllerLibraries_Event_request
{
public:
  explicit Init_ReloadControllerLibraries_Event_request(::controller_manager_msgs::srv::ReloadControllerLibraries_Event & msg)
  : msg_(msg)
  {}
  Init_ReloadControllerLibraries_Event_response request(::controller_manager_msgs::srv::ReloadControllerLibraries_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ReloadControllerLibraries_Event_response(msg_);
  }

private:
  ::controller_manager_msgs::srv::ReloadControllerLibraries_Event msg_;
};

class Init_ReloadControllerLibraries_Event_info
{
public:
  Init_ReloadControllerLibraries_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReloadControllerLibraries_Event_request info(::controller_manager_msgs::srv::ReloadControllerLibraries_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ReloadControllerLibraries_Event_request(msg_);
  }

private:
  ::controller_manager_msgs::srv::ReloadControllerLibraries_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::ReloadControllerLibraries_Event>()
{
  return controller_manager_msgs::srv::builder::Init_ReloadControllerLibraries_Event_info();
}

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__BUILDER_HPP_
