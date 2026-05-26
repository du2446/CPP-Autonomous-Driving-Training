#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // 下落的高度和落地的次数
    double h;
    int n;

    cin >> h;
    cin >> n;
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=h;
        if(i>0) sum+=h;
        h/=2.0;
    }
    cout<<fixed<<setprecision(1)<<sum<<" "<<setprecision(1)<<h<<endl;

    return 0;
}