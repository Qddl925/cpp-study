#include<iostream>

using namespace std;

//�ṹ��ָ��
//���ã�ͨ��ָ����ʽṹ���еĳ�Ա

//���� -> ����ͨ���ṹ��ָ����ʽṹ������

// ����ѧ���Ľṹ��
struct Student{
    // ��Ա�б�
    // ����
    string name;
    // ����
    int age;
    // ����
    int score;
};

int main(){
   //����ѧ���Ľṹ�����
   Student stu1 = {"����",18,55};
   //ͨ��ָ��ָ��ṹ�����
//    Student stu2 = {"����",55,99};
   Student *p = &stu1;
//    p++;
   //ͨ��ָ����ʽṹ������е�����
   //ͨ���ṹ��ָ����ʽṹ���е����ԣ���Ҫ����'->'
   cout<<"������"<<p->name<<"���䣺"<<p->age<<"�ɼ���"<<p->score<<endl;
   return 0;
}