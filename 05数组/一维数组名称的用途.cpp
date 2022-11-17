#include<iostream>

using namespace std;

int main(){
   //一维数组名称的用途：
   //可以统计整个数组再内存中的长度
   //可以获取数组在内存中的首地址
   int arr[5]={1,2,3,4,5};

   //可以统计整个数组再内存中的长度
   cout<<"当前数组的总长为"<<sizeof(arr)<<"字节"<<endl;
   cout<<"单个为"<<sizeof(arr[0])<<"字节"<<endl;
   
   //可以获取数组在内存中的首地址
   cout<<"当前数组再内存中的首地址"<<arr<<endl;
   cout<<"首元素的地址为："<<&arr[0]<<endl;
   cout<<"第一个元素的地址为："<<&arr[1]<<endl;

   // 数组名是常量，不可以进行赋值操作
   // arr = 100;
   // arr = NULL;
   return 0;
}