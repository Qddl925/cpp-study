#include<iostream>

using namespace std;

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
    student aArr[5];
};

// 输入函数
void inputIt(teacher *p,int len){
    //给老师赋值
    string nameNeed="ABCDE";
    for(int i=0; i<len; i++){
        p->name="teacher_";
        p->name +=nameNeed[i];
        //输入学生的信息
        cout<<"第"<<i+1<<"位老师学生成绩输入："<<endl;
        for(int j =0;j<5; j++){
            p->aArr[j].name = "student_";
            p->aArr[j].name +=nameNeed[j];
            cin>>p->aArr[j].score;
        }
        p++;
    }
}

//输出所有的信息
void printfOut(const teacher *p,int len){
    for(int i=0; i<len; i++){
        //遍历老师
        cout<<"\n老师姓名："<<p->name<<endl;
        for(int j=0;j<5;j++){
            cout<<"\t学生姓名："<<p->aArr[j].name<<endl;
            cout<<"\t学生成绩："<<p->aArr[j].score<<endl;
        }
        p++;
    }
}

int main(){
    // 创建3位老师的数组
    teacher tArr[3];
    //调用写入函数 给三个老师带的学生赋值
    int len = sizeof(tArr)/sizeof(tArr[0]);
    inputIt(tArr,len);
    //调用输出函数 打印所有学生信息
    printfOut(tArr,len);
    return 0;
}