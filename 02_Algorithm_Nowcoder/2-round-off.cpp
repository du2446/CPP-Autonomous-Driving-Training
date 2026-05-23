#include <iostream>
using namespace std;

int main() {
    float a;
    cin>>a;
    if((a+0.5)>int(a)+1){
        cout<<int(a)+1<<endl;
    }
    else if ((a-0.5)<int(a)-1) {
        cout<<int(a)-1<<endl;
    }
    else {
    cout<<int(a)<<endl;
    }

    return 0;
}
// 64 位输出请用 printf("%lld")