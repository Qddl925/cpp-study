#include<iostream>

using namespace std;

int main(){
   // ��32λ����ϵͳ��ռ4�ֽ�
   // ��64λ����ϵͳ��ռ8�ֽ�
   // �����κ���������

   int a = 1;
   int *p;
   p = &a;
   // �ȼ��� int *p = &a;
   cout<<"ָ����ڴ�ռ䣺"<<sizeof(p)<<endl;
   cout<<"ָ��int�͵��ڴ�ռ䣺"<<sizeof(int*)<<endl;
   cout<<"ָ��double�͵��ڴ�ռ䣺"<<sizeof(double*)<<endl;
   cout<<"ָ��float�͵��ڴ�ռ䣺"<<sizeof(float*)<<endl;
   cout<<"ָ��char�͵��ڴ�ռ䣺"<<sizeof(char*)<<endl;
   return 0;
}