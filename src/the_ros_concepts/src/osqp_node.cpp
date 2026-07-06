#include <rclcpp/rclcpp.hpp>
#include "OsqpEigen/OsqpEigen.h"
#include <Eigen/Sparse>
#include<chrono>

class OSQPNode : public rclcpp::Node {
public:
  OSQPNode(double x_robot,double y_robot,double x_object,double y_object) 
  : Node("osqp_example_node") { 
    solution << OsqpEigen::INFTY,OsqpEigen::INFTY; 
    theta_ = OsqpEigen::INFTY;
    this->declare_parameter<double>("radius",0.33);
    constraints_number = 16;
    radius = this->get_parameter("radius").as_double();


    solve_qp_with_linearization(x_robot,y_robot,x_object,y_object);

    //
    
    RCLCPP_INFO(this->get_logger()," the opitmal sol : (%f,%f)",this->solution(0),this->solution(1));
    simple_solve(x_robot,y_robot,x_object,y_object);
    RCLCPP_INFO(this->get_logger()," the opitmal sol non optimization : (%f,%f)",this->solution(0),this->solution(1));
    RCLCPP_INFO(this->get_logger()," the angle is  : %f",this->theta_*180/M_PI);
  }
  void simple_solve(double x_robot,double y_robot,double x_object,double y_object){
      auto distance = sqrt(pow(x_object-x_robot,2)+pow(y_object-y_robot,2));

      theta_ = atan2((y_object-y_robot)/distance,(x_object-x_robot)/distance);

      solution(0) = x_object - radius*(std::cos(theta_));
      solution(1) = y_object - radius*(std::sin(theta_));
  }
  void solve_qp_with_linearization(double x_robot,double y_robot,double x_object,double y_object){


    double x_0 = x_object;
    double y_0 = y_object;
    Eigen::VectorXd X_k(2);
    X_k << x_0,y_0;
    OsqpEigen::Solver solver;
    
    solver.data()->setNumberOfVariables(2);
    solver.data()->setNumberOfConstraints(constraints_number);

    /* define P matrices and q vector for the objective */
    Eigen::SparseMatrix<double> P(2,2);
    P.insert(0, 0) = 2.0; 
    P.insert(1, 1) = 2.0;

    // initialize q matrix
    Eigen::VectorXd q(2);
    q << -2*x_robot, -2*y_robot;

    // set constraints
    Eigen::SparseMatrix<double> A(constraints_number,2);
    std::vector<Eigen::Triplet<double>> A_triplets;

    Eigen::VectorXd l(constraints_number), u(constraints_number);
    for(int i=0;i<constraints_number;++i)
    {
      double theta = 2.0 * M_PI * i / constraints_number;

      double c = std::cos(theta);
      double s = std::sin(theta);

      A_triplets.emplace_back(i,0,c);
      A_triplets.emplace_back(i,1,s);

      l(i) = -OsqpEigen::INFTY;
      u(i) = radius + c*x_object + s*y_object;
   }

    A.setFromTriplets(A_triplets.begin(), A_triplets.end());
    solver.data()->setHessianMatrix(P);
    solver.data()->setGradient(q);
    solver.data()->setLinearConstraintsMatrix(A);
    solver.data()->setLowerBound(l);
    solver.data()->setUpperBound(u);
   

    
    solver.initSolver(); 
    solver.settings()->setWarmStart(true);
    solver.setPrimalVariable(X_k);

    solver.solveProblem();
    solution = solver.getSolution();

  }

private :
  Eigen::Vector2d solution;
  double radius;
  double theta_;
  int constraints_number; 

};
int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<OSQPNode>(20.0,0.0,1000.0,6.0);
  rclcpp::spin_some(node);
  rclcpp::shutdown();
  return 0;
}