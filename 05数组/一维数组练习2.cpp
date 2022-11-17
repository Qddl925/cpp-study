#include<iostream>

using namespace std;

int main(){
   // 倒置数组元素
   int arr[5]={1,2,3,4,5}; //定义并赋值原数组
   int newArray[5]; //定义一个新的数组存储倒序数组
   // 倒序遍历原数组,并赋值给新数组
   int temp =0;
   for(int i=4; i>=0; i--){
    newArray[temp]=arr[i];
    temp++;
   }
   for(int i=0; i<5; i++){
    newArray[i];
    cout<<newArray[i]<<" ";
   }
   return 0;
}