#include<iostream>

using namespace std;

//����Ȩ������
//public ����Ȩ��
//protected ����Ȩ��  �̳� ���ӿ��Է��ʸ��ױ���������
//private ˽��Ȩ��  �̳� ���Ӳ����Է��ʸ���˽�е�����
// ����Ȩ�����ڶ����Է��ʣ�ֻ��public���������

class Person{
    //����Ȩ��
public:
    string name; //����
    //����Ȩ��
protected:
    string car; //����
    //˽��Ȩ��
private:
    int money; //���

public:
    void fun1(){
        name="�����";
        car="��˹��˹";
        money=9999999;
        cout<<name<<"����"<<car<<"�����"<<money<<endl;
    }
};

int main(){
    //ʵ��������
    Person p1;
    p1.name="����";
    // p1.car="����";
    // p1.money=10086; ��Ա���ⲻ�ɷ���

    p1.fun1();

    return 0;
}