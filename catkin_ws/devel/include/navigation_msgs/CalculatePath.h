// Generated by gencpp from file navigation_msgs/CalculatePath.msg
// DO NOT EDIT!


#ifndef NAVIGATION_MSGS_MESSAGE_CALCULATEPATH_H
#define NAVIGATION_MSGS_MESSAGE_CALCULATEPATH_H

#include <ros/service_traits.h>


#include <navigation_msgs/CalculatePathRequest.h>
#include <navigation_msgs/CalculatePathResponse.h>


namespace navigation_msgs
{

struct CalculatePath
{

typedef CalculatePathRequest Request;
typedef CalculatePathResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CalculatePath
} // namespace navigation_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::navigation_msgs::CalculatePath > {
  static const char* value()
  {
    return "d2d67a7b3113d6cff0dbdc8eda5ddb01";
  }

  static const char* value(const ::navigation_msgs::CalculatePath&) { return value(); }
};

template<>
struct DataType< ::navigation_msgs::CalculatePath > {
  static const char* value()
  {
    return "navigation_msgs/CalculatePath";
  }

  static const char* value(const ::navigation_msgs::CalculatePath&) { return value(); }
};


// service_traits::MD5Sum< ::navigation_msgs::CalculatePathRequest> should match 
// service_traits::MD5Sum< ::navigation_msgs::CalculatePath > 
template<>
struct MD5Sum< ::navigation_msgs::CalculatePathRequest>
{
  static const char* value()
  {
    return MD5Sum< ::navigation_msgs::CalculatePath >::value();
  }
  static const char* value(const ::navigation_msgs::CalculatePathRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::navigation_msgs::CalculatePathRequest> should match 
// service_traits::DataType< ::navigation_msgs::CalculatePath > 
template<>
struct DataType< ::navigation_msgs::CalculatePathRequest>
{
  static const char* value()
  {
    return DataType< ::navigation_msgs::CalculatePath >::value();
  }
  static const char* value(const ::navigation_msgs::CalculatePathRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::navigation_msgs::CalculatePathResponse> should match 
// service_traits::MD5Sum< ::navigation_msgs::CalculatePath > 
template<>
struct MD5Sum< ::navigation_msgs::CalculatePathResponse>
{
  static const char* value()
  {
    return MD5Sum< ::navigation_msgs::CalculatePath >::value();
  }
  static const char* value(const ::navigation_msgs::CalculatePathResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::navigation_msgs::CalculatePathResponse> should match 
// service_traits::DataType< ::navigation_msgs::CalculatePath > 
template<>
struct DataType< ::navigation_msgs::CalculatePathResponse>
{
  static const char* value()
  {
    return DataType< ::navigation_msgs::CalculatePath >::value();
  }
  static const char* value(const ::navigation_msgs::CalculatePathResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NAVIGATION_MSGS_MESSAGE_CALCULATEPATH_H