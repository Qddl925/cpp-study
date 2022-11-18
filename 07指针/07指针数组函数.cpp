#include<iostream>

using namespace std;

//2 创建一个函数实现冒泡排序
// 参数一 数组的首地址
// 参数二 数组的长度
void bubbleSort(int *arr,int len){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            // 如果j>j+1 交换数字
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}
// 打印数组
void printfArray(int *arr,int len){
    for(int i=0;i<len; i++){
        cout<<arr[i]<<" ";
        
    }
}


int main(){
   //1 先创建一个数组
   int arr[10]={0,5,8,9,6,3,4,7,1,2};
   int len = sizeof(arr)/sizeof(arr[0]);
   bubbleSort(arr,len);
   //3 打印排序后的数组
   printfArray(arr,len);
   
   // 地址传递 改变原数组
   cout<<arr[9]<<" ";

   
   return 0;
}