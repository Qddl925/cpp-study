#include<iostream>

using namespace std;

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
    student aArr[5];
};

// ���뺯��
void inputIt(teacher *p,int len){
    //����ʦ��ֵ
    string nameNeed="ABCDE";
    for(int i=0; i<len; i++){
        p->name="teacher_";
        p->name +=nameNeed[i];
        //����ѧ������Ϣ
        cout<<"��"<<i+1<<"λ��ʦѧ���ɼ����룺"<<endl;
        for(int j =0;j<5; j++){
            p->aArr[j].name = "student_";
            p->aArr[j].name +=nameNeed[j];
            cin>>p->aArr[j].score;
        }
        p++;
    }
}

//������е���Ϣ
void printfOut(const teacher *p,int len){
    for(int i=0; i<len; i++){
        //������ʦ
        cout<<"\n��ʦ������"<<p->name<<endl;
        for(int j=0;j<5;j++){
            cout<<"\tѧ��������"<<p->aArr[j].name<<endl;
            cout<<"\tѧ���ɼ���"<<p->aArr[j].score<<endl;
        }
        p++;
    }
}

int main(){
    // ����3λ��ʦ������
    teacher tArr[3];
    //����д�뺯�� ��������ʦ����ѧ����ֵ
    int len = sizeof(tArr)/sizeof(tArr[0]);
    inputIt(tArr,len);
    //����������� ��ӡ����ѧ����Ϣ
    printfOut(tArr,len);
    return 0;
}