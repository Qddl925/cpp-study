#include<iostream>

using namespace std;

int main(){
   // 三只小猪谁最重
   // 用户输入体重 返回最大的
   int pigA, pigB, pigC;
   cin >> pigA >> pigB >> pigC;
   cout << (pigA > pigB ? (pigA > pigC ? pigA : pigC) : (pigB > pigC ? pigB : pigC)) << endl;
   return 0;
}