// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dave_interfaces:srv/Say.idl
// generated code does not contain a copyright notice
#include "dave_interfaces/srv/detail/say__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dave_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dave_interfaces/srv/detail/say__struct.h"
#include "dave_interfaces/srv/detail/say__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // saystring
#include "rosidl_runtime_c/string_functions.h"  // saystring

// forward declare type support functions


using _Say_Request__ros_msg_type = dave_interfaces__srv__Say_Request;

static bool _Say_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Say_Request__ros_msg_type * ros_message = static_cast<const _Say_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: saystring
  {
    const rosidl_runtime_c__String * str = &ros_message->saystring;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Say_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Say_Request__ros_msg_type * ros_message = static_cast<_Say_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: saystring
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->saystring.data) {
      rosidl_runtime_c__String__init(&ros_message->saystring);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->saystring,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'saystring'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dave_interfaces
size_t get_serialized_size_dave_interfaces__srv__Say_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Say_Request__ros_msg_type * ros_message = static_cast<const _Say_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name saystring
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->saystring.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Say_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dave_interfaces__srv__Say_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dave_interfaces
size_t max_serialized_size_dave_interfaces__srv__Say_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: saystring
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dave_interfaces__srv__Say_Request;
    is_plain =
      (
      offsetof(DataType, saystring) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Say_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dave_interfaces__srv__Say_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Say_Request = {
  "dave_interfaces::srv",
  "Say_Request",
  _Say_Request__cdr_serialize,
  _Say_Request__cdr_deserialize,
  _Say_Request__get_serialized_size,
  _Say_Request__max_serialized_size
};

static rosidl_message_type_support_t _Say_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Say_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dave_interfaces, srv, Say_Request)() {
  return &_Say_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dave_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dave_interfaces/srv/detail/say__struct.h"
// already included above
// #include "dave_interfaces/srv/detail/say__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Say_Response__ros_msg_type = dave_interfaces__srv__Say_Response;

static bool _Say_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Say_Response__ros_msg_type * ros_message = static_cast<const _Say_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: spoken
  {
    cdr << (ros_message->spoken ? true : false);
  }

  return true;
}

static bool _Say_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Say_Response__ros_msg_type * ros_message = static_cast<_Say_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: spoken
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->spoken = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dave_interfaces
size_t get_serialized_size_dave_interfaces__srv__Say_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Say_Response__ros_msg_type * ros_message = static_cast<const _Say_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name spoken
  {
    size_t item_size = sizeof(ros_message->spoken);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Say_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dave_interfaces__srv__Say_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dave_interfaces
size_t max_serialized_size_dave_interfaces__srv__Say_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: spoken
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dave_interfaces__srv__Say_Response;
    is_plain =
      (
      offsetof(DataType, spoken) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Say_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dave_interfaces__srv__Say_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Say_Response = {
  "dave_interfaces::srv",
  "Say_Response",
  _Say_Response__cdr_serialize,
  _Say_Response__cdr_deserialize,
  _Say_Response__get_serialized_size,
  _Say_Response__max_serialized_size
};

static rosidl_message_type_support_t _Say_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Say_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dave_interfaces, srv, Say_Response)() {
  return &_Say_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "dave_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dave_interfaces/srv/say.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Say__callbacks = {
  "dave_interfaces::srv",
  "Say",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dave_interfaces, srv, Say_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dave_interfaces, srv, Say_Response)(),
};

static rosidl_service_type_support_t Say__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Say__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dave_interfaces, srv, Say)() {
  return &Say__handle;
}

#if defined(__cplusplus)
}
#endif
