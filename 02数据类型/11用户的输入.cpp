#include<iostream>

using namespace std;

int main(){
   // 整型
   int a = 0;
   cout<<"请输入a的值："<<endl;
   cin>>a;
   cout<<"整型变量a为："<<a<<endl;

   // 浮点型
   float b = 3.14f;
   cout<<"请输入b的值："<<endl;
   cin>>b;
   cout<<"浮点型变量b为："<<b<<endl;

   // 字符型
   char c = 'a';
   cout<<"请输入c的值："<<endl;
   cin>>c;
   cout<<"字符型变量c为："<<c<<endl;

   // 字符串型
   string d = "";
   cout<<"请输入d的值："<<endl;
   cin>>d;
   cout<<"字符串变量d为："<<d<<endl;

   // 布尔类型
   bool e = false;
   cout<<"请输入e的值："<<endl;
   cin>>e;
   cout<<"布尔型变量e为："<<e<<endl;
   // 非零就是代表真值
   return 0;
}