#include<iostream>

using namespace std;

//结构体指针
//作用：通过指针访问结构体中的成员

//利用 -> 可以通过结构体指针访问结构体属性

// 定义学生的结构体
struct Student{
    // 成员列表
    // 姓名
    string name;
    // 年龄
    int age;
    // 分数
    int score;
};

int main(){
   //创建学生的结构体变量
   Student stu1 = {"张三",18,55};
   //通过指针指向结构体变量
//    Student stu2 = {"李四",55,99};
   Student *p = &stu1;
//    p++;
   //通过指针访问结构体变量中的数据
   //通过结构体指针访问结构体中的属性，需要利用'->'
   cout<<"姓名："<<p->name<<"年龄："<<p->age<<"成绩："<<p->score<<endl;
   return 0;
}