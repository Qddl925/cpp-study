#include<iostream>

using namespace std;

int main(){
   // ���ڸ��ݱ��ʽ��ֵ������ֵ���߼�ֵ

   // �� ��
   int a = 10;
   // ��c++�� ����0��Ϊ��
   cout<<!a<<endl;// 0
   cout<<!!a<<endl; //1

   // && �� һ��ȫ��
   // ��һ���ж�Ϊ�٣��򲻹����������ٶ������ж�
   int b = 0;
   if(a > 15 && ++b){
    cout<<b<<endl;
   }

   // || �� һ��Ϊ��
   // ��һ���ж�Ϊ�棬�򲻹����������ٶ������ֱ�ӽ����ж����
   if(a > 5 || ++b){
    cout <<b<<endl;
   }
   return 0;
}