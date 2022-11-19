#include<iostream>

using namespace std;

int main(){
   //
   char LuanXingHai = 'A';
   //'H'要传到char
   // 法一
//    LuanXingHai = 'H';

   // 1 记录目的地
   // &LuanXingHai;
   // 2 制作一个传送阵 指针
   // char* p;
   // 3 直接赋值 设置指针的值
   // p = &LuanXingHai;

   // 4 传送
   // *p='H'; // LuanXingHai = 'H'

   char* p = &LuanXingHai;

   cout<<*p;

   return 0;
}