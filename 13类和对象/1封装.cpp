#include<iostream>

using namespace std;
// c++���������������ԣ���װ���̳кͶ�̬
// ����������Ƕ���

const double PI = 3.14; 

// ��װ
//���һ��Բ�࣬��Բ���ܳ�
// c = 2*PI*r;
class Circle{
    //����Ȩ��
public:
    //���Բ������
    int m_r; //�뾶
    //���Բ����Ϊ
    //��ȡԲ���ܳ�
    double calculateZC(){
        return 2*PI*m_r;
    }
};


int main(){
    //ͨ��Բ�ഴ�������Բ������
    Circle c1;  //ʵ����
    //��Բ��������Ը�ֵ
    c1.m_r = 10;
    // 2*3.14*10=62.8
    cout<<"Բ���ܳ�Ϊ��"<<c1.calculateZC()<<endl;
    return 0;
}