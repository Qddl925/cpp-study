#include<iostream>

using namespace std;

int* func(){
    int a = 10; // 局部变量存放在栈区，栈区数据在函数执行完毕后自动释放
    return &a; // 返回局部变量地址
}

int main(){
    //栈区数据注意事项
    //不要返回局部变量的地址

    // 接收函数的返回值
    int *p = func();
    cout<<*p<<endl; //第一次可以打印正确数字，是因为编译器做了保留
    cout<<*p<<endl; //第二次这个数据就不保留了

    return 0;
}