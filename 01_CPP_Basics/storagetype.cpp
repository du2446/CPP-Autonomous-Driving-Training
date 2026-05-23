#include <iostream>
using namespace std;

int global_var; //全局变量
static int static_var=10; //静态变量
void func(void){

    auto local_var = 10; //局部变量
    static int i = 5; //静态变量
    i++;
    std::cout<<"变量i为:"<<i;
    std::cout<<",变量static_var为:"<<static_var<<std::endl;
    const int const_var = 30; //常量变量

    class Myclass{
    public:
        mutable int mutable_var; //可变成员变量
        void constMemberFunc() const{
            mutable_var = 50; //在const成员函数中修改mutable变量
        }
    };
    thread_local int thread_local_var = 60; //线程局部变量

}

class Example{
public:
    Example() : value(0),cachedValue(0) {} //构造函数
    int getValue() const{
        return value;
    }
    void increment(){
        ++value;
        cachedValue = value*2; //更新缓存值
    }
    int getCachedValue() const{
        return cachedValue;
    }
private:
    int value; //普通成员变量
    mutable int cachedValue; //可变成员变量
};

int main()
{
    extern int externalVar;
    func();
    while(static_var--){
        func(); 
    }

    const Example ex;
    std::cout<<"Value:"<<ex.getValue()<<std::endl; 
    std::cout<<"Cached Value:"<<ex.getCachedValue()<<std::endl;

    return 0;
}