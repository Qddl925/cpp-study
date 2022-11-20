#include<iostream>

using namespace std;

   // 结构体数组
   // 将自定义的结构体放入到数组中方便维护

// 1 定义一个结构体
struct Student {
   // 姓名
    string name;
    // 年龄
    int age;
    // 分数
    int score;
};





int main(){
   // 2 创建一个结构体数组
   struct Student stuArr[3]={
      {"张三",18,55},
      {"李四",22,66},
      {"王五",55,99}
   };
   // 3 给结构体数组中的元素赋值
   stuArr[2].name = "赵六";
   stuArr[2].age = 42;
   stuArr[2].score = 88;
   // 4 遍历结构体数组
   for(int i =0; i<3; i++){
      cout<<"姓名："<<stuArr[i].name<<"年龄："<<stuArr[i].age<<"分数："<<stuArr[i].score<<endl;
   }
   return 0;
}