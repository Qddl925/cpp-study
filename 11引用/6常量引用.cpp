#include<iostream>

using namespace std;
// 常量引用
// 作用：常量引用主要用来修饰形参，防止误操作

// 使用场景：在函数形参列表中，可以加const修饰形参，防止形参修改实参

// 打印数据函数
// 只读
void show(const int &val){ //形参之前加const修饰，形参变为只读状态
    // val+=10;
    cout<<"val = "<<val<<endl;
}

int main(){
    //
    int a =10;
    // 引用必须引一块合法的内存空间
    // 加上const 编译器将代码修改为 int temp = 10; const int &ref = temp;
    // const int &ref = 10;
    // ref = 2; // 加上const变成只读不可修改

    show(a);
    return 0;
}