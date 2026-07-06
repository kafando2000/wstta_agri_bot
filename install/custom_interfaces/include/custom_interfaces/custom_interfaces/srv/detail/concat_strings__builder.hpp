// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/ConcatStrings.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/srv/concat_strings.hpp"


#ifndef CUSTOM_INTERFACES__SRV__DETAIL__CONCAT_STRINGS__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__CONCAT_STRINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/concat_strings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ConcatStrings_Request_var2
{
public:
  explicit Init_ConcatStrings_Request_var2(::custom_interfaces::srv::ConcatStrings_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::ConcatStrings_Request var2(::custom_interfaces::srv::ConcatStrings_Request::_var2_type arg)
  {
    msg_.var2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::ConcatStrings_Request msg_;
};

class Init_ConcatStrings_Request_var1
{
public:
  Init_ConcatStrings_Request_var1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConcatStrings_Request_var2 var1(::custom_interfaces::srv::ConcatStrings_Request::_var1_type arg)
  {
    msg_.var1 = std::move(arg);
    return Init_ConcatStrings_Request_var2(msg_);
  }

private:
  ::custom_interfaces::srv::ConcatStrings_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::ConcatStrings_Request>()
{
  return custom_interfaces::srv::builder::Init_ConcatStrings_Request_var1();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ConcatStrings_Response_concat_string
{
public:
  Init_ConcatStrings_Response_concat_string()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::ConcatStrings_Response concat_string(::custom_interfaces::srv::ConcatStrings_Response::_concat_string_type arg)
  {
    msg_.concat_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::ConcatStrings_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::ConcatStrings_Response>()
{
  return custom_interfaces::srv::builder::Init_ConcatStrings_Response_concat_string();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ConcatStrings_Event_response
{
public:
  explicit Init_ConcatStrings_Event_response(::custom_interfaces::srv::ConcatStrings_Event & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::ConcatStrings_Event response(::custom_interfaces::srv::ConcatStrings_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::ConcatStrings_Event msg_;
};

class Init_ConcatStrings_Event_request
{
public:
  explicit Init_ConcatStrings_Event_request(::custom_interfaces::srv::ConcatStrings_Event & msg)
  : msg_(msg)
  {}
  Init_ConcatStrings_Event_response request(::custom_interfaces::srv::ConcatStrings_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ConcatStrings_Event_response(msg_);
  }

private:
  ::custom_interfaces::srv::ConcatStrings_Event msg_;
};

class Init_ConcatStrings_Event_info
{
public:
  Init_ConcatStrings_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConcatStrings_Event_request info(::custom_interfaces::srv::ConcatStrings_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ConcatStrings_Event_request(msg_);
  }

private:
  ::custom_interfaces::srv::ConcatStrings_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::ConcatStrings_Event>()
{
  return custom_interfaces::srv::builder::Init_ConcatStrings_Event_info();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__CONCAT_STRINGS__BUILDER_HPP_
