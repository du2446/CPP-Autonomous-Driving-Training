#include <iostream>
using namespace std;

int main(){
    long long num = 0;
    long long sum = 0;
    for(int i=1;i<=10;i++){
        num = num*10+9;
        sum += num;
    }
    cout<<sum<<endl;
    return 0;
}