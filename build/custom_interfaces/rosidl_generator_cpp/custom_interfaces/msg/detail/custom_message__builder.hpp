// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/CustomMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/custom_message.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/custom_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_CustomMessage_myint
{
public:
  explicit Init_CustomMessage_myint(::custom_interfaces::msg::CustomMessage & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::CustomMessage myint(::custom_interfaces::msg::CustomMessage::_myint_type arg)
  {
    msg_.myint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::CustomMessage msg_;
};

class Init_CustomMessage_mystring
{
public:
  Init_CustomMessage_mystring()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomMessage_myint mystring(::custom_interfaces::msg::CustomMessage::_mystring_type arg)
  {
    msg_.mystring = std::move(arg);
    return Init_CustomMessage_myint(msg_);
  }

private:
  ::custom_interfaces::msg::CustomMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::CustomMessage>()
{
  return custom_interfaces::msg::builder::Init_CustomMessage_mystring();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_
