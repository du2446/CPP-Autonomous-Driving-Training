#include <iostream>
using namespace std;
 
int main ()
{
 
   for( ; ; )
   {
      cout<<"This loop will run forever."<<endl;
      break; //使用break语句跳出循环，避免死循环
      if (false) {
          cout<<"This code will never be executed."<<endl; 
          //使用条件语句控制循环的执行
      }
      else {
          cout<<"This code will always be executed."<<endl;
      }
   }
   //while/for/do-while表示循环
   do{
       cout<<"This loop will run at least once."<<endl;
       continue; //使用continue语句跳过本次循环的剩余部分，继续下一次循环
   }while(0);

   switch (1) {
       case 0:
           cout<<"Case 0"<<endl;
           break; //使用break语句跳出switch语句，避免执行后续的case
       case 1:
           cout<<"Case 1"<<endl;
           break;
       default:
           cout<<"Default case"<<endl;
   }

   return 0;
}