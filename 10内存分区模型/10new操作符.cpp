#include<iostream>

using namespace std;

// new�Ļ����﷨

int *func(){
    // �ڶ�������һ�����͵�����
    // new ���ص��� ���������͵�ָ��
    int *p = new int(10);
    return p;
}


void test01(){
    int *p = func();
    cout<<*p<<endl;
    
    delete p;

    // cout<<*p<<endl;
}

// �ڶ�������new��������
void test02(){
    // ����10�������ݵ����ͣ��ڶ���
    int *arr = new int[10]; // ����������10��Ԫ��

    for(int i=0; i<10;  i++){
        arr[i] = i;
    }
    for(int i=0; i<10;  i++){
        cout<<arr[i]<<endl;
    }
    // �ͷŶ���������
    // �ͷ�����Ҫ��[]�ſ���
    delete[] arr;
}

int main(){
    //new �������ڶ�����������
    /*
    �﷨�� new ��������
    */

    // test01();
    // �����������ɳ���Ա�����٣�����Ա�����ͷ�
    // ������ͷŶ��������ݣ����ùؼ���delete

    test02();
    
    return 0;
}