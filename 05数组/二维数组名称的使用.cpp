#include<iostream>

using namespace std;

int main(){
   // 二维数组名称的用途
   // 1、可以查看占用内存空间的大小
   int arr[2][3]={
      {1,2,3},
      {4,5,6}
   };
   cout<<"二维数组占用的空间大小："<<sizeof(arr)<<endl;
   cout<<"二维数组首元素占用的空间大小："<<sizeof(arr[0][0])<<endl;
   cout<<"二维数组首行占用的空间大小："<<sizeof(arr[0])<<endl;
   // 2、可以查看二维数组的首地址
   cout<<"二维数组的首地址为："<<arr<<endl;
   // & 取值符号 获取元素的值
   cout<<"二维数组的第一个元素的地址："<<&arr[0][0]<<endl;

   // 二维数组元素的个数
   cout<<"二维数组中元素的个数"<<sizeof(arr)/sizeof(arr[0][0])<<endl;
   // 二维数组的行数为
   cout<<"二维数组的行数为"<<sizeof(arr)/sizeof(arr[0])<<endl;
   // 二维数组占的列数为
   cout<<"二维数组占的列数为"<<sizeof(arr[0])/sizeof(arr[0][0])<<endl;
   return 0;
}