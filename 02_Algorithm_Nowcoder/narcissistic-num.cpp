#include <iostream>
using namespace std;

int main() {
    int num;
    int a,b,c;
    for(num=100;num<1000;num++){
        c = num%10;
        b = (num/10)%10;
        a = num/100;
        if(num == a*a*a + b*b*b +c*c*c){
            cout<<num<<endl;
        }
    }
    

    return 0;
}