#include<iostream>

using namespace std;
// ֵ����
// ���庯����ʵ���������ֽ��н�������

void swap(int a,int b){
    cout<<"����ǰ��";
    cout<<"a = "<<a<<" b = "<<b<<endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"������";
    cout<<"a = "<<a<<" b = "<<b<<endl;
}

int main(){
   int a =5;
   int b =10;
   // ֵ���ݣ��������βη����ı䣬�ǲ���ı�ʵ�ε�ֵ��
   swap(a,b);
   cout<<"ʵ�Σ�";
   cout<<"a = "<<a<<" b = "<<b<<endl;
   return 0;
}