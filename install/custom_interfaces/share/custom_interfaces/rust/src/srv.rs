#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to custom_interfaces__srv__ConcatStrings_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConcatStrings_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub var1: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub var2: std::string::String,

}



impl Default for ConcatStrings_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ConcatStrings_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ConcatStrings_Request {
  type RmwMsg = super::srv::rmw::ConcatStrings_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        var1: msg.var1.as_str().into(),
        var2: msg.var2.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        var1: msg.var1.as_str().into(),
        var2: msg.var2.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      var1: msg.var1.to_string(),
      var2: msg.var2.to_string(),
    }
  }
}


// Corresponds to custom_interfaces__srv__ConcatStrings_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConcatStrings_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub concat_string: std::string::String,

}



impl Default for ConcatStrings_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ConcatStrings_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ConcatStrings_Response {
  type RmwMsg = super::srv::rmw::ConcatStrings_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        concat_string: msg.concat_string.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        concat_string: msg.concat_string.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      concat_string: msg.concat_string.to_string(),
    }
  }
}






#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__srv__ConcatStrings() -> *const std::ffi::c_void;
}

// Corresponds to custom_interfaces__srv__ConcatStrings
#[allow(missing_docs, non_camel_case_types)]
pub struct ConcatStrings;

impl rosidl_runtime_rs::Service for ConcatStrings {
    type Request = ConcatStrings_Request;
    type Response = ConcatStrings_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__srv__ConcatStrings() }
    }
}


