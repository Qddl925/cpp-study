#include<iostream>

using namespace std;

//��������ע������
//������Ϊ��������

void fun(int &a){
    cout<<"fun(int &a)����"<<endl;
}

void fun(const int &a){
    cout<<"fun(const int &a)����"<<endl;
}

//����������������Ĭ�ϲ���

void fun2(int a,int b=10){
    cout<<"fun2(int a,int b=10)����"<<endl;
}
void fun2(int a){
    cout<<"fun2(int a)����"<<endl;
}

int main(){
    //
    // const int a = 10;
    // fun(a);

    fun2(12,10); //��������������Ĭ�ϲ������ͳ��ֶ�����
    return 0;
}