// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from trident_msgs:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef TRIDENT_MSGS__MSG__DETAIL__MISSION__TRAITS_HPP_
#define TRIDENT_MSGS__MSG__DETAIL__MISSION__TRAITS_HPP_

#include "trident_msgs/msg/detail/mission__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<trident_msgs::msg::Mission>()
{
  return "trident_msgs::msg::Mission";
}

template<>
inline const char * name<trident_msgs::msg::Mission>()
{
  return "trident_msgs/msg/Mission";
}

template<>
struct has_fixed_size<trident_msgs::msg::Mission>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<trident_msgs::msg::Mission>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<trident_msgs::msg::Mission>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRIDENT_MSGS__MSG__DETAIL__MISSION__TRAITS_HPP_