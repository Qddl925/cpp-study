#include<iostream>

using namespace std;

int main(){
   // 在32位操作系统下占4字节
   // 在64位操作系统下占8字节
   // 不管任何数据类型

   int a = 1;
   int *p;
   p = &a;
   // 等价于 int *p = &a;
   cout<<"指针的内存空间："<<sizeof(p)<<endl;
   cout<<"指针int型的内存空间："<<sizeof(int*)<<endl;
   cout<<"指针double型的内存空间："<<sizeof(double*)<<endl;
   cout<<"指针float型的内存空间："<<sizeof(float*)<<endl;
   cout<<"指针char型的内存空间："<<sizeof(char*)<<endl;
   return 0;
}