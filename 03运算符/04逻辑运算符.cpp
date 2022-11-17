#include<iostream>

using namespace std;

int main(){
   // 用于根据表达式的值返回真值或者假值

   // ！ 非
   int a = 10;
   // 再c++中 除了0都为真
   cout<<!a<<endl;// 0
   cout<<!!a<<endl; //1

   // && 与 一假全假
   // 第一个判断为假，则不管其后条件真假都不会判断
   int b = 0;
   if(a > 15 && ++b){
    cout<<b<<endl;
   }

   // || 或 一真为真
   // 第一个判断为真，则不管其后条件真假都不会管直接进入判断语句
   if(a > 5 || ++b){
    cout <<b<<endl;
   }
   return 0;
}