#include<iostream>

using namespace std;

// 引用：给变量起别名
// 语法：数据类型 &别名 = 原名



int main(){
    //引用
    int a = 10;
    // 创建引用
    int &b = a;


    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    a=115;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    b = 100;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    
    return 0;
}