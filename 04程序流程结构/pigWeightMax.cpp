#include<iostream>

using namespace std;

int main(){
   // ��ֻС��˭����
   // �û��������� ��������
   int pigA, pigB, pigC;
   cin >> pigA >> pigB >> pigC;
   cout << (pigA > pigB ? (pigA > pigC ? pigA : pigC) : (pigB > pigC ? pigB : pigC)) << endl;
   return 0;
}