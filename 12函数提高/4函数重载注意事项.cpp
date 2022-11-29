#include<iostream>

using namespace std;

//函数重载注意事项
//引用作为重载条件

void fun(int &a){
    cout<<"fun(int &a)调用"<<endl;
}

void fun(const int &a){
    cout<<"fun(const int &a)调用"<<endl;
}

//函数重载碰到函数默认参数

void fun2(int a,int b=10){
    cout<<"fun2(int a,int b=10)调用"<<endl;
}
void fun2(int a){
    cout<<"fun2(int a)调用"<<endl;
}

int main(){
    //
    // const int a = 10;
    // fun(a);

    fun2(12,10); //当函数重载碰到默认参数，就出现二义性
    return 0;
}