# CPP-Autonomous-Driving-Training
### 3.1 C++基础快速回顾（2周）

**学习目标**：巩固C++核心语法，重点掌握指针、引用、内存管理

| 模块       | 学习内容                       | 资源链接                                                     | 练习要求               |
| ---------- | ------------------------------ | ------------------------------------------------------------ | ---------------------- |
| 基础语法   | 变量、数据类型、运算符、控制流 | [菜鸟教程-C++](https://www.runoob.com/cplusplus/cpp-tutorial.html) | 完成所有示例代码       |
| 指针与引用 | 指针运算、引用、智能指针初步   | [C语言指针详解](https://www.bilibili.com/video/BV1Mb4y1X7dz) | 手写链表实现           |
| 面向对象   | 类、继承、多态、虚函数         | [黑马程序员C++](https://www.bilibili.com/video/BV1et411b73Z) | 实现一个简单的类库     |
| 内存管理   | new/delete、内存泄漏、RAII     | 《Effective C++》第1-3章                                     | 用Valgrind检测内存问题 |

**每日练习**：

- 每天手写1道基础编程题（从[牛客网C++专项](https://www.nowcoder.com/exam/oj?page=1&tab=%E8%AF%AD%E6%B3%95%E7%AF%87&topicId=290)选取）
- 使用[cppreference](https://zh.cppreference.com/)查阅API

### 3.2 现代C++核心特性（4周）⭐重点

自动驾驶代码库大量使用C++11/14/17特性，必须掌握！

| 特性                    | 重要性 | 学习资源                                                     | 实战练习                        |
| ----------------------- | ------ | ------------------------------------------------------------ | ------------------------------- |
| **auto/decltype**       | ⭐⭐⭐    | [现代C++教程](https://changkun.de/modern-cpp/)               | 重构旧代码使用auto              |
| **右值引用与移动语义**  | ⭐⭐⭐⭐⭐  | [C++11右值引用](https://blog.csdn.net/qq_36631379/article/details/110728643) | 实现移动构造函数                |
| **Lambda表达式**        | ⭐⭐⭐⭐   | [Lambda详解](https://www.bilibili.com/video/BV1AX4y1u7ez)    | 用Lambda改写回调函数            |
| **智能指针**            | ⭐⭐⭐⭐⭐  | [智能指针最佳实践](https://github.com/Light-City/CPlusPlusThings) | 用shared_ptr/unique_ptr管理资源 |
| **STL容器与算法**       | ⭐⭐⭐⭐⭐  | [STL源码剖析](https://www.bilibili.com/video/BV1KW411t7Nc)   | 实现自定义容器迭代器            |
| **多线程与并发**        | ⭐⭐⭐⭐   | C++11 thread库                                               | 实现生产者消费者模型            |
| **constexpr/consteval** | ⭐⭐⭐    | [constexpr详解](https://blog.csdn.net/ComputerInBook/article/details/161080488) | 编译期计算优化                  |

**推荐学习资料**：

- 📚 《C++ Primer 第5版》（重点看C++11部分）
- 📚 《Effective Modern C++》（必读！）
- 🌐 [现代C++教程-开源电子书](https://github.com/changkun/modern-cpp-tutorial)
- 🌐 [CPlusPlusThings-实战代码](https://github.com/Light-City/CPlusPlusThings)

**阶段测试**：

- 完成[C++新特性测试题](https://www.nowcoder.com/exam/oj?page=1&tab=%E8%AF%AD%E6%B3%95%E7%AF%87&topicId=290)
- 手写一个线程安全的单例模式（使用现代C++特性）

---

## 四、第二阶段：数据结构与算法（第3-4月）

### 4.1 核心数据结构（2周）

自动驾驶面试必考！

| 数据结构  | 重点掌握           | LeetCode题号      | 难度        |
| --------- | ------------------ | ----------------- | ----------- |
| 数组/向量 | 动态扩容、内存布局 | 1, 11, 15, 238    | Easy-Medium |
| 链表      | 反转、合并、环检测 | 21, 206, 141, 142 | Easy-Medium |
| 栈/队列   | 单调栈、优先队列   | 20, 155, 239, 739 | Medium      |
| 哈希表    | 冲突解决、扩容     | 1, 3, 49, 128     | Easy-Medium |
| 二叉树    | 遍历、递归/非递归  | 94, 104, 226, 543 | Easy-Medium |
| 堆        | 堆排序、TopK问题   | 215, 347, 23      | Medium-Hard |
| 图        | BFS/DFS、最短路径  | 207, 210, 133     | Medium      |

### 4.2 核心算法（2周）

| 算法类型 | 必会内容           | 经典题目           | 自动驾驶应用场景     |
| -------- | ------------------ | ------------------ | -------------------- |
| 排序     | 快排、归并、堆排   | 912, 148           | 点云数据排序         |
| 二分查找 | 边界处理、变形     | 33, 34, 153        | 传感器数据查找       |
| 双指针   | 滑动窗口、快慢指针 | 3, 76, 424         | 图像处理窗口滑动     |
| BFS/DFS  | 图遍历、回溯       | 200, 695, 79       | 路径规划、连通域检测 |
| 动态规划 | 背包、序列DP       | 70, 198, 300, 1143 | 轨迹优化             |
| 贪心算法 | 区间问题、调度     | 435, 452, 56       | 任务调度优化         |

### 4.3 LeetCode刷题计划

**刷题策略**：

- 📅 每日3-5题（周末加量）
- 🎯 优先刷「剑指Offer」+「LeetCode Hot 100」
- 📝 每道题用C++手写，本地IDE调试
- 💾 建立GitHub刷题仓库，记录题解

**推荐题单**：

1. [剑指Offer（C++版）](https://leetcode.cn/studyplan/coding-interviews)
2. [LeetCode Hot 100](https://leetcode.cn/studyplan/top-100-liked)
3. [程序员面试金典](https://leetcode.cn/studyplan/cracking-the-coding-interview)

**自动驾驶专项算法题**：

- 矩阵旋转（图像处理）
- 最近点对（点云处理）
- 区间合并（障碍物检测）
- 最小覆盖子串（滑动窗口应用）

---

## 五、第三阶段：自动驾驶工具链实战（第5-6月）⭐核心

### 5.1 CMake构建系统（1周）

**为什么学**：自动驾驶项目都用CMake管理，面试必问！

| 知识点   | 学习内容                       | 资源链接                                                     |
| -------- | ------------------------------ | ------------------------------------------------------------ |
| 基础语法 | CMakeLists.txt结构、变量、函数 | [CMake入门教程](http://m.toutiao.com/group/7626969501715792425/) |
| 库管理   | 查找库、链接库、安装           | [CMake构建C++项目](https://m.php.cn/faq/1860218.html)        |
| 多模块   | 子目录、接口库、目标属性       | [CMake进阶](https://m.php.cn/faq/1937900.html)               |
| 实战     | 构建OpenCV/Eigen项目           | 官方文档                                                     |

**实战任务**：

- 用CMake构建一个多模块C++项目
- 集成第三方库（OpenCV、Eigen）
- 编写FindXXX.cmake模块

### 5.2 OpenCV计算机视觉（2周）

**为什么学**：感知算法的核心工具库

| 模块     | 重点内容                    | 学习资源                                                     |
| -------- | --------------------------- | ------------------------------------------------------------ |
| 图像基础 | Mat对象、像素操作、颜色空间 | [OpenCV官方文档](https://m.w3cschool.cn/opencv/opencv)       |
| 图像处理 | 滤波、边缘检测、形态学      | [OpenCV C++教程](https://blog.csdn.net/qq_39281631/article/details/148267164) |
| 特征检测 | SIFT、ORB、特征匹配         | [OpenCV计算机视觉基础](https://blog.csdn.net/andyyah/article/details/148825969) |
| 目标检测 | Haar、HOG、DNN模块          | 官方示例代码                                                 |
| 相机标定 | 内参外参、畸变校正          | 官方教程                                                     |

**实战项目**：

1. 实现一个车道线检测程序（C++）
2. 实现目标跟踪（KCF/CSRT算法）
3. 相机标定工具

**学习资源**：

- 📚 《学习OpenCV 3》
- 🌐 [OpenCV官方文档](https://docs.opencv.org/)
- 🎬 [OpenCV C++实战](https://www.bilibili.com/video/BV1PV411774r)

### 5.3 PCL点云库（2周）⭐自动驾驶核心

**为什么学**：激光雷达数据处理必备！

| 模块     | 重点内容                     | 学习资源                                                     |
| -------- | ---------------------------- | ------------------------------------------------------------ |
| 点云基础 | PointCloud、点云读写、可视化 | [PCL教程](https://getiot.tech/pcl/)                          |
| 滤波     | 直通滤波、体素滤波、统计滤波 | [PCL点云滤波](https://blog.csdn.net/qq_41545537/article/details/121232291) |
| 分割     | 平面分割、聚类分割、区域生长 | [PCL编程笔记](https://blog.csdn.net/BTChioa/article/details/120024976) |
| 配准     | ICP、NDT配准                 | 官方教程                                                     |
| 特征     | FPFH、SHOT特征提取           | 官方示例                                                     |

**实战项目**：

1. 点云滤波与下采样
2. 地面分割（RANSAC平面拟合）
3. 点云聚类（欧几里得聚类）
4. 点云配准（ICP算法实现）

**学习资源**：

- 📚 《点云库PCL学习教程》
- 🌐 [PCL官方文档](https://pointclouds.org/documentation/)
- 🌐 [PCL安装与入门](https://blog.csdn.net/m0_37603703/article/details/150543529)

### 5.4 Eigen矩阵运算（1周）

**为什么学**：自动驾驶算法大量用到线性代数运算

| 知识点   | 内容                     | 资源                                                         |
| -------- | ------------------------ | ------------------------------------------------------------ |
| 矩阵向量 | Matrix、Vector、运算     | [Eigen官方文档](http://eigen.tuxfamily.org/)                 |
| 几何变换 | 旋转矩阵、四元数、欧拉角 | 官方教程                                                     |
| 线性方程 | 求解器、最小二乘         | 官方示例                                                     |
| 性能优化 | 表达式模板、SIMD         | [Eigen性能优化](http://m.toutiao.com/group/7618187480403100198/) |

**实战任务**：

- 实现坐标变换（相机到世界坐标系）
- 实现最小二乘直线拟合
- 实现卡尔曼滤波（Eigen版本）

### 5.5 ROS/ROS2（2周）⭐必须掌握

**为什么学**：自动驾驶系统通信框架

| 模块     | 内容                   | 资源                                                         |
| -------- | ---------------------- | ------------------------------------------------------------ |
| ROS基础  | 节点、话题、服务、参数 | [ROS2 C++指南](http://m.toutiao.com/group/7635379528910586403/) |
| 消息定义 | 自定义消息、传感器消息 | [ROS2 Service示例](https://blog.csdn.net/rayso9898/article/details/151970776) |
| 工具链   | RViz、rqt、rosbag      | 官方教程                                                     |
| 实战     | 发布/订阅传感器数据    | [ROS C++入门](https://blog.csdn.net/qq_45954434/article/details/114047162) |

**实战项目**：

1. 发布虚拟点云数据并在RViz中显示
2. 实现一个简单的感知节点（订阅相机+发布检测结果）
3. 录制和回放bag文件

**学习资源**：

- 📚 《ROS机器人程序设计》
- 🌐 [ROS2官方文档](https://docs.ros.org/en/humble/)
- 🎬 [ROS智能车自动驾驶](https://blog.csdn.net/akaxi1/article/details/138321067)

---

## 六、综合实战项目（贯穿第5-6月）

### 项目1：车道线检测系统（C++实现）

**技术栈**：OpenCV + C++11

**功能**：

- 图像预处理（灰度化、高斯滤波、边缘检测）
- 霍夫变换检测直线
- 车道线拟合与跟踪
- 实时视频处理

**代码要求**：

- 使用现代C++特性（智能指针、Lambda）
- CMake构建
- 单元测试

### 项目2：点云障碍物检测（C++实现）

**技术栈**：PCL + Eigen + C++14

**功能**：

- 点云滤波（体素滤波）
- 地面分割（RANSAC）
- 聚类分割（欧几里得聚类）
- 障碍物框选与可视化

**代码要求**：

- 模块化设计
- 多线程处理
- 性能优化

### 项目3：简单感知节点（ROS2 + C++）

**技术栈**：ROS2 + OpenCV + C++17

**功能**：

- 订阅相机图像话题
- 目标检测（使用OpenCV DNN模块）
- 发布检测结果（BoundingBox）
- RViz可视化

---

## 七、面试准备（持续进行）

### 7.1 C++八股文（必背）

| 类别     | 高频问题                                        |
| -------- | ----------------------------------------------- |
| 基础     | new/delete vs malloc/free、虚函数原理、多态实现 |
| 内存     | 内存布局、内存泄漏检测、智能指针原理            |
| 现代C++  | 右值引用、移动语义、完美转发、Lambda捕获        |
| STL      | vector扩容机制、unordered_map实现、迭代器失效   |
| 多线程   | 线程同步、死锁避免、原子操作、内存序            |
| 设计模式 | 单例、工厂、观察者、策略模式                    |

**推荐资源**：

- [C++面试题精选30道](http://m.toutiao.com/group/7119299147013849633/)
- [自动驾驶C++面试题](https://blog.csdn.net/qq_15258067/article/details/149961870)
- [牛客网C++面经](https://www.nowcoder.com/discuss?tagId=639)

### 7.2 算法设计题

- 设计一个线程安全的队列
- 实现一个内存池
- 实现一个简单的智能指针
- 设计一个点云处理流水线

### 7.3 系统设计题

- 如何设计一个实时感知系统？
- 如何处理传感器数据同步问题？
- 如何优化点云处理性能？

---

## 八、学习资源汇总

### 在线教程与文档

| 资源名称        | 链接                                               | 说明             |
| --------------- | -------------------------------------------------- | ---------------- |
| C++参考手册     | https://zh.cppreference.com/                       | 最权威的C++文档  |
| 现代C++教程     | https://changkun.de/modern-cpp/                    | 开源电子书，双语 |
| CPlusPlusThings | https://github.com/Light-City/CPlusPlusThings      | 实战代码集合     |
| 菜鸟教程-C++    | https://www.runoob.com/cplusplus/cpp-tutorial.html | 入门友好         |
| OpenCV官方文档  | https://docs.opencv.org/                           | 计算机视觉必备   |
| PCL官方文档     | https://pointclouds.org/documentation/             | 点云处理必备     |
| Eigen官方文档   | http://eigen.tuxfamily.org/                        | 矩阵运算库       |
| ROS2官方文档    | https://docs.ros.org/en/humble/                    | 机器人操作系统   |

### 视频教程

| 教程名称       | 链接                                        | 说明        |
| -------------- | ------------------------------------------- | ----------- |
| 黑马程序员C++  | https://www.bilibili.com/video/BV1et411b73Z | 基础入门    |
| C++数据结构    | https://www.bilibili.com/video/BV1KW411t7Nc | 数据结构    |
| 现代C++新特性  | https://www.bilibili.com/video/BV1AX4y1u7ez | C++11/14/17 |
| C语言指针详解  | https://www.bilibili.com/video/BV1Mb4y1X7dz | 指针基础    |
| OpenCV C++实战 | https://www.bilibili.com/video/BV1PV411774r | 计算机视觉  |

### 推荐书籍

| 书名                     | 作者               | 优先级 |
| ------------------------ | ------------------ | ------ |
| 《C++ Primer 第5版》     | Stanley B. Lippman | ⭐⭐⭐⭐⭐  |
| 《Effective Modern C++》 | Scott Meyers       | ⭐⭐⭐⭐⭐  |
| 《STL源码剖析》          | 侯捷               | ⭐⭐⭐⭐   |
| 《深度探索C++对象模型》  | Stanley B. Lippman | ⭐⭐⭐⭐   |
| 《学习OpenCV 3》         | Adrian Kaehler     | ⭐⭐⭐⭐   |
| 《点云库PCL学习教程》    | 朱德海             | ⭐⭐⭐⭐   |
| 《ROS机器人程序设计》    | Aaron Martinez     | ⭐⭐⭐⭐   |

### 刷题平台

| 平台      | 链接                                            | 用途          |
| --------- | ----------------------------------------------- | ------------- |
| LeetCode  | https://leetcode.cn/                            | 主刷题平台    |
| 牛客网    | https://www.nowcoder.com/                       | 面经+企业真题 |
| 剑指Offer | https://leetcode.cn/studyplan/coding-interviews | 面试必刷      |

---

## 九、每日学习计划模板

```
工作日（每天2-3小时）：
├─ 19:00-20:00 理论学习（看书/视频）
├─ 20:00-21:00 代码实践（IDE手写代码）
└─ 21:00-21:30 LeetCode刷题（1-2道）

周末（每天4-6小时）：
├─ 上午：项目实战/算法题集中训练
├─ 下午：工具链学习（OpenCV/PCL/ROS）
└─ 晚上：复习总结 + 整理笔记
```

---

## 十、阶段性检查点

| 阶段    | 检查点      | 通过标准                       |
| ------- | ----------- | ------------------------------ |
| 第1月末 | C++基础测试 | 独立完成10道中等难度编程题     |
| 第2月末 | 现代C++特性 | 能用C++11/14/17特性重构代码    |
| 第3月末 | 数据结构    | LeetCode完成100题              |
| 第4月末 | 算法能力    | 能独立解决中等难度算法题       |
| 第5月末 | 工具链掌握  | 能独立配置CMake+OpenCV+PCL项目 |
| 第6月末 | 项目实战    | 完成2个完整项目，代码规范      |

---

## 
