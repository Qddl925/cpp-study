#include<iostream>

using namespace std;

int main(){
   //ð������
   int arr[9]={4,2,8,0,5,5,7,1,3};
   cout<<"ð������ǰ��";
   for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;

   // ��ʼð������
   // ���������� = Ԫ�ظ���-1
   // ÿ��������� = Ԫ�ظ���-��������-1
   for(int i=0;i<9-1;i++){
     // ����������
     for(int j =0;j<9-i-1;j++){
        //ÿ��������
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
     }
   }
   cout<<"ð�������";
   for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
   }
   return 0;
}