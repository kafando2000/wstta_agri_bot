
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__CustomAction_Goal() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__CustomAction_Goal__init(msg: *mut CustomAction_Goal) -> bool;
    fn custom_interfaces__action__CustomAction_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CustomAction_Goal>, size: usize) -> bool;
    fn custom_interfaces__action__CustomAction_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CustomAction_Goal>);
    fn custom_interfaces__action__CustomAction_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CustomAction_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<CustomAction_Goal>) -> bool;
}

// Corresponds to custom_interfaces__action__CustomAction_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomAction_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_value: i32,

}



impl Default for CustomAction_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__CustomAction_Goal__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__CustomAction_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CustomAction_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CustomAction_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CustomAction_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/CustomAction_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__CustomAction_Goal() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__CustomAction_Result() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__CustomAction_Result__init(msg: *mut CustomAction_Result) -> bool;
    fn custom_interfaces__action__CustomAction_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CustomAction_Result>, size: usize) -> bool;
    fn custom_interfaces__action__CustomAction_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CustomAction_Result>);
    fn custom_interfaces__action__CustomAction_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CustomAction_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<CustomAction_Result>) -> bool;
}

// Corresponds to custom_interfaces__action__CustomAction_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomAction_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result_value: i32,

}



impl Default for CustomAction_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__CustomAction_Result__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__CustomAction_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CustomAction_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CustomAction_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CustomAction_Result where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/CustomAction_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__CustomAction_Result() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__CustomAction_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__CustomAction_Feedback__init(msg: *mut CustomAction_Feedback) -> bool;
    fn custom_interfaces__action__CustomAction_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CustomAction_Feedback>, size: usize) -> bool;
    fn custom_interfaces__action__CustomAction_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CustomAction_Feedback>);
    fn custom_interfaces__action__CustomAction_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CustomAction_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<CustomAction_Feedback>) -> bool;
}

// Corresponds to custom_interfaces__action__CustomAction_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomAction_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: i32,

}



impl Default for CustomAction_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__CustomAction_Feedback__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__CustomAction_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CustomAction_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CustomAction_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CustomAction_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/CustomAction_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__CustomAction_Feedback() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__CustomAction_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__CustomAction_FeedbackMessage__init(msg: *mut CustomAction_FeedbackMessage) -> bool;
    fn custom_interfaces__action__CustomAction_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CustomAction_FeedbackMessage>, size: usize) -> bool;
    fn custom_interfaces__action__CustomAction_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CustomAction_FeedbackMessage>);
    fn custom_interfaces__action__CustomAction_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CustomAction_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<CustomAction_FeedbackMessage>) -> bool;
}

// Corresponds to custom_interfaces__action__CustomAction_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomAction_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::CustomAction_Feedback,

}



impl Default for CustomAction_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__CustomAction_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__CustomAction_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CustomAction_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CustomAction_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CustomAction_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/CustomAction_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__CustomAction_FeedbackMessage() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__ReachLocation_Goal() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__ReachLocation_Goal__init(msg: *mut ReachLocation_Goal) -> bool;
    fn custom_interfaces__action__ReachLocation_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_Goal>, size: usize) -> bool;
    fn custom_interfaces__action__ReachLocation_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_Goal>);
    fn custom_interfaces__action__ReachLocation_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReachLocation_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_Goal>) -> bool;
}

// Corresponds to custom_interfaces__action__ReachLocation_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReachLocation_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout: f32,

}



impl Default for ReachLocation_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__ReachLocation_Goal__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__ReachLocation_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReachLocation_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReachLocation_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReachLocation_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/ReachLocation_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__ReachLocation_Goal() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__ReachLocation_Result() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__ReachLocation_Result__init(msg: *mut ReachLocation_Result) -> bool;
    fn custom_interfaces__action__ReachLocation_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_Result>, size: usize) -> bool;
    fn custom_interfaces__action__ReachLocation_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_Result>);
    fn custom_interfaces__action__ReachLocation_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReachLocation_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_Result>) -> bool;
}

// Corresponds to custom_interfaces__action__ReachLocation_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReachLocation_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ReachLocation_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__ReachLocation_Result__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__ReachLocation_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReachLocation_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReachLocation_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReachLocation_Result where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/ReachLocation_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__ReachLocation_Result() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__ReachLocation_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__ReachLocation_Feedback__init(msg: *mut ReachLocation_Feedback) -> bool;
    fn custom_interfaces__action__ReachLocation_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_Feedback>, size: usize) -> bool;
    fn custom_interfaces__action__ReachLocation_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_Feedback>);
    fn custom_interfaces__action__ReachLocation_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReachLocation_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_Feedback>) -> bool;
}

