#include<iostream>

using namespace std;

int main(){
   //实现元素逆置
   int arr[5]={1,3,2,4,5};
   int start = 0; //起始下标位置
   int end=sizeof(arr)/sizeof(arr[0])-1;  //结束下标的位置
   int temp = 0; // 临时变量存储
   while(start<end){
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    //实现元素互换
    start++;
    end--; // 更新下标
   }
   for(int i=0; i<5; i++){
    cout << arr[i]<<" ";
   }
   return 0;
}