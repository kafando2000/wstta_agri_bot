#include<iostream>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "nav2_msgs/action/navigate_to_pose.hpp"
#include "behaviortree_cpp/behavior_tree.h"
#include <geometry_msgs/msg/point.hpp>
#include "yaml-cpp/yaml.h"
#include "mm_behaviors/utils.hpp"
#include <espeak/speak_lib.h>
#include "tf2/exceptions.h"
#include <tf2/LinearMath/Quaternion.hpp>
#include <tf2/LinearMath/Matrix3x3.h>
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/buffer.h"
#include "tf2_eigen/tf2_eigen.hpp"
#include <moveit/robot_state/conversions.hpp>
#include "geometry_msgs/msg/point_stamped.hpp"
using Pose3D = geometry_msgs::msg::Point;

class  Navigate : public BT::StatefulActionNode{
    public:
        using NavigateToPose = nav2_msgs::action::NavigateToPose;
        using GoalHandleNav = rclcpp_action::ClientGoalHandle<NavigateToPose>;
        // Method overrides
        Navigate(const std::string& name, const BT::NodeConfig& config,const rclcpp::Node::SharedPtr& node_ptr)
        :StatefulActionNode(name,config),node_ptr_{node_ptr} {
             tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->node_ptr_->get_clock());
        }
        // process objects' stations poses to pick
        int get_near_pose_index(std::vector<Pose3D>& t,Pose3D& robot_pose){
            int index = 0;
            TargetPose rob{robot_pose};
            double min = (rob-t.at(0)).norm();
            for(auto k:t){
                auto dist = (rob-k).norm();
                if(min > dist){
                    min = dist;
                    ++index;
                }
            }
            return index;
        }

        BT::NodeStatus onStart() override;

        BT::NodeStatus onRunning() override;

        void onHalted() override;

        static BT::PortsList providedPorts() {
            return { BT::InputPort<std::string>("key"),
            BT::BidirectionalPort<bool>("is_go_to_initials"),
             BT::BidirectionalPort<bool>("is_container_full"),
            BT::InputPort<TargetPose>("base_long_path_pose"),
            BT::InputPort<TargetPose>("base_initial_pose"),
            BT::BidirectionalPort<PlanObjectInfo>("plan_object_info"),
            BT::InputPort<std::vector<Pose3D>>("objects_poses_vect"),
            BT::InputPort<double>("circle_radius"),
            BT::InputPort<TargetPose>("unload_poses"),};

        }

        // Action client callbacks
        void result_callback(const GoalHandleNav::WrappedResult& result);
        
        //bool is_process_ok(std::string key,TargetPose& t,std::string);
        bool check_if_target(TargetPose& t,std::string var_name);
    private:
        TargetPose target_pose;
        double base_orientation;
        std::string key;
        bool is_done;
        
        // where the base should stay to pick object
        TargetPose nav_target_pose;
        TargetPose nav_target_in_odom;
        // the robot current positon
        Pose3D robot_pose_in_map;
        Pose3D robot_pose_in_odom;
        // selected near object
        Pose3D object_pose;
        std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
        std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
        std::string navigation_frame;
        PlanObjectInfo plan_object_info_;
        geometry_msgs::msg::PointStamped object_map_pose;
        // the at most five objects
        std::vector<Pose3D> Objects_poses;
        rclcpp_action::ResultCode nav_result_;
        rclcpp::Node::SharedPtr node_ptr_;
        int index;
        // raduis of reachability
        double radius;
        double theta,theta2, shift_theta,shift_amplitude;
        rclcpp_action::Client<NavigateToPose>::SharedPtr client_ptr_;
        GoalHandleNav::SharedPtr client_goal_handle;
       // std::vector<double>& unload_poses;

};

