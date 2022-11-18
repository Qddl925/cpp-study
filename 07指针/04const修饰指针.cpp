#include<iostream>

using namespace std;

int main(){
   // const 修饰指针有三种情况：

   // 1 const修饰指针 --常量指针（const *）
   //  -特点：指针的指向可以修改，但是指针指向的值不可以改
   int a =0;
   int b =1;
   const int *p = &a;
   p = &b;
   // *p = b; 指针的指向的值不可以改

   
   // 2 const修饰常量 --指针常量（* const）
   //  -特点：指针的指向不可以修改，但是指针指向的值可以改
   int * const p2 = &a;
   *p2 = b;
   // p2 = &b; 指针的指向不可以改

   // 3 const修饰指针，又修饰常量
   //  -特点：指针的指向不可以修改，指针指向的值也不可以改
   const int * const p3 = &a;
   // *p3 = b;
   // p3 =&b;  错误


   return 0;
}