#include<iostream>
using namespace std;
int main(){
    // ˮ�ɻ���
    int i = 100;
    do{
        int a, b, c; //�١�ʮ����λ��
        a = i /100;
        b = (i / 10)%10;
        c = i % 10;
        if(i == a*a*a + b*b*b + c*c*c){
            cout<<i<<endl;
        }
        i++;
    }while(i<1000);
}