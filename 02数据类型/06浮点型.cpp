#include<iostream>

using namespace std;

int main(){
    // ������ ���ڱ�ʾС��
    // ������ float 4�ֽ� ��Ч���ַ�Χ7λ
    // ˫���� double 8�ֽ� ��Ч���ַ�Χ15~16λ
    // ��������Ҳ����Ч����
    // Ĭ����������С��ֻ�����6λ��Ч����

    float a = 3.1415926896f;
    cout<<a<<endl;
    cout<<sizeof(float)<<endl; //ռ4λ
    double b = 3.1415926896;
    cout<<a<<endl; // ռ8�ֽ�
    cout<<sizeof(double)<<endl;

    // ��ѧ������
    float c = 3e2; //3*10^2 300
    float d = 3e-2; //3*10^-2 0.03
    cout<<c<<endl;
    cout<<d<<endl;


}