#include <iostream>
using namespace std;


int main(){
    int a,b;
    int d = 10;
    a = d++;
    cout<<a<<endl; //输出10，d的值先赋给a，再自增
    cout<<d<<endl; //输出11，d的值自增后为11
    b = d--;
    cout<<b<<endl; //输出11，d的值先赋给b，再自减
    cout<<d<<endl; //输出10，d的值自减后为10
    
    a = 0;
    b = 5;
    if(!(a&&b)){
        cout<<"a和b至少有一个为0"<<endl; //输出a和b至少有一个为0，因为a为0
    }

    //位运算
    unsigned int x = 60; //二进制为0011 1100
    unsigned int y = 13; //二进制为0000 1101
    int c = 0;
    c = x & y; //按位与，结果为0000 1100，即12
    cout<<"x & y = "<<c<<endl; //输出x & y = 12
    c = x | y; //按位或，结果为0011 1101，即61
    cout<<"x | y = "<<c<<endl; //输出x | y = 61
    c = x ^ y; //按位异或，结果为0011 0001，即49
    cout<<"x ^ y = "<<c<<endl; //输出x ^ y = 49
    c = ~x; //按位取反，结果为1100 0011，即195
    cout<<"~x = "<<c<<endl; //输出~x = 195
    c = x << 2; //左移两位，结果为1111 0000，即240
    cout<<"x << 2 = "<<c<<endl; //输出x << 2
    c = x >> 2; //右移两位，结果为0000 1111，即15
    cout<<"x >> 2 = "<<c<<endl; //输出x >> 2
    
    return 0;

}