#include<iostream>

using namespace std;

class Student{
    public:
    
    // 类中的属性和行为统一称为：成员
    //属性：成员属性 成员变量
    //行为：成员函数 成员方法


    string name; //姓名
    string Id; //学号
    void show(){
    cout<<"请输入你的姓名：";
    cin >> name;
    cout<<"请输入你的学号：";
    cin >> Id;
    cout<<"姓名："<<name<<endl;
    cout<<"学号："<<Id<<endl;
    }
};

int main(){
    //实例化
    Student s1;
    s1.show();

    Student s2;
    s2.show();
    return 0;
}