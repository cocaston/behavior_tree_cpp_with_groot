cmake_minimum_required(VERSION 3.10.2)
project(behaviorTreeDemo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置库查找路径
set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} "/usr/local")

# 查找BehaviorTree.CPP库
find_package(behaviortree_cpp REQUIRED)

# 添加可执行文件
add_executable(${PROJECT_NAME} 
    src/main.cpp
    src/action_nodes.cpp
)

# 链接BehaviorTree.CPP库
target_link_libraries(${PROJECT_NAME} behaviortree_cpp)

# 包含头文件目录
target_include_directories(${PROJECT_NAME} PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# 复制行为树XML文件到构建目录
file(COPY ${CMAKE_SOURCE_DIR}/trees DESTINATION ${CMAKE_BINARY_DIR})
