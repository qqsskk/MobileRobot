#include <ros/ros.h>
#include <visualization_msgs/Marker.h>
#include <visualization_msgs/MarkerArray.h>
#include <geometry_msgs/Point.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "location_markers");
  ros::NodeHandle n;
  ros::Rate loop_rate(20);
  ros::Publisher marker_pub = n.advertise<visualization_msgs::Marker>("/hri/rviz/visualization_marker", 1);
  std::cout << "Initializing location markers node..." << std::endl;

  geometry_msgs::Point point;
  visualization_msgs::Marker marker;
  float simul_locations[2][7] = {
  { 1, -2.4, -2, 0, -1, -1, -0.5 },
  { 1, 5, 3, 4, 7, 2.5, 7.5 }
  };

  marker.header.frame_id = "map";
  //marker.header.stamp = ros::Time::now();
  marker.ns = "locations";
  marker.type = visualization_msgs::Marker::POINTS;
  //marker.type = visualization_msgs::Marker::SPHERE_LIST;
  marker.action = visualization_msgs::Marker::ADD;


  marker.pose.orientation.x = 0.0;
  marker.pose.orientation.y = 0.0;
  marker.pose.orientation.z = 0.0;
  marker.pose.orientation.w = 1.0;
  marker.scale.x = 0.17;
  marker.scale.y = 0.17;
  marker.scale.z = 0.17;//0.1

  marker.color.r = 0.0f;
  marker.color.g = 1.0f;
  marker.color.b = 0.0f;
  marker.color.a = 1.0;

  marker.lifetime = ros::Duration();


  //int rows =  sizeof simul_locations / sizeof simul_locations[0]; // 2 rows
  int cols = sizeof simul_locations[0] / sizeof(float); // 7 cols
  point.z = 0.035;//0.095

  for(int i=0 ; i < cols ; i++)
  {
    //std::cout << "X: " << simul_locations[0][i] << "   Y: " << simul_locations[1][i] << std::endl;
    marker.id = i;
    point.x = simul_locations[0][i];
    point.y = simul_locations[1][i];
    marker.points.push_back(point);
  }

  /*marker.id = 0;
  point.x = 1;
  point.y = 1;
  point.z = 0.095;
  marker.points.push_back(point);

  marker.id = 1;
  point.x = 2;
  point.y = 2;
  point.z = 0.095;
  marker.points.push_back(point);*/

  //std::vector<int> locations_vector;
  /*std::list<float> locations_x_list;
  std::list<float> locations_y_list;
  locations_x_list.push_back(1.0);
  locations_y_list.push_back(1.0);*/

  while (ros::ok())
  {
    marker.header.frame_id = "map";
    marker_pub.publish(marker);
    ros::spinOnce();
    loop_rate.sleep();
  }
}
