#include<iostream>

using namespace std;

int main(){
   // ��ά�������Ƶ���;
   // 1�����Բ鿴ռ���ڴ�ռ�Ĵ�С
   int arr[2][3]={
      {1,2,3},
      {4,5,6}
   };
   cout<<"��ά����ռ�õĿռ��С��"<<sizeof(arr)<<endl;
   cout<<"��ά������Ԫ��ռ�õĿռ��С��"<<sizeof(arr[0][0])<<endl;
   cout<<"��ά��������ռ�õĿռ��С��"<<sizeof(arr[0])<<endl;
   // 2�����Բ鿴��ά������׵�ַ
   cout<<"��ά������׵�ַΪ��"<<arr<<endl;
   // & ȡֵ���� ��ȡԪ�ص�ֵ
   cout<<"��ά����ĵ�һ��Ԫ�صĵ�ַ��"<<&arr[0][0]<<endl;

   // ��ά����Ԫ�صĸ���
   cout<<"��ά������Ԫ�صĸ���"<<sizeof(arr)/sizeof(arr[0][0])<<endl;
   // ��ά���������Ϊ
   cout<<"��ά���������Ϊ"<<sizeof(arr)/sizeof(arr[0])<<endl;
   // ��ά����ռ������Ϊ
   cout<<"��ά����ռ������Ϊ"<<sizeof(arr[0])/sizeof(arr[0][0])<<endl;
   return 0;
}