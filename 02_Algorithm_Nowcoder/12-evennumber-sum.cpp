#include <iostream>
using namespace std;

int main() {
    
    int n;
    int i;
    cin >> n;
    int sum = 0;
    for(i=1;i<=n;i++){
        if(i%2==0){
            sum = sum + i;
        }
    }

    cout << sum << endl;
    
    return 0;
}