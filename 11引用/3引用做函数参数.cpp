#include<iostream>

using namespace std;
// 引用做函数参数
/*
作用：函数传参时，可以利用引用的技术让形参修饰形参
优点：可以简化指针修改实参
*/

//交换函数
//值传递
void swap1(int a,int b) {
    int temp = a;
    a = b;
    b = temp;
}
//地址传递
void swap2(int *a,int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//引用传递
//使用引用接收参数
//修改引用参数也会被修改
//也会造成内存的浪费
void swap3(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    //
    int a = 10,b =15;
    swap1(a,b);
    cout << "a = " << a <<"\nb ="<<b <<endl;
    // 值不改变

    swap2(&a,&b);
    cout << "a = " << a <<"\nb ="<<b <<endl;
    // 值改变

    swap3(a,b);
    cout << "a = " << a <<"\nb ="<<b <<endl;
    // 值改变 引用也可以修饰实参

    return 0;
}