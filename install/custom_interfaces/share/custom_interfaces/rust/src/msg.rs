#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to custom_interfaces__msg__CustomMessage
/// data type

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mystring: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub myint: i32,

}



impl Default for CustomMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CustomMessage::default())
  }
}

impl rosidl_runtime_rs::Message for CustomMessage {
  type RmwMsg = super::msg::rmw::CustomMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mystring: msg.mystring.as_str().into(),
        myint: msg.myint,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mystring: msg.mystring.as_str().into(),
      myint: msg.myint,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mystring: msg.mystring.to_string(),
      myint: msg.myint,
    }
  }
}


