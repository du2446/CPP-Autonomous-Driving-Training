#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    long long factorial = 1;
    while(n>0&&n<=20){
        factorial *= n;
        --n;
    }
    
    cout << factorial << endl;
    
    return 0;
}