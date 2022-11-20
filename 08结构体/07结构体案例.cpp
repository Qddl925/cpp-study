#include<iostream>

using namespace std;
//项目需求
   //三名老师带五名学生
   //定义两个结构体
   //学生有 姓名 考试分数
   //老师有 姓名 带领学生
   //通过函数给每个老师及所带学生赋值 最终打印出老师的数据以及老师所带学生的数据

//思路：
    //定义结构体
    //定义老师数组
    //函数： 遍历结构体数组并赋值
    //遍历输入结束打印所有内容
//建议使用 地址传递的方式 更加节约内存空间 （别忘了const）

//学生结构体
struct student
{
    string name;//姓名
    int score;//分数
};
//老师结构体
struct teacher
{
    string name; //姓名
    //五个学生
    //此处使用数组
    //嵌套循环
    student stu1;
    student stu2;
    student stu3;
    student stu4;
    student stu5;
};

// 写入函数
void inputIt(teacher *p){
    cout<<"请依次输入:老师姓名 五位学生的姓名与成绩"<<endl;
    for(int i=0; i<3; i++){
        cout<<"请输入第"<<i+1<<"位老师的信息"<<endl;
        cin>>p->name>>p->stu1.name>>p->stu1.score>>p->stu2.name>>p->stu2.score>>
        p->stu3.name>>p->stu3.score>>p->stu4.name>>p->stu4.score>>p->stu5.name>>
        p->stu5.score;
        p++;
    }
}

// 输出函数
void printfOut(const teacher *p){
    for(int i= 0;i<3;i++){
        cout<<"\n第"<<i+1<<"位老师的信息:"<<endl;
        cout<<"老师姓名："<<p->name<<"\n第1位学生："<<p->stu1.name<<"成绩："<<p->stu1.score
        <<"\n第2位学生："<<p->stu2.name<<"成绩："<<p->stu2.score<<"\n第3位学生："<<p->stu3.name<<"成绩："
        <<p->stu3.score<<"\n第4位学生："<<p->stu4.name<<"成绩："<<p->stu4.score<<"\n第5位学生："
        <<p->stu5.name<<"成绩："<<p->stu5.score;
        p++;
    }
}

int main(){
    // 创建老师的数组
    teacher t[3];
    //调用写入函数
    inputIt(t);
    //调用输出函数
    printfOut(t);
    return 0;
}