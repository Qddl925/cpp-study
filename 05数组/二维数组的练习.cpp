#include<iostream>
using namespace std;
int main(){
    // ��֪���˳ɼ����ֱ�������˵��ܳɼ�
    int grade[3][3]={
        {100,100,100},
        {90,50,100},
        {60,70,80},
    };
    string people[3]={"�������ܳɼ�","���ĵ��ܳɼ�","������ܳɼ�"};
    //������ά���飬��һ��������ֵ
    int sum =0; // sum �����洢ÿ���˵��ܳɼ�
    for(int i=0; i<3; i++){
        //������
        sum = 0; // ÿ��һ�о�Ҫ��ʼ��sum��ֵ
        for(int j=0;j<3; j++){
            // ������
            sum+=grade[i][j];
        }
        // �ֱ�������˵ĳɼ�
        cout<<people[i]<<sum<<endl;
    }
    return 0;
}