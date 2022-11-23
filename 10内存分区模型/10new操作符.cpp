#include<iostream>

using namespace std;

// new的基本语法

int *func(){
    // 在堆区创建一个整型的数据
    // new 返回的是 该数据类型的指针
    int *p = new int(10);
    return p;
}


void test01(){
    int *p = func();
    cout<<*p<<endl;
    
    delete p;

    // cout<<*p<<endl;
}

// 在堆区利用new开辟数组
void test02(){
    // 创建10整型数据的类型，在堆区
    int *arr = new int[10]; // 代表数组有10个元素

    for(int i=0; i<10;  i++){
        arr[i] = i;
    }
    for(int i=0; i<10;  i++){
        cout<<arr[i]<<endl;
    }
    // 释放堆区的数组
    // 释放数组要加[]才可以
    delete[] arr;
}

int main(){
    //new 操作符在堆区开辟数据
    /*
    语法： new 数据类型
    */

    // test01();
    // 堆区的数据由程序员管理开辟，程序员管理释放
    // 如果想释放堆区的数据，利用关键字delete

    test02();
    
    return 0;
}