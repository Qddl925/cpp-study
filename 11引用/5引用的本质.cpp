#include<iostream>

using namespace std;
// ���õı��ʣ�
// ���õı�����c++�ڲ���һ��ָ�볣��
// * const

void func(int& ref){
    ref = 100;
}

int main(){
    int a = 10;
    //�Զ�����ת�� int* const ref = &a; ָ�볣����ָ���ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
    int & ref = a;
    ref = 20; // �ڲ�����ref�����ã��Զ�������ת�� *ref = 20;

    cout<<"a:"<<a<<endl;
    cout<<"ref:"<<ref<<endl;
    

    func(a);



    // �Ƽ�ʹ�����ü�������Ϊ�﷨���㣬���ñ�����ָ�볣����

    return 0;
}