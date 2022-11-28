#include<iostream>

using namespace std;
//引用做函数的返回值
//引用是可以作为函数的返回值存在的
//注意：
//不要返回局部变量引用
int& test1(){
    int a = 10; //存放在内存四区的栈区
    return a;
}

//函数调用作为左值
int& test2(){
    static int a = 10; //静态变量 存放在全局区，全局区上的数据在程序结束后系统释放
    return a;
}


int main(){
    // int &ref = test1();
    // 该编译器不会做保留 所以不会输出任何内容 a的内存已经释放
    // 返回局部变量本身就是一个非法操作
    // cout<<"ref: "<<ref<<endl;
    // cout<<"ref: "<<ref<<endl;

    int &ref2 = test2();
    cout<<"ref2: "<<ref2<<endl;
    cout<<"ref2: "<<ref2<<endl;
    // 函数调用作为左值 函数返回值可以改变
    test2() = 100;
    // 如果函数返回值是引用，这个函数调用可以作为左值
    cout<<"ref2: "<<ref2<<endl;
    cout<<"ref2: "<<ref2<<endl;


    return 0;
}