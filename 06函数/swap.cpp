#include"swap.h"

void swap(int a,int b){
    cout<<"����ǰ��";
    cout<<"a = "<<a<<" b = "<<b<<endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"������";
    cout<<"a = "<<a<<" b = "<<b<<endl;
}