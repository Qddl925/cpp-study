#include<iostream>

using namespace std;

struct hero
{
    // ����
    string name;
    // ����
    int age;
    // �Ա�
    string sex;
};

// ����������ð�ݺ���
// ��ֵ����
void bubbleSort(hero* heroArray,int len){
    //��ʼð������
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            if(heroArray[j].age>heroArray[j+1].age){
                hero temp = heroArray[j];
                heroArray[j] = heroArray[j+1];
                heroArray[j+1] = temp;
            }
        }
    }
}

// �����������������
void printfOut(const hero *p, int len){
    for(int i = 0;i<len; i++){
        cout<<" Ӣ�ۣ�"<<p->name<<" ���䣺"<<p->age<<" �Ա�"<<p->sex<<endl;
        p++;
    }
}


int main(){
    // һ���ṹ�������������ð������
    // ��Ƹýṹ��
    // ����������5��Ӣ��
    hero heroArray[5]={
        {"����",55,"��"},
        {"������",25,"Ů"},
        {"����",38,"��"},
        {"����",35,"��"},
        {"����",18,"Ů"}
    };
    int len = sizeof(heroArray)/sizeof(heroArray[0]);
    cout<<"����֮ǰ������Ϊ��"<< endl;
    printfOut(heroArray,len);
    // ������������� ����������������
    bubbleSort(heroArray,len);
    // ��ӡ���    
    cout<<"����֮�������Ϊ��"<< endl;
    printfOut(heroArray,len);
    return 0;
}