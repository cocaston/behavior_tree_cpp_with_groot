#ifndef ACTION_NODES_H
#define ACTION_NODES_H

#include <behaviortree_cpp/bt_factory.h>
#include <string>

namespace BehaviorTreeDemo {

/**
 * @brief Action1节点类
 * 
 * 实现行为树中的Action1动作
 */
class Action1Node : public BT::SyncActionNode
{
public:
    /**
     * @brief 构造函数
     * @param name 节点名称
     */
    Action1Node(const std::string& name);

    /**
     * @brief 执行节点动作
     * @return 节点执行状态
     */
    BT::NodeStatus tick() override;
};

/**
 * @brief Action2节点类
 * 
 * 实现行为树中的Action2动作
 */
class Action2Node : public BT::SyncActionNode
{
public:
    /**
     * @brief 构造函数
     * @param name 节点名称
     */
    Action2Node(const std::string& name);

    /**
     * @brief 执行节点动作
     * @return 节点执行状态
     */
    BT::NodeStatus tick() override;
};

/**
 * @brief 条件节点类
 * 
 * 实现行为树中的shouldStartAction条件
 */
class ShouldStartActionNode : public BT::ConditionNode
{
public:
    /**
     * @brief 构造函数
     * @param name 节点名称
     */
    ShouldStartActionNode(const std::string& name);

    /**
     * @brief 执行条件检查
     * @return 条件检查结果
     */
    BT::NodeStatus tick() override;
};

/**
 * @brief 注册自定义节点到行为树工厂
 * 
 * @param factory 行为树工厂实例
 */
void RegisterNodes(BT::BehaviorTreeFactory& factory);

} // namespace BehaviorTreeDemo

#endif // ACTION_NODES_H
