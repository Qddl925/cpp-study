#include<iostream>

using namespace std;

// �ṹ���е�const
// ���ã� Ϊ�˷�ֹ�����

// ����һ��ѧ���Ľṹ��
struct student{
    // ����
    string name;
    // ����
    int age;
    // ����
    int score;
};
// void printfStudent(student s){
//     // �൱�ڽ�����һ�����ݲ���
//     cout<<"������"<<s.name<<" ���䣺"<<s.age<<" �ɼ���"<<s.score<<endl;
//     // ������ɾ���˱���
// }

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ���˷ѣ����Ҳ��Ḵ�Ƴ��µĸ�������

void printfStudent(const student *p){
    // ������б��ݲ���
    // p->age = 55;
    // ����const��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ���ǵ������
    cout<<"������"<<p->name<<" ���䣺"<<p->age<<" �ɼ���"<<p->score<<endl;
}

int main(){
   //�����ṹ�����
   student s = {"����",15,66};

   // ͨ��������ӡ�ṹ���������Ϣ
   printfStudent(&s);
   cout<<"���������䣺"<<s.age;
   return 0;
}