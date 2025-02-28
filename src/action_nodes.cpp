#include "action_nodes.h"
#include <iostream>

namespace BehaviorTreeDemo {

Action1Node::Action1Node(const std::string& name)
    : BT::SyncActionNode(name, {})
{
}

BT::NodeStatus Action1Node::tick()
{
    std::cout << "Executing Action1" << std::endl;
    // 在这里实现Action1的具体逻辑
    
    return BT::NodeStatus::SUCCESS;
}

Action2Node::Action2Node(const std::string& name)
    : BT::SyncActionNode(name, {})
{
}

BT::NodeStatus Action2Node::tick()
{
    std::cout << "Executing Action2" << std::endl;
    // 在这里实现Action2的具体逻辑
    
    return BT::NodeStatus::SUCCESS;
}

Action3Node::Action3Node(const std::string& name)
    : BT::SyncActionNode(name, {})
{
}

BT::NodeStatus Action3Node::tick()
{
    std::cout << "Executing Action3" << std::endl;
    // 在这里实现Action3的具体逻辑
    
    return BT::NodeStatus::SUCCESS;
}

ShouldStartActionNode::ShouldStartActionNode(const std::string& name)
    : BT::ConditionNode(name, {})
{
}

BT::NodeStatus ShouldStartActionNode::tick()
{
    std::cout << "Checking condition: shouldStartAction" << std::endl;
    // 在这里实现条件检查的具体逻辑
    // 返回SUCCESS表示条件满足，FAILURE表示条件不满足
    
    // 示例：始终返回SUCCESS
    return BT::NodeStatus::SUCCESS;
}

void RegisterNodes(BT::BehaviorTreeFactory& factory)
{
    factory.registerNodeType<Action1Node>("Action1");
    factory.registerNodeType<Action2Node>("Action2");
    factory.registerNodeType<Action3Node>("Action3");
    factory.registerNodeType<ShouldStartActionNode>("shouldStartAction");
}

} // namespace BehaviorTreeDemo
