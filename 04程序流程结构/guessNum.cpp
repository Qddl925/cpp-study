#include<iostream>
//time ϵͳʱ��ͷ�ļ�
#include<ctime>
using namespace std;

int main(){

    /*
     ������������ ��Ϊ���õ�ǰϵͳʱ����������� ��ֹÿ�����ɵ����������һ���ģ�α�������
    */
    srand((unsigned int)time(NULL));

   // ��������Ϸ
   // ���������

   // α�����
   int num = rand()%100; // rand()%100+1 ����0+1 ~ 99+1 �������
   int find = 0,chance = 8;
   cout <<"��������Ĳ²������"<<endl;
   cout <<"��ֻ��8�λ���"<<endl;
   while (1)
   {
    cin >> find;
    if(find == num){
        cout <<"�¶��ˣ���������ǣ�"<<num<<endl;
        cout <<"��ֻ����"<<8-chance<<"�λ����ͨ���ˣ�";
        break;
    }else if(find > num){
        cout <<"���ˣ�"<<endl;
    }else{
        cout <<"С�ˣ�"<<endl;
    }
    chance--;
    cout<<"ʣ�������"<<chance<<endl;
    if(chance == 0){
        cout<<"��Ĵ�����������";
        break;
    }
   }
   
   // break ����ʹ�øùؼ����˳���ǰѭ��
   return 0;
}