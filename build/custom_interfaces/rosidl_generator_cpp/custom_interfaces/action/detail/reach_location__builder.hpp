// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:action/ReachLocation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/action/reach_location.hpp"


#ifndef CUSTOM_INTERFACES__ACTION__DETAIL__REACH_LOCATION__BUILDER_HPP_
#define CUSTOM_INTERFACES__ACTION__DETAIL__REACH_LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/action/detail/reach_location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ReachLocation_Goal_timeout
{
public:
  explicit Init_ReachLocation_Goal_timeout(::custom_interfaces::action::ReachLocation_Goal & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::ReachLocation_Goal timeout(::custom_interfaces::action::ReachLocation_Goal::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_Goal msg_;
};

class Init_ReachLocation_Goal_y
{
public:
  explicit Init_ReachLocation_Goal_y(::custom_interfaces::action::ReachLocation_Goal & msg)
  : msg_(msg)
  {}
  Init_ReachLocation_Goal_timeout y(::custom_interfaces::action::ReachLocation_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ReachLocation_Goal_timeout(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_Goal msg_;
};

class Init_ReachLocation_Goal_x
{
public:
  Init_ReachLocation_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachLocation_Goal_y x(::custom_interfaces::action::ReachLocation_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ReachLocation_Goal_y(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ReachLocation_Goal>()
{
  return custom_interfaces::action::builder::Init_ReachLocation_Goal_x();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ReachLocation_Result_message
{
public:
  explicit Init_ReachLocation_Result_message(::custom_interfaces::action::ReachLocation_Result & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::ReachLocation_Result message(::custom_interfaces::action::ReachLocation_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_Result msg_;
};

class Init_ReachLocation_Result_success
{
public:
  Init_ReachLocation_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachLocation_Result_message success(::custom_interfaces::action::ReachLocation_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ReachLocation_Result_message(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ReachLocation_Result>()
{
  return custom_interfaces::action::builder::Init_ReachLocation_Result_success();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ReachLocation_Feedback_current_y
{
public:
  explicit Init_ReachLocation_Feedback_current_y(::custom_interfaces::action::ReachLocation_Feedback & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::ReachLocation_Feedback current_y(::custom_interfaces::action::ReachLocation_Feedback::_current_y_type arg)
  {
    msg_.current_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_Feedback msg_;
};

class Init_ReachLocation_Feedback_current_x
{
public:
  Init_ReachLocation_Feedback_current_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachLocation_Feedback_current_y current_x(::custom_interfaces::action::ReachLocation_Feedback::_current_x_type arg)
  {
    msg_.current_x = std::move(arg);
    return Init_ReachLocation_Feedback_current_y(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ReachLocation_Feedback>()
{
  return custom_interfaces::action::builder::Init_ReachLocation_Feedback_current_x();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ReachLocation_SendGoal_Request_goal
{
public:
  explicit Init_ReachLocation_SendGoal_Request_goal(::custom_interfaces::action::ReachLocation_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::ReachLocation_SendGoal_Request goal(::custom_interfaces::action::ReachLocation_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_SendGoal_Request msg_;
};

class Init_ReachLocation_SendGoal_Request_goal_id
{
public:
  Init_ReachLocation_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachLocation_SendGoal_Request_goal goal_id(::custom_interfaces::action::ReachLocation_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ReachLocation_SendGoal_Request_goal(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ReachLocation_SendGoal_Request>()
{
  return custom_interfaces::action::builder::Init_ReachLocation_SendGoal_Request_goal_id();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ReachLocation_SendGoal_Response_stamp
{
public:
  explicit Init_ReachLocation_SendGoal_Response_stamp(::custom_interfaces::action::ReachLocation_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::ReachLocation_SendGoal_Response stamp(::custom_interfaces::action::ReachLocation_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_SendGoal_Response msg_;
};

class Init_ReachLocation_SendGoal_Response_accepted
{
public:
  Init_ReachLocation_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachLocation_SendGoal_Response_stamp accepted(::custom_interfaces::action::ReachLocation_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ReachLocation_SendGoal_Response_stamp(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ReachLocation_SendGoal_Response>()
{
  return custom_interfaces::action::builder::Init_ReachLocation_SendGoal_Response_accepted();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ReachLocation_SendGoal_Event_response
{
public:
  explicit Init_ReachLocation_SendGoal_Event_response(::custom_interfaces::action::ReachLocation_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::ReachLocation_SendGoal_Event response(::custom_interfaces::action::ReachLocation_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_SendGoal_Event msg_;
};

class Init_ReachLocation_SendGoal_Event_request
{
public:
  explicit Init_ReachLocation_SendGoal_Event_request(::custom_interfaces::action::ReachLocation_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ReachLocation_SendGoal_Event_response request(::custom_interfaces::action::ReachLocation_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ReachLocation_SendGoal_Event_response(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_SendGoal_Event msg_;
};

class Init_ReachLocation_SendGoal_Event_info
{
public:
  Init_ReachLocation_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachLocation_SendGoal_Event_request info(::custom_interfaces::action::ReachLocation_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ReachLocation_SendGoal_Event_request(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ReachLocation_SendGoal_Event>()
{
  return custom_interfaces::action::builder::Init_ReachLocation_SendGoal_Event_info();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ReachLocation_GetResult_Request_goal_id
{
public:
  Init_ReachLocation_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::ReachLocation_GetResult_Request goal_id(::custom_interfaces::action::ReachLocation_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ReachLocation_GetResult_Request>()
{
  return custom_interfaces::action::builder::Init_ReachLocation_GetResult_Request_goal_id();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ReachLocation_GetResult_Response_result
{
public:
  explicit Init_ReachLocation_GetResult_Response_result(::custom_interfaces::action::ReachLocation_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::ReachLocation_GetResult_Response result(::custom_interfaces::action::ReachLocation_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_GetResult_Response msg_;
};

class Init_ReachLocation_GetResult_Response_status
{
public:
  Init_ReachLocation_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachLocation_GetResult_Response_result status(::custom_interfaces::action::ReachLocation_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ReachLocation_GetResult_Response_result(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ReachLocation_GetResult_Response>()
{
  return custom_interfaces::action::builder::Init_ReachLocation_GetResult_Response_status();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ReachLocation_GetResult_Event_response
{
public:
  explicit Init_ReachLocation_GetResult_Event_response(::custom_interfaces::action::ReachLocation_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::ReachLocation_GetResult_Event response(::custom_interfaces::action::ReachLocation_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_GetResult_Event msg_;
};

class Init_ReachLocation_GetResult_Event_request
{
public:
  explicit Init_ReachLocation_GetResult_Event_request(::custom_interfaces::action::ReachLocation_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ReachLocation_GetResult_Event_response request(::custom_interfaces::action::ReachLocation_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ReachLocation_GetResult_Event_response(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_GetResult_Event msg_;
};

class Init_ReachLocation_GetResult_Event_info
{
public:
  Init_ReachLocation_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachLocation_GetResult_Event_request info(::custom_interfaces::action::ReachLocation_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ReachLocation_GetResult_Event_request(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ReachLocation_GetResult_Event>()
{
  return custom_interfaces::action::builder::Init_ReachLocation_GetResult_Event_info();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ReachLocation_FeedbackMessage_feedback
{
public:
  explicit Init_ReachLocation_FeedbackMessage_feedback(::custom_interfaces::action::ReachLocation_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::ReachLocation_FeedbackMessage feedback(::custom_interfaces::action::ReachLocation_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_FeedbackMessage msg_;
};

class Init_ReachLocation_FeedbackMessage_goal_id
{
public:
  Init_ReachLocation_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachLocation_FeedbackMessage_feedback goal_id(::custom_interfaces::action::ReachLocation_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ReachLocation_FeedbackMessage_feedback(msg_);
  }

private:
  ::custom_interfaces::action::ReachLocation_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ReachLocation_FeedbackMessage>()
{
  return custom_interfaces::action::builder::Init_ReachLocation_FeedbackMessage_goal_id();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__ACTION__DETAIL__REACH_LOCATION__BUILDER_HPP_
