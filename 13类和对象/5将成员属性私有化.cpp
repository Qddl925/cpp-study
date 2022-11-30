#include<iostream>

using namespace std;

//成员属性设置为私有
//优点1 将成员属性设置为私有，可以自己控制读写权限
//优点2 对于写权限，我们可以检测数据的有效性

// 设计人类
class Person{

public:
    //写姓名
    void setName(string name){
        m_name = name;
    }
    //获取姓名
    string getName(){
        return m_name;
    }

    //可读可写的权限（年龄必须是0~125）
    int getAge(){
        // m_age = 25; //初始化年龄
        return m_age;
    }

    //设置年龄
    void setAge(int age){
        if(age>=0 && age<=125){
            m_age = age;
        }else{
            m_age=-99;
            cout<<"你这个人瞎搞是吧？"<<endl;
            return;
        }
    }

    void setLover(string lover){
        m_lover = lover;
    }
private:
    //姓名 可读可写
    string m_name;
    //年龄 只读
    int m_age;
    //情人 只写
    string m_lover;
};

int main(){
    //实例化
    Person p;
    p.setName("李白");
    p.setAge(150);
    cout<<"这个人叫"<<p.getName()<<endl;
    cout<<"这个人才"<<p.getAge()<<"岁"<<endl;

    //设置情人为波多女士
    p.setLover("波多");
    //外部无法访问只写权限
    return 0;
}