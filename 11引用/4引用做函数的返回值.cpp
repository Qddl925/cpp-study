#include<iostream>

using namespace std;
//�����������ķ���ֵ
//�����ǿ�����Ϊ�����ķ���ֵ���ڵ�
//ע�⣺
//��Ҫ���ؾֲ���������
int& test1(){
    int a = 10; //������ڴ�������ջ��
    return a;
}

//����������Ϊ��ֵ
int& test2(){
    static int a = 10; //��̬���� �����ȫ������ȫ�����ϵ������ڳ��������ϵͳ�ͷ�
    return a;
}


int main(){
    // int &ref = test1();
    // �ñ��������������� ���Բ�������κ����� a���ڴ��Ѿ��ͷ�
    // ���ؾֲ������������һ���Ƿ�����
    // cout<<"ref: "<<ref<<endl;
    // cout<<"ref: "<<ref<<endl;

    int &ref2 = test2();
    cout<<"ref2: "<<ref2<<endl;
    cout<<"ref2: "<<ref2<<endl;
    // ����������Ϊ��ֵ ��������ֵ���Ըı�
    test2() = 100;
    // �����������ֵ�����ã�����������ÿ�����Ϊ��ֵ
    cout<<"ref2: "<<ref2<<endl;
    cout<<"ref2: "<<ref2<<endl;


    return 0;
}