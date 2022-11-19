#include<iostream>

using namespace std;

int main(){
   //指针的两种用法
   char LuanXingHai = 'A';

   // 获取值
   char *p = &LuanXingHai;
   cout<<*p<<endl;

   // 修改值
   *p = 'H';
   cout<<*p<<endl;
   return 0;
}