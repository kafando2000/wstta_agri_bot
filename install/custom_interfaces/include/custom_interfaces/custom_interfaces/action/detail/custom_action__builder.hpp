// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:action/CustomAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/action/custom_action.hpp"


#ifndef CUSTOM_INTERFACES__ACTION__DETAIL__CUSTOM_ACTION__BUILDER_HPP_
#define CUSTOM_INTERFACES__ACTION__DETAIL__CUSTOM_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/action/detail/custom_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_CustomAction_Goal_goal_value
{
public:
  Init_CustomAction_Goal_goal_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::CustomAction_Goal goal_value(::custom_interfaces::action::CustomAction_Goal::_goal_value_type arg)
  {
    msg_.goal_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::CustomAction_Goal>()
{
  return custom_interfaces::action::builder::Init_CustomAction_Goal_goal_value();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_CustomAction_Result_result_value
{
public:
  Init_CustomAction_Result_result_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::CustomAction_Result result_value(::custom_interfaces::action::CustomAction_Result::_result_value_type arg)
  {
    msg_.result_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::CustomAction_Result>()
{
  return custom_interfaces::action::builder::Init_CustomAction_Result_result_value();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_CustomAction_Feedback_progress
{
public:
  Init_CustomAction_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::CustomAction_Feedback progress(::custom_interfaces::action::CustomAction_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::CustomAction_Feedback>()
{
  return custom_interfaces::action::builder::Init_CustomAction_Feedback_progress();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_CustomAction_SendGoal_Request_goal
{
public:
  explicit Init_CustomAction_SendGoal_Request_goal(::custom_interfaces::action::CustomAction_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::CustomAction_SendGoal_Request goal(::custom_interfaces::action::CustomAction_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_SendGoal_Request msg_;
};

class Init_CustomAction_SendGoal_Request_goal_id
{
public:
  Init_CustomAction_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomAction_SendGoal_Request_goal goal_id(::custom_interfaces::action::CustomAction_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CustomAction_SendGoal_Request_goal(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::CustomAction_SendGoal_Request>()
{
  return custom_interfaces::action::builder::Init_CustomAction_SendGoal_Request_goal_id();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_CustomAction_SendGoal_Response_stamp
{
public:
  explicit Init_CustomAction_SendGoal_Response_stamp(::custom_interfaces::action::CustomAction_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::CustomAction_SendGoal_Response stamp(::custom_interfaces::action::CustomAction_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_SendGoal_Response msg_;
};

class Init_CustomAction_SendGoal_Response_accepted
{
public:
  Init_CustomAction_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomAction_SendGoal_Response_stamp accepted(::custom_interfaces::action::CustomAction_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_CustomAction_SendGoal_Response_stamp(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::CustomAction_SendGoal_Response>()
{
  return custom_interfaces::action::builder::Init_CustomAction_SendGoal_Response_accepted();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_CustomAction_SendGoal_Event_response
{
public:
  explicit Init_CustomAction_SendGoal_Event_response(::custom_interfaces::action::CustomAction_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::CustomAction_SendGoal_Event response(::custom_interfaces::action::CustomAction_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_SendGoal_Event msg_;
};

class Init_CustomAction_SendGoal_Event_request
{
public:
  explicit Init_CustomAction_SendGoal_Event_request(::custom_interfaces::action::CustomAction_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_CustomAction_SendGoal_Event_response request(::custom_interfaces::action::CustomAction_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CustomAction_SendGoal_Event_response(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_SendGoal_Event msg_;
};

class Init_CustomAction_SendGoal_Event_info
{
public:
  Init_CustomAction_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomAction_SendGoal_Event_request info(::custom_interfaces::action::CustomAction_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CustomAction_SendGoal_Event_request(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::CustomAction_SendGoal_Event>()
{
  return custom_interfaces::action::builder::Init_CustomAction_SendGoal_Event_info();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_CustomAction_GetResult_Request_goal_id
{
public:
  Init_CustomAction_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::CustomAction_GetResult_Request goal_id(::custom_interfaces::action::CustomAction_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::CustomAction_GetResult_Request>()
{
  return custom_interfaces::action::builder::Init_CustomAction_GetResult_Request_goal_id();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_CustomAction_GetResult_Response_result
{
public:
  explicit Init_CustomAction_GetResult_Response_result(::custom_interfaces::action::CustomAction_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::CustomAction_GetResult_Response result(::custom_interfaces::action::CustomAction_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_GetResult_Response msg_;
};

class Init_CustomAction_GetResult_Response_status
{
public:
  Init_CustomAction_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomAction_GetResult_Response_result status(::custom_interfaces::action::CustomAction_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CustomAction_GetResult_Response_result(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::CustomAction_GetResult_Response>()
{
  return custom_interfaces::action::builder::Init_CustomAction_GetResult_Response_status();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_CustomAction_GetResult_Event_response
{
public:
  explicit Init_CustomAction_GetResult_Event_response(::custom_interfaces::action::CustomAction_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::CustomAction_GetResult_Event response(::custom_interfaces::action::CustomAction_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_GetResult_Event msg_;
};

class Init_CustomAction_GetResult_Event_request
{
public:
  explicit Init_CustomAction_GetResult_Event_request(::custom_interfaces::action::CustomAction_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_CustomAction_GetResult_Event_response request(::custom_interfaces::action::CustomAction_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CustomAction_GetResult_Event_response(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_GetResult_Event msg_;
};

class Init_CustomAction_GetResult_Event_info
{
public:
  Init_CustomAction_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomAction_GetResult_Event_request info(::custom_interfaces::action::CustomAction_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CustomAction_GetResult_Event_request(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::CustomAction_GetResult_Event>()
{
  return custom_interfaces::action::builder::Init_CustomAction_GetResult_Event_info();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_CustomAction_FeedbackMessage_feedback
{
public:
  explicit Init_CustomAction_FeedbackMessage_feedback(::custom_interfaces::action::CustomAction_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::CustomAction_FeedbackMessage feedback(::custom_interfaces::action::CustomAction_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_FeedbackMessage msg_;
};

class Init_CustomAction_FeedbackMessage_goal_id
{
public:
  Init_CustomAction_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomAction_FeedbackMessage_feedback goal_id(::custom_interfaces::action::CustomAction_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CustomAction_FeedbackMessage_feedback(msg_);
  }

private:
  ::custom_interfaces::action::CustomAction_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::CustomAction_FeedbackMessage>()
{
  return custom_interfaces::action::builder::Init_CustomAction_FeedbackMessage_goal_id();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__ACTION__DETAIL__CUSTOM_ACTION__BUILDER_HPP_
