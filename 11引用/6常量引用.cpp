#include<iostream>

using namespace std;
// ��������
// ���ã�����������Ҫ���������βΣ���ֹ�����

// ʹ�ó������ں����β��б��У����Լ�const�����βΣ���ֹ�β��޸�ʵ��

// ��ӡ���ݺ���
// ֻ��
void show(const int &val){ //�β�֮ǰ��const���Σ��βα�Ϊֻ��״̬
    // val+=10;
    cout<<"val = "<<val<<endl;
}

int main(){
    //
    int a =10;
    // ���ñ�����һ��Ϸ����ڴ�ռ�
    // ����const �������������޸�Ϊ int temp = 10; const int &ref = temp;
    // const int &ref = 10;
    // ref = 2; // ����const���ֻ�������޸�

    show(a);
    return 0;
}