#include<iostream>

using namespace std;

// 结构体作为参数向函数中传递
// 1 值传递
// 2 地址传递

//定义学生的结构体
// 定义一个学生的结构体
struct student{
    // 姓名
    string name;
    // 年龄
    int age;
    // 分数
    int score;
};

//值传递
void printStudent1(student s){
    s.name = "李四";
    cout<<"值传递打印："<<endl;
    cout<<"姓名："<<s.name<<" 年龄："<<s.age<<" 成绩："<<s.score<<endl;
}

//地址传递
void printStudent2(student *p){
    p->age = 99;
    cout<<"地址传递打印："<<endl;
    cout<<"姓名："<<p->name<<" 年龄："<<p->age<<" 成绩："<<p->score<<endl;
}

int main(){
   //结构体做函数的参数
   //将学生传入到一个参数中，打印学生身上的所有信息

   // 创建一个结构体变量
   student s = {"张三",29,99};
   

   // 用函数打印
   // printStudent1(s);
   // 传地址
   printStudent2(&s);

   cout<<"主函数中打印："<<endl;
   cout<<"姓名："<<s.name<<" 年龄："<<s.age<<" 成绩："<<s.score<<endl;
   return 0;
}