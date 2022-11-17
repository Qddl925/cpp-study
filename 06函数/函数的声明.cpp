#include<iostream>

using namespace std;

// 函数的声明
// 返回最大值
// 函数的声明
int max(int a, int b);

int main(){
   // 调用函数
   int mun =  max(5,66);
   cout <<mun;
   return 0;
}
// 函数的定义
// 返回最大值
int max(int a, int b) {
    return a > b ?a:b;
}

// 错误 定义只能有一次
// int max(int a, int b) {
//     return a > b ?a:b;
// }

// 函数可以有多次声明，但只能定义一次