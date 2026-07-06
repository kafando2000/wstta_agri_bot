#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__msg__CustomMessage() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__msg__CustomMessage__init(msg: *mut CustomMessage) -> bool;
    fn custom_interfaces__msg__CustomMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CustomMessage>, size: usize) -> bool;
    fn custom_interfaces__msg__CustomMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CustomMessage>);
    fn custom_interfaces__msg__CustomMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CustomMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<CustomMessage>) -> bool;
}

// Corresponds to custom_interfaces__msg__CustomMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// data type

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mystring: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub myint: i32,

}



impl Default for CustomMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__msg__CustomMessage__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__msg__CustomMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CustomMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__msg__CustomMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__msg__CustomMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__msg__CustomMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CustomMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CustomMessage where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/msg/CustomMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__msg__CustomMessage() }
  }
}


