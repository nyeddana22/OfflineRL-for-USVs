// Generated by gencpp from file uuv_control_msgs/GetSMControllerParamsResponse.msg
// DO NOT EDIT!


#ifndef UUV_CONTROL_MSGS_MESSAGE_GETSMCONTROLLERPARAMSRESPONSE_H
#define UUV_CONTROL_MSGS_MESSAGE_GETSMCONTROLLERPARAMSRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace uuv_control_msgs
{
template <class ContainerAllocator>
struct GetSMControllerParamsResponse_
{
  typedef GetSMControllerParamsResponse_<ContainerAllocator> Type;

  GetSMControllerParamsResponse_()
    : K()
    , Kd()
    , Ki()
    , slope()  {
    }
  GetSMControllerParamsResponse_(const ContainerAllocator& _alloc)
    : K(_alloc)
    , Kd(_alloc)
    , Ki(_alloc)
    , slope(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _K_type;
  _K_type K;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _Kd_type;
  _Kd_type Kd;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _Ki_type;
  _Ki_type Ki;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _slope_type;
  _slope_type slope;





  typedef boost::shared_ptr< ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetSMControllerParamsResponse_

typedef ::uuv_control_msgs::GetSMControllerParamsResponse_<std::allocator<void> > GetSMControllerParamsResponse;

typedef boost::shared_ptr< ::uuv_control_msgs::GetSMControllerParamsResponse > GetSMControllerParamsResponsePtr;
typedef boost::shared_ptr< ::uuv_control_msgs::GetSMControllerParamsResponse const> GetSMControllerParamsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator1> & lhs, const ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.K == rhs.K &&
    lhs.Kd == rhs.Kd &&
    lhs.Ki == rhs.Ki &&
    lhs.slope == rhs.slope;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator1> & lhs, const ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace uuv_control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dc294c7929e39ce02ce0ce70a116b3b3";
  }

  static const char* value(const ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdc294c7929e39ce0ULL;
  static const uint64_t static_value2 = 0x2ce0ce70a116b3b3ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_control_msgs/GetSMControllerParamsResponse";
  }

  static const char* value(const ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] K\n"
"float64[] Kd\n"
"float64[] Ki\n"
"float64[] slope\n"
"\n"
;
  }

  static const char* value(const ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.K);
      stream.next(m.Kd);
      stream.next(m.Ki);
      stream.next(m.slope);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetSMControllerParamsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_control_msgs::GetSMControllerParamsResponse_<ContainerAllocator>& v)
  {
    s << indent << "K[]" << std::endl;
    for (size_t i = 0; i < v.K.size(); ++i)
    {
      s << indent << "  K[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.K[i]);
    }
    s << indent << "Kd[]" << std::endl;
    for (size_t i = 0; i < v.Kd.size(); ++i)
    {
      s << indent << "  Kd[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.Kd[i]);
    }
    s << indent << "Ki[]" << std::endl;
    for (size_t i = 0; i < v.Ki.size(); ++i)
    {
      s << indent << "  Ki[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.Ki[i]);
    }
    s << indent << "slope[]" << std::endl;
    for (size_t i = 0; i < v.slope.size(); ++i)
    {
      s << indent << "  slope[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.slope[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_CONTROL_MSGS_MESSAGE_GETSMCONTROLLERPARAMSRESPONSE_H
