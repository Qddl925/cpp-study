#include<iostream>

using namespace std;

// ����������
// �������ֵ
// ����������
int max(int a, int b);

int main(){
   // ���ú���
   int mun =  max(5,66);
   cout <<mun;
   return 0;
}
// �����Ķ���
// �������ֵ
int max(int a, int b) {
    return a > b ?a:b;
}

// ���� ����ֻ����һ��
// int max(int a, int b) {
//     return a > b ?a:b;
// }

// ���������ж����������ֻ�ܶ���һ��