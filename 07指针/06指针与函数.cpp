#include<iostream>

using namespace std;

// 实现两个数字进行交换、
void swap01(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"swap01中的：";
    cout<<"a = "<<a<<",b = "<<b<<endl;
}

void swap02(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
   //指针与函数

   //1 值传递
   int a = 1;
   int b = 2;
   swap01(a,b);
   cout<<"a = "<<a<<",b = "<<b<<endl;

   //2 地址传递
   // 如果是地址传递，是可以修饰实参的
   swap02(&a, &b);
   cout<<"a = "<<a<<",b = "<<b<<endl;
   return 0;
}