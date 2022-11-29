#include<iostream>

using namespace std;

// 函数重载
// 作用：函数名可以相同，提高复用性

// 函数重载满足条件
// 1 同一个作用域下
// 2 函数名称相同
// 3 函数参数类型不同 或者个数不同或者顺序不同

// 注意函数的返回值不可以作为函数重载的条件

void func(){
    cout<<"调用func";
}

void func(int){ //无法重载仅按返回类型区分的函数
    cout<<"\n调用func(int)!";
}

void func(double){
    cout<<"\n调用func(double)!";
}

void func(int a,double b){
    cout<<"\n调用func(int double)!";
}

void func(double a,int b){
    cout<<"\n调用func(double int)!";
}

//注意事项：
//返回类型不可以作为函数重载的条件

int main(){
    //
    func();
    func(555);
    func(4.55);
    func(4,53.554);
    func(5.235,2);
    return 0;
}