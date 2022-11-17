#include<iostream>

using namespace std;

int main(){
    // sizeof关键字可以统计数据类型所占内存大小
    // sizeof(数据类型/变量)

    cout << "short 类型所占的内存空间的为："<<sizeof(short)<<"字节"<<"\n";
    cout << "int 类型所占的内存空间的为："<<sizeof(int)<<"字节"<<"\n";
    cout << "long 类型所占的内存空间的为："<<sizeof(long)<<"字节"<<"\n";
    cout << "long long 类型所占的内存空间的为："<<sizeof(long long)<<"字节"<<"\n";
    
    // 整型大小比较
    // short<int<=long(linux 64位)<=long long
}