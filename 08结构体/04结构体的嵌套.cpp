#include<iostream>

using namespace std;

// �ṹ��Ƕ�׽ṹ��

// ����һ��ѧ���Ľṹ��
struct student{
    // ����
    string name;
    // ����
    int age;
    // ����
    int score;
};

// ����һ����ʦ�Ľṹ��
struct teacher {
    int id; // ���
    string name; //����
    int age; //����
    struct student stu; //��������ѧ��
};



int main(){
   //
   teacher t;
   t.id =0111;
   t.name ="ciddy";
   t.age=23;
   t.stu.age=15;
   t.stu.name="�����";
   t.stu.score=53;

   // ���
   cout<<"��ʦ������"<<t.name<<" ְ����ţ�"<<t.id<<" ְ�����䣺"<<t.age<<endl<<" ����ѧ����"<<t.stu.name<<" ����ѧ�����䣺"<<t.stu.age<<" ����ѧ���ɼ���"<<t.stu.score<<endl;
   student stu;

   // �ڽṹ���п��Զ�����һ���ṹ����Ϊ��Ա�������ʵ�ʵ�����
   return 0;
}