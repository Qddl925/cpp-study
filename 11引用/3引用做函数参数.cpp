#include<iostream>

using namespace std;
// ��������������
/*
���ã���������ʱ�������������õļ������β������β�
�ŵ㣺���Լ�ָ���޸�ʵ��
*/

//��������
//ֵ����
void swap1(int a,int b) {
    int temp = a;
    a = b;
    b = temp;
}
//��ַ����
void swap2(int *a,int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//���ô���
//ʹ�����ý��ղ���
//�޸����ò���Ҳ�ᱻ�޸�
//Ҳ������ڴ���˷�
void swap3(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    //
    int a = 10,b =15;
    swap1(a,b);
    cout << "a = " << a <<"\nb ="<<b <<endl;
    // ֵ���ı�

    swap2(&a,&b);
    cout << "a = " << a <<"\nb ="<<b <<endl;
    // ֵ�ı�

    swap3(a,b);
    cout << "a = " << a <<"\nb ="<<b <<endl;
    // ֵ�ı� ����Ҳ��������ʵ��

    return 0;
}