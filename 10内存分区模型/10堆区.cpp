#include<iostream>

using namespace std;

int* func(){
    // ����new�ؼ��� ���Խ����ݿ��ٵ�����
    // int a = 10;
    // return &a;

    // ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣�������ʱ����ջ��
    int *p = new int(10);
    // new�ؼ��ִ�����������
    return p;

    // ʹ��
}


int main(){
    //�ڶ�����������
    int *p = func();
    cout <<*p << endl;
    cout <<*p << endl;
    cout <<*p << endl;
    cout <<*p << endl;
    return 0;
}