#include<iostream>

using namespace std;

class Student{
    public:
    
    // ���е����Ժ���Ϊͳһ��Ϊ����Ա
    //���ԣ���Ա���� ��Ա����
    //��Ϊ����Ա���� ��Ա����


    string name; //����
    string Id; //ѧ��
    void show(){
    cout<<"���������������";
    cin >> name;
    cout<<"���������ѧ�ţ�";
    cin >> Id;
    cout<<"������"<<name<<endl;
    cout<<"ѧ�ţ�"<<Id<<endl;
    }
};

int main(){
    //ʵ����
    Student s1;
    s1.show();

    Student s2;
    s2.show();
    return 0;
}