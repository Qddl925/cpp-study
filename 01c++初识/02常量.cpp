#include<iostream>
using namespace std;
#define MAX 100;
int main(){
    // define定义的常量也不可以修改
    cout<<MAX;
    const int MIN = 1;
    // const 定义的常量也是不可以修改的
    return 0;
}