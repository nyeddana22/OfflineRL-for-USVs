// Generated by gencpp from file uuv_control_msgs/InitWaypointSetRequest.msg
// DO NOT EDIT!


#ifndef UUV_CONTROL_MSGS_MESSAGE_INITWAYPOINTSETREQUEST_H
#define UUV_CONTROL_MSGS_MESSAGE_INITWAYPOINTSETREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Time.h>
#include <uuv_control_msgs/Waypoint.h>
#include <std_msgs/String.h>

namespace uuv_control_msgs
{
template <class ContainerAllocator>
struct InitWaypointSetRequest_
{
  typedef InitWaypointSetRequest_<ContainerAllocator> Type;

  InitWaypointSetRequest_()
    : start_time()
    , start_now(false)
    , waypoints()
    , max_forward_speed(0.0)
    , heading_offset(0.0)
    , interpolator()  {
    }
  InitWaypointSetRequest_(const ContainerAllocator& _alloc)
    : start_time(_alloc)
    , start_now(false)
    , waypoints(_alloc)
    , max_forward_speed(0.0)
    , heading_offset(0.0)
    , interpolator(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Time_<ContainerAllocator>  _start_time_type;
  _start_time_type start_time;

   typedef uint8_t _start_now_type;
  _start_now_type start_now;

   typedef std::vector< ::uuv_control_msgs::Waypoint_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::uuv_control_msgs::Waypoint_<ContainerAllocator> >> _waypoints_type;
  _waypoints_type waypoints;

   typedef double _max_forward_speed_type;
  _max_forward_speed_type max_forward_speed;

   typedef double _heading_offset_type;
  _heading_offset_type heading_offset;

   typedef  ::std_msgs::String_<ContainerAllocator>  _interpolator_type;
  _interpolator_type interpolator;





  typedef boost::shared_ptr< ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator> const> ConstPtr;

}; // struct InitWaypointSetRequest_

typedef ::uuv_control_msgs::InitWaypointSetRequest_<std::allocator<void> > InitWaypointSetRequest;

typedef boost::shared_ptr< ::uuv_control_msgs::InitWaypointSetRequest > InitWaypointSetRequestPtr;
typedef boost::shared_ptr< ::uuv_control_msgs::InitWaypointSetRequest const> InitWaypointSetRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator1> & lhs, const ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator2> & rhs)
{
  return lhs.start_time == rhs.start_time &&
    lhs.start_now == rhs.start_now &&
    lhs.waypoints == rhs.waypoints &&
    lhs.max_forward_speed == rhs.max_forward_speed &&
    lhs.heading_offset == rhs.heading_offset &&
    lhs.interpolator == rhs.interpolator;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator1> & lhs, const ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace uuv_control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a1ff84a20694a6c851879f791bb28d61";
  }

  static const char* value(const ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa1ff84a20694a6c8ULL;
  static const uint64_t static_value2 = 0x51879f791bb28d61ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_control_msgs/InitWaypointSetRequest";
  }

  static const char* value(const ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator> >
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
"std_msgs/Time start_time\n"
"bool start_now\n"
"uuv_control_msgs/Waypoint[] waypoints\n"
"float64 max_forward_speed\n"
"float64 heading_offset\n"
"std_msgs/String interpolator\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Time\n"
"time data\n"
"\n"
"================================================================================\n"
"MSG: uuv_control_msgs/Waypoint\n"
"# Copyright (c) 2016 The UUV Simulator Authors.\n"
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
"std_msgs/Header header\n"
"geometry_msgs/Point point\n"
"float64 max_forward_speed\n"
"float64 heading_offset\n"
"bool use_fixed_heading\n"
"float64 radius_of_acceptance\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/String\n"
"string data\n"
;
  }

  static const char* value(const ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.start_time);
      stream.next(m.start_now);
      stream.next(m.waypoints);
      stream.next(m.max_forward_speed);
      stream.next(m.heading_offset);
      stream.next(m.interpolator);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InitWaypointSetRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_control_msgs::InitWaypointSetRequest_<ContainerAllocator>& v)
  {
    s << indent << "start_time: ";
    s << std::endl;
    Printer< ::std_msgs::Time_<ContainerAllocator> >::stream(s, indent + "  ", v.start_time);
    s << indent << "start_now: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.start_now);
    s << indent << "waypoints[]" << std::endl;
    for (size_t i = 0; i < v.waypoints.size(); ++i)
    {
      s << indent << "  waypoints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::uuv_control_msgs::Waypoint_<ContainerAllocator> >::stream(s, indent + "    ", v.waypoints[i]);
    }
    s << indent << "max_forward_speed: ";
    Printer<double>::stream(s, indent + "  ", v.max_forward_speed);
    s << indent << "heading_offset: ";
    Printer<double>::stream(s, indent + "  ", v.heading_offset);
    s << indent << "interpolator: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.interpolator);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_CONTROL_MSGS_MESSAGE_INITWAYPOINTSETREQUEST_H
