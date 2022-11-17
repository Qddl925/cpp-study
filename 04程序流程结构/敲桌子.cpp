#include<iostream>
using namespace std;
int main(){
    // 敲桌子 
    // 含7或者7的倍数打印敲桌子，其余正常打印数字
    for(int i=1;i<101;i++){
        if(i%7==0 || i%10 == 7 || i/10 == 7){
            cout <<"敲桌子"<<endl;
        }else{
            cout <<i<<endl;
        }
    }
    return 0;
}