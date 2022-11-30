#include<iostream>

using namespace std;

// struct和class唯一的区别就在于 默认的访问权限不同
// struct 默认权限为公有
// class 默认权限为私有
class C1{
    int m_A; //默认权限为私有
};

struct C2{
    int m_A; //默认权限为公有
};

int main(){
    //实例化
    C1 c1;
    // c1.m_A =10; 错误 默认权限为私有
    C2 c2;
    c2.m_A =15;
    return 0;
}