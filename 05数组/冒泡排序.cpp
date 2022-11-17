#include<iostream>

using namespace std;

int main(){
   //Ã°ÅİÅÅĞò
   int arr[9]={4,2,8,0,5,5,7,1,3};
   cout<<"Ã°ÅİÅÅĞòÇ°£º";
   for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;

   // ¿ªÊ¼Ã°ÅİÅÅĞò
   // ÅÅĞò×ÜÂÖÊı = ÔªËØ¸öÊı-1
   // Ã¿ÂÖÅÅĞò´ÎÊı = ÔªËØ¸öÊı-ÅÅĞòÂÖÊı-1
   for(int i=0;i<9-1;i++){
     // ×ÜÅÅĞòÂÖÊı
     for(int j =0;j<9-i-1;j++){
        //Ã¿ÂÖÅÅĞòÊı
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
     }
   }
   cout<<"Ã°ÅİÅÅĞòºó£º";
   for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
   }
   return 0;
}