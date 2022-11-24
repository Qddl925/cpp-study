#include<iostream>

using namespace std;

/*

引用的注意事项：
引用必须初始化
引用在初始化后，不可改变

*/

int main(){
    //引用的注意事项
    int a = 10;
    //创建引用
    // int &b;  错误 引用 变量 "b" 需要初始值设定项

    int &b = a;
    int c = 15;
    //int &b = c;  错误 引用初始化后不可以改变

    b = c; // 这是赋值操作 并不是更改引用
    cout<< "b = "<<b<<endl;
    // 引用一旦初始化后，就不可以更改
    return 0;
}