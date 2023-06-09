// Generated by gencpp from file uuv_thruster_manager/GetThrusterCurveResponse.msg
// DO NOT EDIT!


#ifndef UUV_THRUSTER_MANAGER_MESSAGE_GETTHRUSTERCURVERESPONSE_H
#define UUV_THRUSTER_MANAGER_MESSAGE_GETTHRUSTERCURVERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace uuv_thruster_manager
{
template <class ContainerAllocator>
struct GetThrusterCurveResponse_
{
  typedef GetThrusterCurveResponse_<ContainerAllocator> Type;

  GetThrusterCurveResponse_()
    : input()
    , thrust()  {
    }
  GetThrusterCurveResponse_(const ContainerAllocator& _alloc)
    : input(_alloc)
    , thrust(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _input_type;
  _input_type input;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _thrust_type;
  _thrust_type thrust;





  typedef boost::shared_ptr< ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetThrusterCurveResponse_

typedef ::uuv_thruster_manager::GetThrusterCurveResponse_<std::allocator<void> > GetThrusterCurveResponse;

typedef boost::shared_ptr< ::uuv_thruster_manager::GetThrusterCurveResponse > GetThrusterCurveResponsePtr;
typedef boost::shared_ptr< ::uuv_thruster_manager::GetThrusterCurveResponse const> GetThrusterCurveResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator1> & lhs, const ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input &&
    lhs.thrust == rhs.thrust;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator1> & lhs, const ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace uuv_thruster_manager

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "183802edaba8fb9ba8a2d917792277f6";
  }

  static const char* value(const ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x183802edaba8fb9bULL;
  static const uint64_t static_value2 = 0xa8a2d917792277f6ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_thruster_manager/GetThrusterCurveResponse";
  }

  static const char* value(const ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] input\n"
"float64[] thrust\n"
"\n"
;
  }

  static const char* value(const ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
      stream.next(m.thrust);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetThrusterCurveResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_thruster_manager::GetThrusterCurveResponse_<ContainerAllocator>& v)
  {
    s << indent << "input[]" << std::endl;
    for (size_t i = 0; i < v.input.size(); ++i)
    {
      s << indent << "  input[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.input[i]);
    }
    s << indent << "thrust[]" << std::endl;
    for (size_t i = 0; i < v.thrust.size(); ++i)
    {
      s << indent << "  thrust[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.thrust[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_THRUSTER_MANAGER_MESSAGE_GETTHRUSTERCURVERESPONSE_H
