#include<iostream>

using namespace std;

int main(){
   // ��������Ԫ��
   int arr[5]={1,2,3,4,5}; //���岢��ֵԭ����
   int newArray[5]; //����һ���µ�����洢��������
   // �������ԭ����,����ֵ��������
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