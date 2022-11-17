#include<iostream>
#include"swap.h"

using namespace std;

//函数分文件的编写
//实现两个数字进行交换的函数
// void swap(int a,int b){
//     cout<<"交换前：";
//     cout<<"a = "<<a<<" b = "<<b<<endl;
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     cout<<"交换后：";
//     cout<<"a = "<<a<<" b = "<<b<<endl;
// }
// 创建一个.h后缀的头文件
// 创建.cpp后缀的源文件
// 在头文件中写函数的声明
// 在源文件中写函数的定义

int main(){
    swap((int)15,(int)10);
   return 0;
}