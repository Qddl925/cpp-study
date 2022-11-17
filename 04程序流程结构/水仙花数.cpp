#include<iostream>
using namespace std;
int main(){
    // 水仙花数
    int i = 100;
    do{
        int a, b, c; //百、十、个位数
        a = i /100;
        b = (i / 10)%10;
        c = i % 10;
        if(i == a*a*a + b*b*b + c*c*c){
            cout<<i<<endl;
        }
        i++;
    }while(i<1000);
}