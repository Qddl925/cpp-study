#include<iostream>

using namespace std;

// struct��classΨһ����������� Ĭ�ϵķ���Ȩ�޲�ͬ
// struct Ĭ��Ȩ��Ϊ����
// class Ĭ��Ȩ��Ϊ˽��
class C1{
    int m_A; //Ĭ��Ȩ��Ϊ˽��
};

struct C2{
    int m_A; //Ĭ��Ȩ��Ϊ����
};

int main(){
    //ʵ����
    C1 c1;
    // c1.m_A =10; ���� Ĭ��Ȩ��Ϊ˽��
    C2 c2;
    c2.m_A =15;
    return 0;
}