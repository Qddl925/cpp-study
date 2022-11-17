#include<iostream>
using namespace std;
int main(){
   // 数据类型存在的意义： 给变量分配合适的内存空间
   /*
   整型数据类型
   short(短整型) 2字节
   int(整型) 4字节
   long(长整型) win 4字节 linux 32位 4 字节 64位 8字节
   long long(长长整型) 8字节
   */
   short num1 = 10;
   int num2 = 11;
   long num3 = 12;
   long long num4 = 13;
   cout << num1 <<"\n"<< num2<<"\n" << num3<<"\n" << num4 <<endl;
   return 0;
}