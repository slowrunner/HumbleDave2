// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dave_interfaces:srv/Say.idl
// generated code does not contain a copyright notice

#ifndef DAVE_INTERFACES__SRV__DETAIL__SAY__TRAITS_HPP_
#define DAVE_INTERFACES__SRV__DETAIL__SAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dave_interfaces/srv/detail/say__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dave_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Say_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: saystring
  {
    out << "saystring: ";
    rosidl_generator_traits::value_to_yaml(msg.saystring, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Say_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: saystring
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "saystring: ";
    rosidl_generator_traits::value_to_yaml(msg.saystring, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Say_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dave_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dave_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dave_interfaces::srv::Say_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dave_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dave_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dave_interfaces::srv::Say_Request & msg)
{
  return dave_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dave_interfaces::srv::Say_Request>()
{
  return "dave_interfaces::srv::Say_Request";
}

template<>
inline const char * name<dave_interfaces::srv::Say_Request>()
{
  return "dave_interfaces/srv/Say_Request";
}

template<>
struct has_fixed_size<dave_interfaces::srv::Say_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dave_interfaces::srv::Say_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dave_interfaces::srv::Say_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dave_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Say_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: spoken
  {
    out << "spoken: ";
    rosidl_generator_traits::value_to_yaml(msg.spoken, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Say_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: spoken
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spoken: ";
    rosidl_generator_traits::value_to_yaml(msg.spoken, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Say_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dave_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dave_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dave_interfaces::srv::Say_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dave_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dave_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dave_interfaces::srv::Say_Response & msg)
{
  return dave_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dave_interfaces::srv::Say_Response>()
{
  return "dave_interfaces::srv::Say_Response";
}

template<>
inline const char * name<dave_interfaces::srv::Say_Response>()
{
  return "dave_interfaces/srv/Say_Response";
}

template<>
struct has_fixed_size<dave_interfaces::srv::Say_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dave_interfaces::srv::Say_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dave_interfaces::srv::Say_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dave_interfaces::srv::Say>()
{
  return "dave_interfaces::srv::Say";
}

template<>
inline const char * name<dave_interfaces::srv::Say>()
{
  return "dave_interfaces/srv/Say";
}

template<>
struct has_fixed_size<dave_interfaces::srv::Say>
  : std::integral_constant<
    bool,
    has_fixed_size<dave_interfaces::srv::Say_Request>::value &&
    has_fixed_size<dave_interfaces::srv::Say_Response>::value
  >
{
};

template<>
struct has_bounded_size<dave_interfaces::srv::Say>
  : std::integral_constant<
    bool,
    has_bounded_size<dave_interfaces::srv::Say_Request>::value &&
    has_bounded_size<dave_interfaces::srv::Say_Response>::value
  >
{
};

template<>
struct is_service<dave_interfaces::srv::Say>
  : std::true_type
{
};

template<>
struct is_service_request<dave_interfaces::srv::Say_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dave_interfaces::srv::Say_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DAVE_INTERFACES__SRV__DETAIL__SAY__TRAITS_HPP_
