#include<iostream>

using namespace std;

// ʵ���������ֽ��н�����
void swap01(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"swap01�еģ�";
    cout<<"a = "<<a<<",b = "<<b<<endl;
}

void swap02(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
   //ָ���뺯��

   //1 ֵ����
   int a = 1;
   int b = 2;
   swap01(a,b);
   cout<<"a = "<<a<<",b = "<<b<<endl;

   //2 ��ַ����
   // ����ǵ�ַ���ݣ��ǿ�������ʵ�ε�
   swap02(&a, &b);
   cout<<"a = "<<a<<",b = "<<b<<endl;
   return 0;
}