// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from trident_msgs:action/GotoPose.idl
// generated code does not contain a copyright notice

#ifndef TRIDENT_MSGS__ACTION__DETAIL__GOTO_POSE__STRUCT_HPP_
#define TRIDENT_MSGS__ACTION__DETAIL__GOTO_POSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__trident_msgs__action__GotoPose_Goal __attribute__((deprecated))
#else
# define DEPRECATED__trident_msgs__action__GotoPose_Goal __declspec(deprecated)
#endif

namespace trident_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GotoPose_Goal_
{
  using Type = GotoPose_Goal_<ContainerAllocator>;

  explicit GotoPose_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    (void)_init;
  }

  explicit GotoPose_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trident_msgs::action::GotoPose_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const trident_msgs::action::GotoPose_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trident_msgs::action::GotoPose_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trident_msgs::action::GotoPose_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trident_msgs::action::GotoPose_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trident_msgs::action::GotoPose_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trident_msgs::action::GotoPose_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trident_msgs::action::GotoPose_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trident_msgs::action::GotoPose_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trident_msgs::action::GotoPose_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trident_msgs__action__GotoPose_Goal
    std::shared_ptr<trident_msgs::action::GotoPose_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trident_msgs__action__GotoPose_Goal
    std::shared_ptr<trident_msgs::action::GotoPose_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GotoPose_Goal_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const GotoPose_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GotoPose_Goal_

// alias to use template instance with default allocator
using GotoPose_Goal =
  trident_msgs::action::GotoPose_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace trident_msgs


// Include directives for member types
// Member 'delta_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__trident_msgs__action__GotoPose_Result __attribute__((deprecated))
#else
# define DEPRECATED__trident_msgs__action__GotoPose_Result __declspec(deprecated)
#endif

namespace trident_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GotoPose_Result_
{
  using Type = GotoPose_Result_<ContainerAllocator>;

