#include<iostream>

using namespace std;

// ��������
// ���ã�������������ͬ����߸�����

// ����������������
// 1 ͬһ����������
// 2 ����������ͬ
// 3 �����������Ͳ�ͬ ���߸�����ͬ����˳��ͬ

// ע�⺯���ķ���ֵ��������Ϊ�������ص�����

void func(){
    cout<<"����func";
}

void func(int){ //�޷����ؽ��������������ֵĺ���
    cout<<"\n����func(int)!";
}

void func(double){
    cout<<"\n����func(double)!";
}

void func(int a,double b){
    cout<<"\n����func(int double)!";
}

void func(double a,int b){
    cout<<"\n����func(double int)!";
}

//ע�����
//�������Ͳ�������Ϊ�������ص�����

int main(){
    //
    func();
    func(555);
    func(4.55);
    func(4,53.554);
    func(5.235,2);
    return 0;
}