// Corresponds to custom_interfaces__action__ReachLocation_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReachLocation_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_y: f32,

}



impl Default for ReachLocation_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__ReachLocation_Feedback__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__ReachLocation_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReachLocation_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReachLocation_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReachLocation_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/ReachLocation_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__ReachLocation_Feedback() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__ReachLocation_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__ReachLocation_FeedbackMessage__init(msg: *mut ReachLocation_FeedbackMessage) -> bool;
    fn custom_interfaces__action__ReachLocation_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_FeedbackMessage>, size: usize) -> bool;
    fn custom_interfaces__action__ReachLocation_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_FeedbackMessage>);
    fn custom_interfaces__action__ReachLocation_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReachLocation_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_FeedbackMessage>) -> bool;
}

// Corresponds to custom_interfaces__action__ReachLocation_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReachLocation_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ReachLocation_Feedback,

}



impl Default for ReachLocation_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__ReachLocation_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__ReachLocation_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReachLocation_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReachLocation_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReachLocation_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/ReachLocation_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__ReachLocation_FeedbackMessage() }
  }
}




#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__CustomAction_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__CustomAction_SendGoal_Request__init(msg: *mut CustomAction_SendGoal_Request) -> bool;
    fn custom_interfaces__action__CustomAction_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CustomAction_SendGoal_Request>, size: usize) -> bool;
    fn custom_interfaces__action__CustomAction_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CustomAction_SendGoal_Request>);
    fn custom_interfaces__action__CustomAction_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CustomAction_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CustomAction_SendGoal_Request>) -> bool;
}

// Corresponds to custom_interfaces__action__CustomAction_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomAction_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::CustomAction_Goal,

}



impl Default for CustomAction_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__CustomAction_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__CustomAction_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CustomAction_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CustomAction_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CustomAction_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/CustomAction_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__CustomAction_SendGoal_Request() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__CustomAction_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__CustomAction_SendGoal_Response__init(msg: *mut CustomAction_SendGoal_Response) -> bool;
    fn custom_interfaces__action__CustomAction_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CustomAction_SendGoal_Response>, size: usize) -> bool;
    fn custom_interfaces__action__CustomAction_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CustomAction_SendGoal_Response>);
    fn custom_interfaces__action__CustomAction_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CustomAction_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CustomAction_SendGoal_Response>) -> bool;
}

// Corresponds to custom_interfaces__action__CustomAction_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomAction_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for CustomAction_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__CustomAction_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__CustomAction_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CustomAction_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CustomAction_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CustomAction_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/CustomAction_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__CustomAction_SendGoal_Response() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__CustomAction_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__CustomAction_GetResult_Request__init(msg: *mut CustomAction_GetResult_Request) -> bool;
    fn custom_interfaces__action__CustomAction_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CustomAction_GetResult_Request>, size: usize) -> bool;
    fn custom_interfaces__action__CustomAction_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CustomAction_GetResult_Request>);
    fn custom_interfaces__action__CustomAction_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CustomAction_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CustomAction_GetResult_Request>) -> bool;
}

// Corresponds to custom_interfaces__action__CustomAction_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomAction_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for CustomAction_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__CustomAction_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__CustomAction_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CustomAction_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CustomAction_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CustomAction_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/CustomAction_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__CustomAction_GetResult_Request() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__CustomAction_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__CustomAction_GetResult_Response__init(msg: *mut CustomAction_GetResult_Response) -> bool;
    fn custom_interfaces__action__CustomAction_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CustomAction_GetResult_Response>, size: usize) -> bool;
    fn custom_interfaces__action__CustomAction_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CustomAction_GetResult_Response>);
    fn custom_interfaces__action__CustomAction_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CustomAction_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CustomAction_GetResult_Response>) -> bool;
}

// Corresponds to custom_interfaces__action__CustomAction_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomAction_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::CustomAction_Result,

}



