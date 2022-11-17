#include<iostream>

using namespace std;
// 值传递
// 定义函数，实现两个数字进行交换函数

void swap(int a,int b){
    cout<<"交换前：";
    cout<<"a = "<<a<<" b = "<<b<<endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"交换后：";
    cout<<"a = "<<a<<" b = "<<b<<endl;
}

int main(){
   int a =5;
   int b =10;
   // 值传递，函数的形参发生改变，是不会改变实参的值。
   swap(a,b);
   cout<<"实参：";
   cout<<"a = "<<a<<" b = "<<b<<endl;
   return 0;
}