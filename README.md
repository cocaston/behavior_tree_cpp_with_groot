# Behavior Tree Demo

这是一个使用BehaviorTree.CPP库实现的行为树演示项目。项目使用Groot创建的XML文件来定义行为树结构。

## 项目结构

```
behaviorTreeDemo/
├── CMakeLists.txt          # CMake构建配置
├── include/                # 头文件目录
│   └── action_nodes.h      # 行为树节点定义
├── src/                    # 源代码目录
│   ├── action_nodes.cpp    # 行为树节点实现
│   └── main.cpp            # 主程序入口
└── trees/                  # 行为树XML文件目录
    └── simple_sequence.xml # Groot创建的行为树定义
```

## 依赖项

- BehaviorTree.CPP (https://github.com/BehaviorTree/BehaviorTree.CPP)
- CMake (>= 3.10.2)
- C++17兼容的编译器

## 安装依赖

### 安装BehaviorTree.CPP

```bash
git clone https://github.com/BehaviorTree/BehaviorTree.CPP.git
cd BehaviorTree.CPP
mkdir build; cd build
cmake ..
make
sudo make install
```

## 构建项目

```bash
mkdir -p build && cd build
cmake ..
make
```

## 运行项目

```bash
./behaviorTreeDemo
```

## 自定义行为树

1. 使用Groot创建或修改行为树XML文件
2. 将XML文件保存到`trees`目录
3. 在`action_nodes.h`和`action_nodes.cpp`中添加新的节点实现
4. 在`action_nodes.cpp`的`RegisterNodes`函数中注册新节点
5. 重新构建并运行项目
