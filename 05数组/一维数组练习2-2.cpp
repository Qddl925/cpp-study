#include<iostream>

using namespace std;

int main(){
   //ʵ��Ԫ������
   int arr[5]={1,3,2,4,5};
   int start = 0; //��ʼ�±�λ��
   int end=sizeof(arr)/sizeof(arr[0])-1;  //�����±��λ��
   int temp = 0; // ��ʱ�����洢
   while(start<end){
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    //ʵ��Ԫ�ػ���
    start++;
    end--; // �����±�
   }
   for(int i=0; i<5; i++){
    cout << arr[i]<<" ";
   }
   return 0;
}