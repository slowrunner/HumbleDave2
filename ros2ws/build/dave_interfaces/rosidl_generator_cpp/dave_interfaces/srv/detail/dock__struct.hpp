// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dave_interfaces:srv/Dock.idl
// generated code does not contain a copyright notice

#ifndef DAVE_INTERFACES__SRV__DETAIL__DOCK__STRUCT_HPP_
#define DAVE_INTERFACES__SRV__DETAIL__DOCK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dave_interfaces__srv__Dock_Request __attribute__((deprecated))
#else
# define DEPRECATED__dave_interfaces__srv__Dock_Request __declspec(deprecated)
#endif

namespace dave_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Dock_Request_
{
  using Type = Dock_Request_<ContainerAllocator>;

  explicit Dock_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Dock_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    dave_interfaces::srv::Dock_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dave_interfaces::srv::Dock_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dave_interfaces::srv::Dock_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dave_interfaces::srv::Dock_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::srv::Dock_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::srv::Dock_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::srv::Dock_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::srv::Dock_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dave_interfaces::srv::Dock_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dave_interfaces::srv::Dock_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dave_interfaces__srv__Dock_Request
    std::shared_ptr<dave_interfaces::srv::Dock_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dave_interfaces__srv__Dock_Request
    std::shared_ptr<dave_interfaces::srv::Dock_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dock_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dock_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dock_Request_

// alias to use template instance with default allocator
using Dock_Request =
  dave_interfaces::srv::Dock_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dave_interfaces


#ifndef _WIN32
# define DEPRECATED__dave_interfaces__srv__Dock_Response __attribute__((deprecated))
#else
# define DEPRECATED__dave_interfaces__srv__Dock_Response __declspec(deprecated)
#endif

namespace dave_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Dock_Response_
{
  using Type = Dock_Response_<ContainerAllocator>;

  explicit Dock_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_docked = false;
      this->is_charging = false;
      this->success = false;
    }
  }

  explicit Dock_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_docked = false;
      this->is_charging = false;
      this->success = false;
    }
  }

  // field types and members
  using _is_docked_type =
    bool;
  _is_docked_type is_docked;
  using _is_charging_type =
    bool;
  _is_charging_type is_charging;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__is_docked(
    const bool & _arg)
  {
    this->is_docked = _arg;
    return *this;
  }
  Type & set__is_charging(
    const bool & _arg)
  {
    this->is_charging = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dave_interfaces::srv::Dock_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dave_interfaces::srv::Dock_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dave_interfaces::srv::Dock_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dave_interfaces::srv::Dock_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::srv::Dock_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::srv::Dock_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::srv::Dock_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::srv::Dock_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dave_interfaces::srv::Dock_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dave_interfaces::srv::Dock_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dave_interfaces__srv__Dock_Response
    std::shared_ptr<dave_interfaces::srv::Dock_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dave_interfaces__srv__Dock_Response
    std::shared_ptr<dave_interfaces::srv::Dock_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dock_Response_ & other) const
  {
    if (this->is_docked != other.is_docked) {
      return false;
    }
    if (this->is_charging != other.is_charging) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dock_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dock_Response_

// alias to use template instance with default allocator
using Dock_Response =
  dave_interfaces::srv::Dock_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dave_interfaces

namespace dave_interfaces
{

namespace srv
{

struct Dock
{
  using Request = dave_interfaces::srv::Dock_Request;
  using Response = dave_interfaces::srv::Dock_Response;
};

}  // namespace srv

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__SRV__DETAIL__DOCK__STRUCT_HPP_
