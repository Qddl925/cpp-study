#include<iostream>
//time 系统时间头文件
#include<ctime>
using namespace std;

int main(){

    /*
     添加随机数种子 作为利用当前系统时间生成随机数 防止每次生成的随机数都是一样的（伪随机数）
    */
    srand((unsigned int)time(NULL));

   // 猜数字游戏
   // 生成随机数

   // 伪随机数
   int num = rand()%100; // rand()%100+1 生成0+1 ~ 99+1 的随机数
   int find = 0,chance = 8;
   cout <<"请输入你的猜测的数："<<endl;
   cout <<"你只有8次机会"<<endl;
   while (1)
   {
    cin >> find;
    if(find == num){
        cout <<"猜对了，这个数就是："<<num<<endl;
        cout <<"你只用了"<<8-chance<<"次机会就通关了！";
        break;
    }else if(find > num){
        cout <<"大了！"<<endl;
    }else{
        cout <<"小了！"<<endl;
    }
    chance--;
    cout<<"剩余次数："<<chance<<endl;
    if(chance == 0){
        cout<<"你的次数已用完了";
        break;
    }
   }
   
   // break 可以使用该关键字退出当前循环
   return 0;
}