#include<iostream>

using namespace std;

int main(){
   //ָ��������÷�
   char LuanXingHai = 'A';

   // ��ȡֵ
   char *p = &LuanXingHai;
   cout<<*p<<endl;

   // �޸�ֵ
   *p = 'H';
   cout<<*p<<endl;
   return 0;
}