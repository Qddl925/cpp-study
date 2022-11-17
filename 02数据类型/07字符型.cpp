#include<iostream>

using namespace std;

int main(){
   // 字符型变量用于显示单个字符
   // char = '1' 单引号 只能放一个字符
   // char 只占用一个字节
   // 并不是存放本身到内存中，而是将对应的ASCii码存入

   char a = 'a';
   cout<<a<<endl;
   cout<<sizeof(char)<<endl;
   cout<<a<<endl;

   // 字符型常见错误
   // 1 创建时使用 ‘’
   // 2 创建字符型变量，单引号内只能有一个字符

   // ASCii码
   // a - 97
   // A - 65
}