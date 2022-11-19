#include<iostream>

using namespace std;

void test(char *value){
   cout<<*value<<endl;
   cout<<value<<endl;
   *value = 'H';
}


int main(){
   //
   char LuanXingHai = 'A';
   char *p = &LuanXingHai;
   test(p);
   cout<<*p<<endl;
   cout<<p<<endl;
   return 0;
}