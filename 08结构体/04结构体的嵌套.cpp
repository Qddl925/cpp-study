#include<iostream>

using namespace std;

// 结构体嵌套结构体

// 定义一个学生的结构体
struct student{
    // 姓名
    string name;
    // 年龄
    int age;
    // 分数
    int score;
};

// 定义一个老师的结构体
struct teacher {
    int id; // 编号
    string name; //姓名
    int age; //年龄
    struct student stu; //被辅导的学生
};



int main(){
   //
   teacher t;
   t.id =0111;
   t.name ="ciddy";
   t.age=23;
   t.stu.age=15;
   t.stu.name="武大郎";
   t.stu.score=53;

   // 输出
   cout<<"老师姓名："<<t.name<<" 职工编号："<<t.id<<" 职工年龄："<<t.age<<endl<<" 辅导学生："<<t.stu.name<<" 辅导学生年龄："<<t.stu.age<<" 辅导学生成绩："<<t.stu.score<<endl;
   student stu;

   // 在结构体中可以定义另一个结构体作为成员，来解决实际的问题
   return 0;
}