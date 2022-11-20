#include<iostream>

using namespace std;

// 结构体中的const
// 作用： 为了防止误操作

// 定义一个学生的结构体
struct student{
    // 姓名
    string name;
    // 年龄
    int age;
    // 分数
    int score;
};
// void printfStudent(student s){
//     // 相当于进行了一个备份操作
//     cout<<"姓名："<<s.name<<" 年龄："<<s.age<<" 成绩："<<s.score<<endl;
//     // 结束后删除了备份
// }

//将函数中的形参改为指针，可以减少内存空间的浪费，而且不会复制出新的副本出来

void printfStudent(const student *p){
    // 不会进行备份操作
    // p->age = 55;
    // 加入const后，一旦有修改的操作就会报错，可以防止我们的误操作
    cout<<"姓名："<<p->name<<" 年龄："<<p->age<<" 成绩："<<p->score<<endl;
}

int main(){
   //创建结构体变量
   student s = {"张三",15,66};

   // 通过函数打印结构体变量的信息
   printfStudent(&s);
   cout<<"张三的年龄："<<s.age;
   return 0;
}