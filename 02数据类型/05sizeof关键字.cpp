#include<iostream>

using namespace std;

int main(){
    // sizeof�ؼ��ֿ���ͳ������������ռ�ڴ��С
    // sizeof(��������/����)

    cout << "short ������ռ���ڴ�ռ��Ϊ��"<<sizeof(short)<<"�ֽ�"<<"\n";
    cout << "int ������ռ���ڴ�ռ��Ϊ��"<<sizeof(int)<<"�ֽ�"<<"\n";
    cout << "long ������ռ���ڴ�ռ��Ϊ��"<<sizeof(long)<<"�ֽ�"<<"\n";
    cout << "long long ������ռ���ڴ�ռ��Ϊ��"<<sizeof(long long)<<"�ֽ�"<<"\n";
    
    // ���ʹ�С�Ƚ�
    // short<int<=long(linux 64λ)<=long long
}