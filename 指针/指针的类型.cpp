#include<iostream>

using namespace std;

int main(){
   //ָ�������
   int num = 512;
   // 4�ֽ�
   char *p = (char*)&num;
   *p += 1;
   cout<<*p<<endl;
   return 0;
}