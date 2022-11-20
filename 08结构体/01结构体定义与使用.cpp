#include<iostream>

using namespace std;

    // 结构体属于用户自定义的 数据类型  允许用户存储不同的数据类型
    // 结构体的定义与使用
    /*
    语法： struct 结构体名 { 结构体成员列表 }
    使用：
    通过结构体创建变量的方式有三种：
    struct 结构体名 变量名
    struct 结构体名 变量名 = {成员1值，成员2值...}
    定义结构体时顺便创建变量
    */

// 1 创建学生数据类型 学生包括（姓名 年龄 分数）
// 自定义数据类型，一些类型集合组成的一个类型

struct Student{
    // 成员列表
    // 姓名
    string name;
    // 年龄
    int age;
    // 分数
    int score;
} s3; //顺便创建





int main(){
    // 2 通过学生类型创建具体的学生
    /*
    1.
    struct Student s1;
    2.
    struct Student s2 = {...};
    3.
    定义结构体时顺便创建变量 [不建议使用]
    */

    // c++中 创建变量的时候struct 可以省略，但是在定义的时候不可以省略
    // 法一
    Student s1;
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    cout<<"姓名："<<s1.name<<"年龄："<<s1.age<<"成绩："<<s1.score<<endl;

    // 法二
    struct Student s2 = {"李四",19,99};
    cout<<"姓名："<<s2.name<<"年龄："<<s2.age<<"成绩："<<s2.score<<endl;

    // 法三
    s3.name = "王五";
    s3.age = 28;
    s3.score = 50;
    cout<<"姓名："<<s3.name<<"年龄："<<s3.age<<"成绩："<<s3.score<<endl;

    return 0;
}