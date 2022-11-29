#include<iostream>

using namespace std;
// c++中 函数的形参列表是可以有默认值的
// 语法： 返回值类型 函数名 （参数 = 默认值）{ 函数体 }

// 如果自己传入了数据，就用自己的数据。如果没有，那么就使用默认值

int func(int a,int b=20,int c=30){
    return a+b+c;
}

// 注意事项
// 1 如果某个位置已经有了默认参数，那么从这个位置开始，从左到右必须都要有默认值。
// int func2(int a,int b=20,int c){
//     return a+b+c;
// }  错误?

// 2 如果函数的声明有默认参数，函数的实现不能有默认参数
//     声明和实现只能有一个有默认参数
int func2(int a=10,int b=20);

int func2(int a,int b){
    return a+b;
}

int main(){
    //
    cout<<func(10,30)<<endl;

    cout<<func2()<<endl;

    return 0;

}