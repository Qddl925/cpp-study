#include<iostream>

using namespace std;

#define MAX 1000;

// ����һ��ȫ�ֱ���
int g_a = 10;
int g_b = 10;

const int c_a = 10;
const int c_b = 10;


int main(){
    //ȫ����
    //ȫ�ֱ�������̬����������

    //������ͨ�ľֲ�����
    int a = 10;
    int b = 10;

    cout<<"�ֲ�����a�ĵ�ַ��"<<&a<<endl;
    cout<<"�ֲ�����b�ĵ�ַ��"<<&b<<endl;
    cout<<"ȫ�ֱ���a�ĵ�ַ��"<<&g_a<<endl;
    cout<<"ȫ�ֱ���b�ĵ�ַ��"<<&g_b<<endl;

    // ��̬����
    // ����ͨ����ǰ�ӹؼ��� static ���ھ�̬����
    static int s_a = 10;
    static int s_b = 10;
    cout<<"��̬����a�ĵ�ַ��"<<&s_a<<endl;
    cout<<"��̬����b�ĵ�ַ��"<<&s_b<<endl;

    // ���� 
    // �ַ�������
    cout<<"�ַ��������ĵ�ַ��"<<&"hello world"<<endl;
    
    // const���εı���

    // const���ε�ȫ�ֱ���
    cout<<"ȫ�ֳ���a�ĵ�ַ��"<<&c_a<<endl;
    cout<<"ȫ�ֳ���b�ĵ�ַ��"<<&c_b<<endl;
    
    // const���εľֲ�����
    const int c_l_a = 0;
    const int c_l_b = 0;
    cout<<"�ֲ�����a�ĵ�ַ��"<<&c_l_a<<endl;
    cout<<"�ֲ�����b�ĵ�ַ��"<<&c_l_b<<endl;

    // �궨�峣��
    // cout<<"�궨�峣����ַ��"<<&(MAX)<<endl;

    return 0;
}