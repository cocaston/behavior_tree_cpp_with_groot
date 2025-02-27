#include <behaviortree_cpp/bt_factory.h>
#include <behaviortree_cpp/loggers/bt_cout_logger.h>
#include <iostream>
#include <memory>
#include "action_nodes.h"

int main(int argc, char* argv[])
{
    // 创建BehaviorTree工厂
    BT::BehaviorTreeFactory factory;

    // 注册自定义节点
    BehaviorTreeDemo::RegisterNodes(factory);

    // 从文件加载行为树
    std::string treeFile = "trees/simple_sequence.xml";
    
    try {
        // 创建行为树
        auto tree = factory.createTreeFromFile(treeFile);
        
        // 创建日志记录器
        BT::StdCoutLogger logger(tree);
        
        std::cout << "Starting BehaviorTree execution..." << std::endl;
        
        // 执行行为树
        BT::NodeStatus status = BT::NodeStatus::RUNNING;
        
        // 循环执行直到树返回SUCCESS或FAILURE
        while (status == BT::NodeStatus::RUNNING) {
            status = tree.tickOnce();
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        
        std::cout << "BehaviorTree execution finished with status: " 
                  << (status == BT::NodeStatus::SUCCESS ? "SUCCESS" : "FAILURE") 
                  << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}
