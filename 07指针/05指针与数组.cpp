#include<iostream>

using namespace std;

int main(){
   // 使用指针访问数组中的每个元素
   int arr [10]={1,2,3,4,5,6,7,8,9,10};
   cout<<"数组第一个元素"<<arr[0]<<endl;
   int *p = arr; // 指针指向数组的首地址
   cout<<"利用指针访问的数组首元素的地址："<<p<<endl;
   cout<<"利用指针访问第一个数组元素："<<*p<<endl;
   p++;
   // 偏移4字节
   cout<<"利用指针访问的数组第二个元素的地址："<<p<<endl;
   cout<<"利用指针访问第二个数组元素："<<*p<<endl;

   // 利用指针遍历数组
   int *p2 = arr;
   cout<<"利用指针遍历数组元素：";
   for(int i = 0;i<10; i++){
    if(i == 6){
        // 利用指针修改数组元素
        *p2 = 6;
    }
    cout<<*p2<<" ";
    p2++;
    
   }
   return 0;
}