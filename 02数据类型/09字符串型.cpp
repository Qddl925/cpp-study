#include<iostream>

using namespace std;

int main(){
   // ���ַ��
   // c��� char ������[] = "�ַ���ֵ";
   /*
   ע������
   1 char �ַ�����[]
   2 �Ⱥź���Ҫ�� �� ��
   */
   char str1[] = "hello world";
   cout << str1<<endl;

   // c++��� string ������ = "�ַ���ֵ"
   // ͷ�ļ� #include<string>
   string str2 = "hello my world";
   cout << sizeof(str2)<<endl;
   cout << str2<<endl;
   return 0;
}