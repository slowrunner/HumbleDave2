// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dave_interfaces:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef DAVE_INTERFACES__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
#define DAVE_INTERFACES__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dave_interfaces/msg/detail/battery_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace dave_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BatteryState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: volts
  {
    out << "volts: ";
    rosidl_generator_traits::value_to_yaml(msg.volts, out);
    out << ", ";
  }

  // member: milliamps
  {
    out << "milliamps: ";
    rosidl_generator_traits::value_to_yaml(msg.milliamps, out);
    out << ", ";
  }

  // member: watts
  {
    out << "watts: ";
    rosidl_generator_traits::value_to_yaml(msg.watts, out);
    out << ", ";
  }

  // member: watthours
  {
    out << "watthours: ";
    rosidl_generator_traits::value_to_yaml(msg.watthours, out);
    out << ", ";
  }

  // member: charging
  {
    out << "charging: ";
    rosidl_generator_traits::value_to_yaml(msg.charging, out);
    out << ", ";
  }

  // member: capacity
  {
    out << "capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.capacity, out);
    out << ", ";
  }

  // member: percent
  {
    out << "percent: ";
    rosidl_generator_traits::value_to_yaml(msg.percent, out);
    out << ", ";
  }

  // member: last_charge
  {
    out << "last_charge: ";
    rosidl_generator_traits::value_to_yaml(msg.last_charge, out);
    out << ", ";
  }

  // member: last_discharge
  {
    out << "last_discharge: ";
    rosidl_generator_traits::value_to_yaml(msg.last_discharge, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatteryState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: volts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "volts: ";
    rosidl_generator_traits::value_to_yaml(msg.volts, out);
    out << "\n";
  }

  // member: milliamps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "milliamps: ";
    rosidl_generator_traits::value_to_yaml(msg.milliamps, out);
    out << "\n";
  }

  // member: watts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "watts: ";
    rosidl_generator_traits::value_to_yaml(msg.watts, out);
    out << "\n";
  }

  // member: watthours
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "watthours: ";
    rosidl_generator_traits::value_to_yaml(msg.watthours, out);
    out << "\n";
  }

  // member: charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging: ";
    rosidl_generator_traits::value_to_yaml(msg.charging, out);
    out << "\n";
  }

  // member: capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.capacity, out);
    out << "\n";
  }

  // member: percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "percent: ";
    rosidl_generator_traits::value_to_yaml(msg.percent, out);
    out << "\n";
  }

  // member: last_charge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_charge: ";
    rosidl_generator_traits::value_to_yaml(msg.last_charge, out);
    out << "\n";
  }

  // member: last_discharge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_discharge: ";
    rosidl_generator_traits::value_to_yaml(msg.last_discharge, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatteryState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace dave_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dave_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dave_interfaces::msg::BatteryState & msg,
  std::ostream & out, size_t indentation = 0)
{
  dave_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dave_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const dave_interfaces::msg::BatteryState & msg)
{
  return dave_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dave_interfaces::msg::BatteryState>()
{
  return "dave_interfaces::msg::BatteryState";
}

template<>
inline const char * name<dave_interfaces::msg::BatteryState>()
{
  return "dave_interfaces/msg/BatteryState";
}

template<>
struct has_fixed_size<dave_interfaces::msg::BatteryState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<dave_interfaces::msg::BatteryState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<dave_interfaces::msg::BatteryState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DAVE_INTERFACES__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
