#include<iostream>
using namespace std;
int main(){
    // 打印乘法口诀表
    for(int i=1; i<10;i++){
        for(int j=1;j<i+1;j++){
            cout << j <<" * "<< i << " = " << j*i<<" ";
        }
        cout<<endl;
    }
    return 0;
}