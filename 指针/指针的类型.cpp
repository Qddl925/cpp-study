#include<iostream>

using namespace std;

int main(){
   //指针的类型
   int num = 512;
   // 4字节
   char *p = (char*)&num;
   *p += 1;
   cout<<*p<<endl;
   return 0;
}