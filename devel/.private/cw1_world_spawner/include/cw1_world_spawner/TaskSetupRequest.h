// Generated by gencpp from file cw1_world_spawner/TaskSetupRequest.msg
// DO NOT EDIT!


#ifndef CW1_WORLD_SPAWNER_MESSAGE_TASKSETUPREQUEST_H
#define CW1_WORLD_SPAWNER_MESSAGE_TASKSETUPREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cw1_world_spawner
{
template <class ContainerAllocator>
struct TaskSetupRequest_
{
  typedef TaskSetupRequest_<ContainerAllocator> Type;

  TaskSetupRequest_()
    : task_index(0)  {
    }
  TaskSetupRequest_(const ContainerAllocator& _alloc)
    : task_index(0)  {
  (void)_alloc;
    }



   typedef int8_t _task_index_type;
  _task_index_type task_index;





  typedef boost::shared_ptr< ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TaskSetupRequest_

typedef ::cw1_world_spawner::TaskSetupRequest_<std::allocator<void> > TaskSetupRequest;

typedef boost::shared_ptr< ::cw1_world_spawner::TaskSetupRequest > TaskSetupRequestPtr;
typedef boost::shared_ptr< ::cw1_world_spawner::TaskSetupRequest const> TaskSetupRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator1> & lhs, const ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator2> & rhs)
{
  return lhs.task_index == rhs.task_index;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator1> & lhs, const ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cw1_world_spawner

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "713f50eb6979d6bda1389d9b25c308e0";
  }

  static const char* value(const ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x713f50eb6979d6bdULL;
  static const uint64_t static_value2 = 0xa1389d9b25c308e0ULL;
};

template<class ContainerAllocator>
struct DataType< ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cw1_world_spawner/TaskSetupRequest";
  }

  static const char* value(const ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 task_index\n"
;
  }

  static const char* value(const ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.task_index);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TaskSetupRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cw1_world_spawner::TaskSetupRequest_<ContainerAllocator>& v)
  {
    s << indent << "task_index: ";
    Printer<int8_t>::stream(s, indent + "  ", v.task_index);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CW1_WORLD_SPAWNER_MESSAGE_TASKSETUPREQUEST_H