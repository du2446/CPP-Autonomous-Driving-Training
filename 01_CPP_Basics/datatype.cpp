#include <iostream>
using namespace std;

/*
数据类型整理
nullptr:空指针常量，int* p = nullptr; //p是一个空指针，指向任何类型的对象都不合法
std::initializer_list:初始化列表类型，std::initializer_list<int> list={1, 2, 3}; //表示一个固定大小的数组，可以用来初始化容器或函数参数
std::tuple:元组类型，std::tuple<int, string, char> t(1, "hello", 'c'); //表示一个固定大小的异构数据集合，可以用来存储不同类型的值
数组：同类型 int arr[5] = {1, 2, 3, 4, 5}; //表示一个固定大小的同类型数据集合，可以用来存储多个值
指针：int* ptr = &a; //表示一个指向某个类型对象的变量，可以用来访问和修改该对象的值
引用：int& ref = a; //表示一个别名，引用一个已经存在的变量，可以用来访问和修改该变量的值
函数：int add(int x, int y) { return x + y; } //表示一个可调用的代码块，可以用来执行特定的操作并返回结果
结构体：struct Point { int x; int y; }; //表示一个用户定义的数据类型，可以用来存储多个相关的值
类：class Person { public: string name; int age; }; //表示一个用户定义的数据类型，可以用来存储多个相关的值和成员函数
联合体：union Data { int i; float f; char str[20]; }; //表示一个用户定义的数据类型，可以用来存储不同类型的值，但只能同时存储一个值
枚举：enum Color { RED, GREEN, BLUE }; //表示一个用户定义的数据类型，可以用来存储一组相关的常量值
*/

#define LENGTH 10 //预处理器宏定义常量
#define WIDTH 5 //预处理器宏定义常量
//const int LENGTH = 10; 是声明指定类型的常量

class Base{
public:
    virtual ~Base() = default; //虚析构函数，确保派生类对象被正确销毁
};

class Derived : public Base{
public:
    void show(){
        std::cout<<"Derived class method" <<endl;
    }
};

class MyClass {
public:
    static int class_str;
};
int class_str = 50; //定义静态成员变量

int add(int x, int y)
{
    return x + y;
}

int main()
{
    //单行注释
    /*
    可以实现
    跨行注释
    */
    int a,b;
    cout << "请输入a:" << endl;
    cin>> a ;
    cout << "请输入b:" << endl;
    cin>> b ;
    cout << a << " + " << b << " = " << add(a, b)<<endl; //输出相加结果
    string greeting = "Hello, \
                        World!"; //分隔符字符串分行
    cout << greeting << endl; //输出问候语
    int area;
    area = LENGTH * WIDTH; //计算面积
    cout << "矩形的面积为: " << area << endl; //输出面积

    //块变量
    {
        int x = 10; //块变量x只在这个块内有效
        cout << "块变量x的值为: " << x << endl;
    }
    std::cout<<"类变量："<< MyClass::class_str << std::endl; //访问类变量

    Base* ptr_base = new Derived(); //基类指针指向派生类对象
    Derived* ptr_derived = dynamic_cast<Derived*>(ptr_base);
    if(ptr_derived) {
        //检查转换是否成功
    ptr_derived->show(); //调用派生类的show方法
    } else {
        std::cout << "转换失败" << std::endl;
    }

    delete ptr_base; //释放内存
    return 0;
}