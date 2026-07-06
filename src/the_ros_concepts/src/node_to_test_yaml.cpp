#include <rclcpp/rclcpp.hpp>
using namespace rclcpp;
class NodeToTestYaml : public rclcpp::Node{
public:
    NodeToTestYaml():Node("node_to_test_yaml"){
        declare_parameter<bool>("is_switched");
        declare_parameter<std::vector<std::string>>("joints.names");
        declare_parameter<std::vector<double>>("joints.initials");
        printvales();
    }
    int printvales(){
        try
        {
            is_switched = get_parameter("is_switched").as_bool();
            std::cout<< "is_switched : "<<is_switched<<"\n";
            joints_names = get_parameter("joints.names").as_string_array();
            joints_positions = get_parameter("joints.initials").as_double_array();
            std::cout<<"\n";
            if (joints_names.size() != joints_positions.size()){
                RCLCPP_FATAL(this->get_logger(),"joints and initial positions have size mismatch");
                return 0;
            }
            for(unsigned i=0;i<joints_names.size();i++){
                std::cout<<"joint name is : "<<joints_names[i]<< "\t"<<"initial positions is : "<<joints_positions[i]<<std::endl;
            }
        }
        catch(const std::exception& e)
        {
                std::cerr << e.what() << '\n';
        }
        return 1;
    }


private:
    bool is_switched;
    std::vector<std::string> joints_names{""};
    std::vector<double>  joints_positions{};



};

int main(int argc,char *argv[]){
    
    rclcpp::init(argc,argv);
    auto node = std::make_shared<NodeToTestYaml>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}