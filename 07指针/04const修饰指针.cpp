#include<iostream>

using namespace std;

int main(){
   // const ����ָ�������������

   // 1 const����ָ�� --����ָ�루const *��
   //  -�ص㣺ָ���ָ������޸ģ�����ָ��ָ���ֵ�����Ը�
   int a =0;
   int b =1;
   const int *p = &a;
   p = &b;
   // *p = b; ָ���ָ���ֵ�����Ը�

   
   // 2 const���γ��� --ָ�볣����* const��
   //  -�ص㣺ָ���ָ�򲻿����޸ģ�����ָ��ָ���ֵ���Ը�
   int * const p2 = &a;
   *p2 = b;
   // p2 = &b; ָ���ָ�򲻿��Ը�

   // 3 const����ָ�룬�����γ���
   //  -�ص㣺ָ���ָ�򲻿����޸ģ�ָ��ָ���ֵҲ�����Ը�
   const int * const p3 = &a;
   // *p3 = b;
   // p3 =&b;  ����


   return 0;
}