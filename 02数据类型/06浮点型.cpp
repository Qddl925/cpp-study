#include<iostream>

using namespace std;

int main(){
    // 浮点数 用于表示小数
    // 单精度 float 4字节 有效数字范围7位
    // 双精度 double 8字节 有效数字范围15~16位
    // 整数部分也是有效数字
    // 默认情况下输出小数只会输出6位有效数字

    float a = 3.1415926896f;
    cout<<a<<endl;
    cout<<sizeof(float)<<endl; //占4位
    double b = 3.1415926896;
    cout<<a<<endl; // 占8字节
    cout<<sizeof(double)<<endl;

    // 科学计数法
    float c = 3e2; //3*10^2 300
    float d = 3e-2; //3*10^-2 0.03
    cout<<c<<endl;
    cout<<d<<endl;


}