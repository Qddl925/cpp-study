#include<iostream>

using namespace std;

int main(){
   //
   char LuanXingHai = 'A';
   //'H'Ҫ����char
   // ��һ
//    LuanXingHai = 'H';

   // 1 ��¼Ŀ�ĵ�
   // &LuanXingHai;
   // 2 ����һ�������� ָ��
   // char* p;
   // 3 ֱ�Ӹ�ֵ ����ָ���ֵ
   // p = &LuanXingHai;

   // 4 ����
   // *p='H'; // LuanXingHai = 'H'

   char* p = &LuanXingHai;

   cout<<*p;

   return 0;
}