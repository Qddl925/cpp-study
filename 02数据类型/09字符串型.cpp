#include<iostream>

using namespace std;

int main(){
   // 两种风格
   // c风格 char 变量名[] = "字符串值";
   /*
   注意事项
   1 char 字符串名[]
   2 等号后面要用 “ ”
   */
   char str1[] = "hello world";
   cout << str1<<endl;

   // c++风格 string 变量名 = "字符串值"
   // 头文件 #include<string>
   string str2 = "hello my world";
   cout << sizeof(str2)<<endl;
   cout << str2<<endl;
   return 0;
}