  explicit GotoPose_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : delta_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->message = "";
      this->distance_to_goal = 0.0;
    }
  }

  explicit GotoPose_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    delta_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->message = "";
      this->distance_to_goal = 0.0;
    }
  }

  // field types and members
  using _status_type =
    int16_t;
  _status_type status;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;
  using _delta_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _delta_pose_type delta_pose;
  using _distance_to_goal_type =
    double;
  _distance_to_goal_type distance_to_goal;

  // setters for named parameter idiom
  Type & set__status(
    const int16_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__delta_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->delta_pose = _arg;
    return *this;
  }
  Type & set__distance_to_goal(
    const double & _arg)
  {
    this->distance_to_goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trident_msgs::action::GotoPose_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const trident_msgs::action::GotoPose_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trident_msgs::action::GotoPose_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trident_msgs::action::GotoPose_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trident_msgs::action::GotoPose_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trident_msgs::action::GotoPose_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trident_msgs::action::GotoPose_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trident_msgs::action::GotoPose_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trident_msgs::action::GotoPose_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trident_msgs::action::GotoPose_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trident_msgs__action__GotoPose_Result
    std::shared_ptr<trident_msgs::action::GotoPose_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trident_msgs__action__GotoPose_Result
    std::shared_ptr<trident_msgs::action::GotoPose_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GotoPose_Result_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->delta_pose != other.delta_pose) {
      return false;
    }
    if (this->distance_to_goal != other.distance_to_goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GotoPose_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GotoPose_Result_

// alias to use template instance with default allocator
using GotoPose_Result =
  trident_msgs::action::GotoPose_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace trident_msgs


// Include directives for member types
// Member 'delta_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__trident_msgs__action__GotoPose_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__trident_msgs__action__GotoPose_Feedback __declspec(deprecated)
#endif

namespace trident_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GotoPose_Feedback_
{
  using Type = GotoPose_Feedback_<ContainerAllocator>;

  explicit GotoPose_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : delta_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->message = "";
      this->distance_to_goal = 0.0;
    }
  }

  explicit GotoPose_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    delta_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->message = "";
      this->distance_to_goal = 0.0;
    }
  }

  // field types and members
  using _status_type =
    int16_t;
  _status_type status;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;
  using _delta_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _delta_pose_type delta_pose;
  using _distance_to_goal_type =
    double;
  _distance_to_goal_type distance_to_goal;

  // setters for named parameter idiom
  Type & set__status(
    const int16_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__delta_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->delta_pose = _arg;
    return *this;
  }
  Type & set__distance_to_goal(
    const double & _arg)
  {
    this->distance_to_goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trident_msgs::action::GotoPose_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const trident_msgs::action::GotoPose_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trident_msgs::action::GotoPose_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trident_msgs::action::GotoPose_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trident_msgs::action::GotoPose_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trident_msgs::action::GotoPose_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trident_msgs::action::GotoPose_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trident_msgs::action::GotoPose_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trident_msgs::action::GotoPose_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trident_msgs::action::GotoPose_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trident_msgs__action__GotoPose_Feedback
    std::shared_ptr<trident_msgs::action::GotoPose_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trident_msgs__action__GotoPose_Feedback
    std::shared_ptr<trident_msgs::action::GotoPose_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GotoPose_Feedback_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->delta_pose != other.delta_pose) {
      return false;
    }
    if (this->distance_to_goal != other.distance_to_goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GotoPose_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GotoPose_Feedback_

// alias to use template instance with default allocator
using GotoPose_Feedback =
  trident_msgs::action::GotoPose_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace trident_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "trident_msgs/action/detail/goto_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__trident_msgs__action__GotoPose_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__trident_msgs__action__GotoPose_SendGoal_Request __declspec(deprecated)
#endif

namespace trident_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GotoPose_SendGoal_Request_
{
  using Type = GotoPose_SendGoal_Request_<ContainerAllocator>;

  explicit GotoPose_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GotoPose_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    trident_msgs::action::GotoPose_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const trident_msgs::action::GotoPose_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trident_msgs::action::GotoPose_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const trident_msgs::action::GotoPose_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trident_msgs::action::GotoPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trident_msgs::action::GotoPose_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trident_msgs::action::GotoPose_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trident_msgs::action::GotoPose_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trident_msgs::action::GotoPose_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trident_msgs::action::GotoPose_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trident_msgs::action::GotoPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trident_msgs::action::GotoPose_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trident_msgs__action__GotoPose_SendGoal_Request
    std::shared_ptr<trident_msgs::action::GotoPose_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trident_msgs__action__GotoPose_SendGoal_Request
    std::shared_ptr<trident_msgs::action::GotoPose_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GotoPose_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GotoPose_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GotoPose_SendGoal_Request_

// alias to use template instance with default allocator
using GotoPose_SendGoal_Request =
  trident_msgs::action::GotoPose_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace trident_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__trident_msgs__action__GotoPose_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__trident_msgs__action__GotoPose_SendGoal_Response __declspec(deprecated)
#endif

namespace trident_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GotoPose_SendGoal_Response_
{
  using Type = GotoPose_SendGoal_Response_<ContainerAllocator>;

  explicit GotoPose_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GotoPose_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trident_msgs::action::GotoPose_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const trident_msgs::action::GotoPose_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trident_msgs::action::GotoPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trident_msgs::action::GotoPose_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trident_msgs::action::GotoPose_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trident_msgs::action::GotoPose_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trident_msgs::action::GotoPose_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trident_msgs::action::GotoPose_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trident_msgs::action::GotoPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trident_msgs::action::GotoPose_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trident_msgs__action__GotoPose_SendGoal_Response
    std::shared_ptr<trident_msgs::action::GotoPose_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trident_msgs__action__GotoPose_SendGoal_Response
    std::shared_ptr<trident_msgs::action::GotoPose_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GotoPose_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GotoPose_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GotoPose_SendGoal_Response_

// alias to use template instance with default allocator
using GotoPose_SendGoal_Response =
  trident_msgs::action::GotoPose_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace trident_msgs

namespace trident_msgs
{

namespace action
{

struct GotoPose_SendGoal
{
  using Request = trident_msgs::action::GotoPose_SendGoal_Request;
  using Response = trident_msgs::action::GotoPose_SendGoal_Response;
};

}  // namespace action

}  // namespace trident_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__trident_msgs__action__GotoPose_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__trident_msgs__action__GotoPose_GetResult_Request __declspec(deprecated)
#endif

namespace trident_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GotoPose_GetResult_Request_
{
  using Type = GotoPose_GetResult_Request_<ContainerAllocator>;

  explicit GotoPose_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GotoPose_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trident_msgs::action::GotoPose_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const trident_msgs::action::GotoPose_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trident_msgs::action::GotoPose_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trident_msgs::action::GotoPose_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trident_msgs::action::GotoPose_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trident_msgs::action::GotoPose_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trident_msgs::action::GotoPose_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trident_msgs::action::GotoPose_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trident_msgs::action::GotoPose_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trident_msgs::action::GotoPose_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trident_msgs__action__GotoPose_GetResult_Request
    std::shared_ptr<trident_msgs::action::GotoPose_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trident_msgs__action__GotoPose_GetResult_Request
    std::shared_ptr<trident_msgs::action::GotoPose_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GotoPose_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GotoPose_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GotoPose_GetResult_Request_

// alias to use template instance with default allocator
using GotoPose_GetResult_Request =
  trident_msgs::action::GotoPose_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace trident_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "trident_msgs/action/detail/goto_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__trident_msgs__action__GotoPose_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__trident_msgs__action__GotoPose_GetResult_Response __declspec(deprecated)
#endif

namespace trident_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GotoPose_GetResult_Response_
{
  using Type = GotoPose_GetResult_Response_<ContainerAllocator>;

  explicit GotoPose_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GotoPose_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    trident_msgs::action::GotoPose_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const trident_msgs::action::GotoPose_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trident_msgs::action::GotoPose_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const trident_msgs::action::GotoPose_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trident_msgs::action::GotoPose_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trident_msgs::action::GotoPose_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trident_msgs::action::GotoPose_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trident_msgs::action::GotoPose_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trident_msgs::action::GotoPose_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trident_msgs::action::GotoPose_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trident_msgs::action::GotoPose_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trident_msgs::action::GotoPose_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trident_msgs__action__GotoPose_GetResult_Response
    std::shared_ptr<trident_msgs::action::GotoPose_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trident_msgs__action__GotoPose_GetResult_Response
    std::shared_ptr<trident_msgs::action::GotoPose_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GotoPose_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GotoPose_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GotoPose_GetResult_Response_

// alias to use template instance with default allocator
using GotoPose_GetResult_Response =
  trident_msgs::action::GotoPose_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace trident_msgs

namespace trident_msgs
{

namespace action
{

struct GotoPose_GetResult
{
  using Request = trident_msgs::action::GotoPose_GetResult_Request;
  using Response = trident_msgs::action::GotoPose_GetResult_Response;
};

}  // namespace action

}  // namespace trident_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "trident_msgs/action/detail/goto_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__trident_msgs__action__GotoPose_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__trident_msgs__action__GotoPose_FeedbackMessage __declspec(deprecated)
#endif

namespace trident_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GotoPose_FeedbackMessage_
{
  using Type = GotoPose_FeedbackMessage_<ContainerAllocator>;

  explicit GotoPose_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GotoPose_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    trident_msgs::action::GotoPose_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const trident_msgs::action::GotoPose_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trident_msgs::action::GotoPose_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const trident_msgs::action::GotoPose_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trident_msgs::action::GotoPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trident_msgs::action::GotoPose_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trident_msgs::action::GotoPose_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trident_msgs::action::GotoPose_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trident_msgs::action::GotoPose_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trident_msgs::action::GotoPose_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trident_msgs::action::GotoPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trident_msgs::action::GotoPose_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trident_msgs__action__GotoPose_FeedbackMessage
    std::shared_ptr<trident_msgs::action::GotoPose_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trident_msgs__action__GotoPose_FeedbackMessage
    std::shared_ptr<trident_msgs::action::GotoPose_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GotoPose_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GotoPose_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GotoPose_FeedbackMessage_

// alias to use template instance with default allocator
using GotoPose_FeedbackMessage =
  trident_msgs::action::GotoPose_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace trident_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace trident_msgs
{

namespace action
{

struct GotoPose
{
  /// The goal message defined in the action definition.
  using Goal = trident_msgs::action::GotoPose_Goal;
  /// The result message defined in the action definition.
  using Result = trident_msgs::action::GotoPose_Result;
  /// The feedback message defined in the action definition.
  using Feedback = trident_msgs::action::GotoPose_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = trident_msgs::action::GotoPose_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = trident_msgs::action::GotoPose_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = trident_msgs::action::GotoPose_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GotoPose GotoPose;

}  // namespace action

}  // namespace trident_msgs

#endif  // TRIDENT_MSGS__ACTION__DETAIL__GOTO_POSE__STRUCT_HPP_
