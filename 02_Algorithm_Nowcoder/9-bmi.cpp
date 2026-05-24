#include <iostream>
using namespace std;

int main() {
   
    double weight;
    double height;
    double bmi;

    cin >> weight;
    cin >> height;
    bmi = weight / (height*height);
    if(bmi<18.5){
        cout<<"偏瘦"<<endl;
    }
    else if(bmi<20.9){
        cout<<"苗条"<<endl;
    }
    else if(bmi<=24.9){
        cout<<"适中"<<endl;
    }
    else{
        cout<<"偏胖"<<endl;
    }
    

    return 0;
}