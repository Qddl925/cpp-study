#include<iostream>

using namespace std;

// �ṹ����Ϊ���������д���
// 1 ֵ����
// 2 ��ַ����

//����ѧ���Ľṹ��
// ����һ��ѧ���Ľṹ��
struct student{
    // ����
    string name;
    // ����
    int age;
    // ����
    int score;
};

//ֵ����
void printStudent1(student s){
    s.name = "����";
    cout<<"ֵ���ݴ�ӡ��"<<endl;
    cout<<"������"<<s.name<<" ���䣺"<<s.age<<" �ɼ���"<<s.score<<endl;
}

//��ַ����
void printStudent2(student *p){
    p->age = 99;
    cout<<"��ַ���ݴ�ӡ��"<<endl;
    cout<<"������"<<p->name<<" ���䣺"<<p->age<<" �ɼ���"<<p->score<<endl;
}

int main(){
   //�ṹ���������Ĳ���
   //��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ

   // ����һ���ṹ�����
   student s = {"����",29,99};
   

   // �ú�����ӡ
   // printStudent1(s);
   // ����ַ
   printStudent2(&s);

   cout<<"�������д�ӡ��"<<endl;
   cout<<"������"<<s.name<<" ���䣺"<<s.age<<" �ɼ���"<<s.score<<endl;
   return 0;
}