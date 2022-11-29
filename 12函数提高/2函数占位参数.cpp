#include<iostream>

using namespace std;

// c++参数列表形参里可以有展位参数，用作做占位，调用函数必须填补该技术

//语法： 返回值类型 函数名（数据类型）{}
// 占位参数还可以有默认参数
int fun(int = 10){
    cout<<"我是用来演示占位参数的!"<<endl;
}

int main(){
    //
    fun();
    return 0;
}