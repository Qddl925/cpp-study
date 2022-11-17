#include<iostream>

using namespace std;

int main(){
   // 布尔类型代表真或假的值 1真0假
   bool b1 = true;
   cout << b1 << endl; // 1
   b1 = false;
   cout << b1 << endl; // 0
   cout <<"占用"<<sizeof(bool)<<"字节"<<endl;
   // 本质上1代表真 0代表假
   
   return 0;
}