impl Default for CustomAction_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__CustomAction_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__CustomAction_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CustomAction_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__CustomAction_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CustomAction_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CustomAction_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/CustomAction_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__CustomAction_GetResult_Response() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__ReachLocation_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__ReachLocation_SendGoal_Request__init(msg: *mut ReachLocation_SendGoal_Request) -> bool;
    fn custom_interfaces__action__ReachLocation_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_SendGoal_Request>, size: usize) -> bool;
    fn custom_interfaces__action__ReachLocation_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_SendGoal_Request>);
    fn custom_interfaces__action__ReachLocation_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReachLocation_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_SendGoal_Request>) -> bool;
}

// Corresponds to custom_interfaces__action__ReachLocation_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReachLocation_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ReachLocation_Goal,

}



impl Default for ReachLocation_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__ReachLocation_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__ReachLocation_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReachLocation_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReachLocation_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReachLocation_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/ReachLocation_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__ReachLocation_SendGoal_Request() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__ReachLocation_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__ReachLocation_SendGoal_Response__init(msg: *mut ReachLocation_SendGoal_Response) -> bool;
    fn custom_interfaces__action__ReachLocation_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_SendGoal_Response>, size: usize) -> bool;
    fn custom_interfaces__action__ReachLocation_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_SendGoal_Response>);
    fn custom_interfaces__action__ReachLocation_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReachLocation_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_SendGoal_Response>) -> bool;
}

// Corresponds to custom_interfaces__action__ReachLocation_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReachLocation_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ReachLocation_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__ReachLocation_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__ReachLocation_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReachLocation_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReachLocation_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReachLocation_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/ReachLocation_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__ReachLocation_SendGoal_Response() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__ReachLocation_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__ReachLocation_GetResult_Request__init(msg: *mut ReachLocation_GetResult_Request) -> bool;
    fn custom_interfaces__action__ReachLocation_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_GetResult_Request>, size: usize) -> bool;
    fn custom_interfaces__action__ReachLocation_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_GetResult_Request>);
    fn custom_interfaces__action__ReachLocation_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReachLocation_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_GetResult_Request>) -> bool;
}

// Corresponds to custom_interfaces__action__ReachLocation_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReachLocation_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ReachLocation_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__ReachLocation_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__ReachLocation_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReachLocation_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReachLocation_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReachLocation_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/ReachLocation_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__ReachLocation_GetResult_Request() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__ReachLocation_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__ReachLocation_GetResult_Response__init(msg: *mut ReachLocation_GetResult_Response) -> bool;
    fn custom_interfaces__action__ReachLocation_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_GetResult_Response>, size: usize) -> bool;
    fn custom_interfaces__action__ReachLocation_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_GetResult_Response>);
    fn custom_interfaces__action__ReachLocation_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReachLocation_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ReachLocation_GetResult_Response>) -> bool;
}

// Corresponds to custom_interfaces__action__ReachLocation_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReachLocation_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ReachLocation_Result,

}



impl Default for ReachLocation_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__ReachLocation_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__ReachLocation_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReachLocation_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__ReachLocation_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReachLocation_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReachLocation_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/ReachLocation_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__ReachLocation_GetResult_Response() }
  }
}






#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__action__CustomAction_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to custom_interfaces__action__CustomAction_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct CustomAction_SendGoal;

impl rosidl_runtime_rs::Service for CustomAction_SendGoal {
    type Request = CustomAction_SendGoal_Request;
    type Response = CustomAction_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__action__CustomAction_SendGoal() }
    }
}




#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__action__CustomAction_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to custom_interfaces__action__CustomAction_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct CustomAction_GetResult;

impl rosidl_runtime_rs::Service for CustomAction_GetResult {
    type Request = CustomAction_GetResult_Request;
    type Response = CustomAction_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__action__CustomAction_GetResult() }
    }
}




#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__action__ReachLocation_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to custom_interfaces__action__ReachLocation_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ReachLocation_SendGoal;

impl rosidl_runtime_rs::Service for ReachLocation_SendGoal {
    type Request = ReachLocation_SendGoal_Request;
    type Response = ReachLocation_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__action__ReachLocation_SendGoal() }
    }
}




#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__action__ReachLocation_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to custom_interfaces__action__ReachLocation_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ReachLocation_GetResult;

impl rosidl_runtime_rs::Service for ReachLocation_GetResult {
    type Request = ReachLocation_GetResult_Request;
    type Response = ReachLocation_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__action__ReachLocation_GetResult() }
    }
}


