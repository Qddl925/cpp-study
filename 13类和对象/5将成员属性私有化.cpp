#include<iostream>

using namespace std;

//��Ա��������Ϊ˽��
//�ŵ�1 ����Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
//�ŵ�2 ����дȨ�ޣ����ǿ��Լ�����ݵ���Ч��

// �������
class Person{

public:
    //д����
    void setName(string name){
        m_name = name;
    }
    //��ȡ����
    string getName(){
        return m_name;
    }

    //�ɶ���д��Ȩ�ޣ����������0~125��
    int getAge(){
        // m_age = 25; //��ʼ������
        return m_age;
    }

    //��������
    void setAge(int age){
        if(age>=0 && age<=125){
            m_age = age;
        }else{
            m_age=-99;
            cout<<"�������Ϲ���ǰɣ�"<<endl;
            return;
        }
    }

    void setLover(string lover){
        m_lover = lover;
    }
private:
    //���� �ɶ���д
    string m_name;
    //���� ֻ��
    int m_age;
    //���� ֻд
    string m_lover;
};

int main(){
    //ʵ����
    Person p;
    p.setName("���");
    p.setAge(150);
    cout<<"����˽�"<<p.getName()<<endl;
    cout<<"����˲�"<<p.getAge()<<"��"<<endl;

    //��������Ϊ����Ůʿ
    p.setLover("����");
    //�ⲿ�޷�����ֻдȨ��
    return 0;
}