#include"swap.h"

void swap(int a,int b){
    cout<<"交换前：";
    cout<<"a = "<<a<<" b = "<<b<<endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"交换后：";
    cout<<"a = "<<a<<" b = "<<b<<endl;
}