#include<iostream>

using namespace std;
// c++面向对象的三大特性：封装、继承和多态
// 万事万物皆是对象

const double PI = 3.14; 

// 封装
//设计一个圆类，求圆的周长
// c = 2*PI*r;
class Circle{
    //访问权限
public:
    //设计圆的属性
    int m_r; //半径
    //设计圆的行为
    //获取圆的周长
    double calculateZC(){
        return 2*PI*m_r;
    }
};


int main(){
    //通过圆类创建具体的圆（对象）
    Circle c1;  //实例化
    //给圆对象的属性赋值
    c1.m_r = 10;
    // 2*3.14*10=62.8
    cout<<"圆的周长为："<<c1.calculateZC()<<endl;
    return 0;
}