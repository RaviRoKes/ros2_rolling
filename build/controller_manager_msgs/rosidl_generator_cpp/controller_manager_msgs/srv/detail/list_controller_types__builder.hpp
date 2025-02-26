// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_manager_msgs:srv/ListControllerTypes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_manager_msgs/srv/list_controller_types.hpp"


#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_CONTROLLER_TYPES__BUILDER_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_CONTROLLER_TYPES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_manager_msgs/srv/detail/list_controller_types__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_manager_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::ListControllerTypes_Request>()
{
  return ::controller_manager_msgs::srv::ListControllerTypes_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace controller_manager_msgs


namespace controller_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_ListControllerTypes_Response_base_classes
{
public:
  explicit Init_ListControllerTypes_Response_base_classes(::controller_manager_msgs::srv::ListControllerTypes_Response & msg)
  : msg_(msg)
  {}
  ::controller_manager_msgs::srv::ListControllerTypes_Response base_classes(::controller_manager_msgs::srv::ListControllerTypes_Response::_base_classes_type arg)
  {
    msg_.base_classes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::srv::ListControllerTypes_Response msg_;
};

class Init_ListControllerTypes_Response_types
{
public:
  Init_ListControllerTypes_Response_types()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListControllerTypes_Response_base_classes types(::controller_manager_msgs::srv::ListControllerTypes_Response::_types_type arg)
  {
    msg_.types = std::move(arg);
    return Init_ListControllerTypes_Response_base_classes(msg_);
  }

private:
  ::controller_manager_msgs::srv::ListControllerTypes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::ListControllerTypes_Response>()
{
  return controller_manager_msgs::srv::builder::Init_ListControllerTypes_Response_types();
}

}  // namespace controller_manager_msgs


namespace controller_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_ListControllerTypes_Event_response
{
public:
  explicit Init_ListControllerTypes_Event_response(::controller_manager_msgs::srv::ListControllerTypes_Event & msg)
  : msg_(msg)
  {}
  ::controller_manager_msgs::srv::ListControllerTypes_Event response(::controller_manager_msgs::srv::ListControllerTypes_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::srv::ListControllerTypes_Event msg_;
};

class Init_ListControllerTypes_Event_request
{
public:
  explicit Init_ListControllerTypes_Event_request(::controller_manager_msgs::srv::ListControllerTypes_Event & msg)
  : msg_(msg)
  {}
  Init_ListControllerTypes_Event_response request(::controller_manager_msgs::srv::ListControllerTypes_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ListControllerTypes_Event_response(msg_);
  }

private:
  ::controller_manager_msgs::srv::ListControllerTypes_Event msg_;
};

class Init_ListControllerTypes_Event_info
{
public:
  Init_ListControllerTypes_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListControllerTypes_Event_request info(::controller_manager_msgs::srv::ListControllerTypes_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ListControllerTypes_Event_request(msg_);
  }

private:
  ::controller_manager_msgs::srv::ListControllerTypes_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::ListControllerTypes_Event>()
{
  return controller_manager_msgs::srv::builder::Init_ListControllerTypes_Event_info();
}

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_CONTROLLER_TYPES__BUILDER_HPP_
