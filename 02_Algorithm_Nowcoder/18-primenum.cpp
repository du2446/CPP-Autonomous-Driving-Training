#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    int flag=0;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag) cout<<"不是质数"<<endl;
    else cout<<"是质数"<<endl;
    return 0;
}