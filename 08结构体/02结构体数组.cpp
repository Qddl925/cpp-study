#include<iostream>

using namespace std;

   // �ṹ������
   // ���Զ���Ľṹ����뵽�����з���ά��

// 1 ����һ���ṹ��
struct Student {
   // ����
    string name;
    // ����
    int age;
    // ����
    int score;
};





int main(){
   // 2 ����һ���ṹ������
   struct Student stuArr[3]={
      {"����",18,55},
      {"����",22,66},
      {"����",55,99}
   };
   // 3 ���ṹ�������е�Ԫ�ظ�ֵ
   stuArr[2].name = "����";
   stuArr[2].age = 42;
   stuArr[2].score = 88;
   // 4 �����ṹ������
   for(int i =0; i<3; i++){
      cout<<"������"<<stuArr[i].name<<"���䣺"<<stuArr[i].age<<"������"<<stuArr[i].score<<endl;
   }
   return 0;
}