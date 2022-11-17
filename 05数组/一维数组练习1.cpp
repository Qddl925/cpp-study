#include<iostream>

using namespace std;

int main(){
   //五只小猪称体重
   //数组中存储小猪的体重 找出并打印出最重的小猪
   int arr[5] ={300,350,200,400,250}; // 五只小猪体重数组
   int max = arr[0]; // 定义并初始化最大值
   // 开始遍历一维数组
   for(int i=1; i<5; i++){
    // 访问数组中的每个元素，如果这个元素比我认定的最大值要大，更新最大值
    if(max < arr[i]){
        max = arr[i];
    }
   }
   cout<<"最重的小猪体重为："<<max<<endl; 
   return 0;
}