#include<iostream>

using namespace std;

//访问权限三种
//public 公共权限
//protected 保护权限  继承 儿子可以访问父亲保护的内容
//private 私有权限  继承 儿子不可以访问父亲私有的内容
// 三种权限类内都可以访问，只有public在类外访问

class Person{
    //公共权限
public:
    string name; //姓名
    //保护权限
protected:
    string car; //汽车
    //私有权限
private:
    int money; //余额

public:
    void fun1(){
        name="孙悟空";
        car="劳斯莱斯";
        money=9999999;
        cout<<name<<"开着"<<car<<"，存款"<<money<<endl;
    }
};

int main(){
    //实例化对象
    Person p1;
    p1.name="李四";
    // p1.car="奔驰";
    // p1.money=10086; 成员类外不可访问

    p1.fun1();

    return 0;
}