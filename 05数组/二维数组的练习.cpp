#include<iostream>
using namespace std;
int main(){
    // 已知三人成绩，分别输出三人的总成绩
    int grade[3][3]={
        {100,100,100},
        {90,50,100},
        {60,70,80},
    };
    string people[3]={"张三的总成绩","李四的总成绩","王五的总成绩"};
    //遍历二维数组，用一个变量存值
    int sum =0; // sum 变量存储每个人的总成绩
    for(int i=0; i<3; i++){
        //遍历行
        sum = 0; // 每换一行就要初始化sum的值
        for(int j=0;j<3; j++){
            // 遍历列
            sum+=grade[i][j];
        }
        // 分别输出三人的成绩
        cout<<people[i]<<sum<<endl;
    }
    return 0;
}