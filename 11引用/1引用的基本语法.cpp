#include<iostream>

using namespace std;

// ���ã������������
// �﷨���������� &���� = ԭ��



int main(){
    //����
    int a = 10;
    // ��������
    int &b = a;


    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    a=115;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    b = 100;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    
    return 0;
}