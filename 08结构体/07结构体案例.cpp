#include<iostream>

using namespace std;
//��Ŀ����
   //������ʦ������ѧ��
   //���������ṹ��
   //ѧ���� ���� ���Է���
   //��ʦ�� ���� ����ѧ��
   //ͨ��������ÿ����ʦ������ѧ����ֵ ���մ�ӡ����ʦ�������Լ���ʦ����ѧ��������

//˼·��
    //����ṹ��
    //������ʦ����
    //������ �����ṹ�����鲢��ֵ
    //�������������ӡ��������
//����ʹ�� ��ַ���ݵķ�ʽ ���ӽ�Լ�ڴ�ռ� ��������const��

//ѧ���ṹ��
struct student
{
    string name;//����
    int score;//����
};
//��ʦ�ṹ��
struct teacher
{
    string name; //����
    //���ѧ��
    //�˴�ʹ������
    //Ƕ��ѭ��
    student stu1;
    student stu2;
    student stu3;
    student stu4;
    student stu5;
};

// д�뺯��
void inputIt(teacher *p){
    cout<<"����������:��ʦ���� ��λѧ����������ɼ�"<<endl;
    for(int i=0; i<3; i++){
        cout<<"�������"<<i+1<<"λ��ʦ����Ϣ"<<endl;
        cin>>p->name>>p->stu1.name>>p->stu1.score>>p->stu2.name>>p->stu2.score>>
        p->stu3.name>>p->stu3.score>>p->stu4.name>>p->stu4.score>>p->stu5.name>>
        p->stu5.score;
        p++;
    }
}

// �������
void printfOut(const teacher *p){
    for(int i= 0;i<3;i++){
        cout<<"\n��"<<i+1<<"λ��ʦ����Ϣ:"<<endl;
        cout<<"��ʦ������"<<p->name<<"\n��1λѧ����"<<p->stu1.name<<"�ɼ���"<<p->stu1.score
        <<"\n��2λѧ����"<<p->stu2.name<<"�ɼ���"<<p->stu2.score<<"\n��3λѧ����"<<p->stu3.name<<"�ɼ���"
        <<p->stu3.score<<"\n��4λѧ����"<<p->stu4.name<<"�ɼ���"<<p->stu4.score<<"\n��5λѧ����"
        <<p->stu5.name<<"�ɼ���"<<p->stu5.score;
        p++;
    }
}

int main(){
    // ������ʦ������
    teacher t[3];
    //����д�뺯��
    inputIt(t);
    //�����������
    printfOut(t);
    return 0;
}