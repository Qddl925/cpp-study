#include<iostream>

using namespace std;
// 引用的本质：
// 引用的本质在c++内部是一个指针常量
// * const

void func(int& ref){
    ref = 100;
}

int main(){
    int a = 10;
    //自动类型转换 int* const ref = &a; 指针常量是指针的指向不可改，也说明为什么引用不可更改
    int & ref = a;
    ref = 20; // 内部发现ref是引用，自动帮我们转换 *ref = 20;

    cout<<"a:"<<a<<endl;
    cout<<"ref:"<<ref<<endl;
    

    func(a);



    // 推荐使用引用技术，因为语法方便，引用本质是指针常量。

    return 0;
}