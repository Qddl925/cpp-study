#include<iostream>

using namespace std;

struct hero
{
    // 姓名
    string name;
    // 年龄
    int age;
    // 性别
    string sex;
};

// 声明并定义冒泡函数
// 传值调用
void bubbleSort(hero* heroArray,int len){
    //开始冒泡排序
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            if(heroArray[j].age>heroArray[j+1].age){
                hero temp = heroArray[j];
                heroArray[j] = heroArray[j+1];
                heroArray[j+1] = temp;
            }
        }
    }
}

// 声明并定义输出函数
void printfOut(const hero *p, int len){
    for(int i = 0;i<len; i++){
        cout<<" 英雄："<<p->name<<" 年龄："<<p->age<<" 性别："<<p->sex<<endl;
        p++;
    }
}


int main(){
    // 一个结构体数组根据年龄冒泡排序
    // 设计该结构体
    // 创建数组存放5名英雄
    hero heroArray[5]={
        {"刘禅",55,"男"},
        {"孙尚香",25,"女"},
        {"关羽",38,"男"},
        {"刘备",35,"男"},
        {"貂蝉",18,"女"}
    };
    int len = sizeof(heroArray)/sizeof(heroArray[0]);
    cout<<"排序之前的数组为："<< endl;
    printfOut(heroArray,len);
    // 对数组进行排序 按照年龄升序排序
    bubbleSort(heroArray,len);
    // 打印结果    
    cout<<"排序之后的数组为："<< endl;
    printfOut(heroArray,len);
    return 0;
}