#include<iostream>

using namespace std;
    // �����ĳ�����ʽ
    // 1 �޲��޷�
    void test1(){
        cout<<"����test1"<<endl;
    };
    // 2 �в��޷�
    void test2(string str){
        cout<<str<<endl;
    };
    // 3 �޲��з�
    int test3(){
        cout<<"����test3"<<endl;
        return 0;
    }
    // 4 �в��з�
    int test4(int a){
        cout<<"����test4"<<endl;
        return a++;
    }
int main(){
   string str ="����test2";
   test1();
   test2(str);
   test3();
   test4(99);
   return 0;
}