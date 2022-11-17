#include<iostream>

using namespace std;
    // 函数的常见样式
    // 1 无参无返
    void test1(){
        cout<<"我是test1"<<endl;
    };
    // 2 有参无返
    void test2(string str){
        cout<<str<<endl;
    };
    // 3 无参有返
    int test3(){
        cout<<"我是test3"<<endl;
        return 0;
    }
    // 4 有参有返
    int test4(int a){
        cout<<"我是test4"<<endl;
        return a++;
    }
int main(){
   string str ="我是test2";
   test1();
   test2(str);
   test3();
   test4(99);
   return 0;
}