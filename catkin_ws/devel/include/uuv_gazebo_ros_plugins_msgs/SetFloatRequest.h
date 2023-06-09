// Generated by gencpp from file uuv_gazebo_ros_plugins_msgs/SetFloatRequest.msg
// DO NOT EDIT!


#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_SETFLOATREQUEST_H
#define UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_SETFLOATREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace uuv_gazebo_ros_plugins_msgs
{
template <class ContainerAllocator>
struct SetFloatRequest_
{
  typedef SetFloatRequest_<ContainerAllocator> Type;

  SetFloatRequest_()
    : data(0.0)  {
    }
  SetFloatRequest_(const ContainerAllocator& _alloc)
    : data(0.0)  {
  (void)_alloc;
    }



   typedef double _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetFloatRequest_

typedef ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<std::allocator<void> > SetFloatRequest;

typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest > SetFloatRequestPtr;
typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest const> SetFloatRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator1> & lhs, const ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator1> & lhs, const ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace uuv_gazebo_ros_plugins_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fdb28210bfa9d7c91146260178d9a584";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfdb28210bfa9d7c9ULL;
  static const uint64_t static_value2 = 0x1146260178d9a584ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_gazebo_ros_plugins_msgs/SetFloatRequest";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright (c) 2016 The UUV Simulator Authors.\n"
"# All rights reserved.\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#     http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"float64 data\n"
;
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetFloatRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<double>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_SETFLOATREQUEST_H
