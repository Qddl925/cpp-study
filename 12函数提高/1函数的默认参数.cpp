#include<iostream>

using namespace std;
// c++�� �������β��б��ǿ�����Ĭ��ֵ��
// �﷨�� ����ֵ���� ������ ������ = Ĭ��ֵ��{ ������ }

// ����Լ����������ݣ������Լ������ݡ����û�У���ô��ʹ��Ĭ��ֵ

int func(int a,int b=20,int c=30){
    return a+b+c;
}

// ע������
// 1 ���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�ÿ�ʼ�������ұ��붼Ҫ��Ĭ��ֵ��
// int func2(int a,int b=20,int c){
//     return a+b+c;
// }  ����?

// 2 ���������������Ĭ�ϲ�����������ʵ�ֲ�����Ĭ�ϲ���
//     ������ʵ��ֻ����һ����Ĭ�ϲ���
int func2(int a=10,int b=20);

int func2(int a,int b){
    return a+b;
}

int main(){
    //
    cout<<func(10,30)<<endl;

    cout<<func2()<<endl;

    return 0;

}