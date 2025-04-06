// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dave_interfaces:srv/Say.idl
// generated code does not contain a copyright notice

#ifndef DAVE_INTERFACES__SRV__DETAIL__SAY__STRUCT_HPP_
#define DAVE_INTERFACES__SRV__DETAIL__SAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dave_interfaces__srv__Say_Request __attribute__((deprecated))
#else
# define DEPRECATED__dave_interfaces__srv__Say_Request __declspec(deprecated)
#endif

namespace dave_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Say_Request_
{
  using Type = Say_Request_<ContainerAllocator>;

  explicit Say_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->saystring = "";
    }
  }

  explicit Say_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : saystring(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->saystring = "";
    }
  }

  // field types and members
  using _saystring_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _saystring_type saystring;

  // setters for named parameter idiom
  Type & set__saystring(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->saystring = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dave_interfaces::srv::Say_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dave_interfaces::srv::Say_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dave_interfaces::srv::Say_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dave_interfaces::srv::Say_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::srv::Say_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::srv::Say_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::srv::Say_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::srv::Say_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dave_interfaces::srv::Say_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dave_interfaces::srv::Say_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dave_interfaces__srv__Say_Request
    std::shared_ptr<dave_interfaces::srv::Say_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dave_interfaces__srv__Say_Request
    std::shared_ptr<dave_interfaces::srv::Say_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Say_Request_ & other) const
  {
    if (this->saystring != other.saystring) {
      return false;
    }
    return true;
  }
  bool operator!=(const Say_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Say_Request_

// alias to use template instance with default allocator
using Say_Request =
  dave_interfaces::srv::Say_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dave_interfaces


#ifndef _WIN32
# define DEPRECATED__dave_interfaces__srv__Say_Response __attribute__((deprecated))
#else
# define DEPRECATED__dave_interfaces__srv__Say_Response __declspec(deprecated)
#endif

namespace dave_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Say_Response_
{
  using Type = Say_Response_<ContainerAllocator>;

  explicit Say_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->spoken = false;
    }
  }

  explicit Say_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->spoken = false;
    }
  }

  // field types and members
  using _spoken_type =
    bool;
  _spoken_type spoken;

  // setters for named parameter idiom
  Type & set__spoken(
    const bool & _arg)
  {
    this->spoken = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dave_interfaces::srv::Say_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dave_interfaces::srv::Say_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dave_interfaces::srv::Say_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dave_interfaces::srv::Say_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::srv::Say_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::srv::Say_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::srv::Say_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::srv::Say_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dave_interfaces::srv::Say_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dave_interfaces::srv::Say_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dave_interfaces__srv__Say_Response
    std::shared_ptr<dave_interfaces::srv::Say_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dave_interfaces__srv__Say_Response
    std::shared_ptr<dave_interfaces::srv::Say_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Say_Response_ & other) const
  {
    if (this->spoken != other.spoken) {
      return false;
    }
    return true;
  }
  bool operator!=(const Say_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Say_Response_

// alias to use template instance with default allocator
using Say_Response =
  dave_interfaces::srv::Say_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dave_interfaces

namespace dave_interfaces
{

namespace srv
{

struct Say
{
  using Request = dave_interfaces::srv::Say_Request;
  using Response = dave_interfaces::srv::Say_Response;
};

}  // namespace srv

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__SRV__DETAIL__SAY__STRUCT_HPP_
