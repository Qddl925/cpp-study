#include<iostream>

using namespace std;

//2 ����һ������ʵ��ð������
// ����һ ������׵�ַ
// ������ ����ĳ���
void bubbleSort(int *arr,int len){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            // ���j>j+1 ��������
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}
// ��ӡ����
void printfArray(int *arr,int len){
    for(int i=0;i<len; i++){
        cout<<arr[i]<<" ";
        
    }
}


int main(){
   //1 �ȴ���һ������
   int arr[10]={0,5,8,9,6,3,4,7,1,2};
   int len = sizeof(arr)/sizeof(arr[0]);
   bubbleSort(arr,len);
   //3 ��ӡ����������
   printfArray(arr,len);
   
   // ��ַ���� �ı�ԭ����
   cout<<arr[9]<<" ";

   
   return 0;
}