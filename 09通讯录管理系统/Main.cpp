#include <iostream>

using namespace std;
#define MAX_SIZE 1000

//�Զ���ṹ��
//��ϵ�˽ṹ��
struct people {
    //����
    string name;
    //�Ա�
    string sex;
    //����
    int age;
    //��ϵ�绰
    string teleNumber;
    //��ͥסլ
    string address;
};

// ����ͨѶ¼�ṹ��
struct addressBook {
    // ��ϵ�˱��
    int id;
    // ��ϵ������
    people peopleArray[MAX_SIZE];
};

//��ʾ�˵�����
void showMenu()
{
    cout << "***��ӭʹ��ͨѶ¼����ϵͳ***" << endl;
    cout << "******1.�����ϵ��********" << endl;
    cout << "******2.��ʾ��ϵ��********" << endl;
    cout << "******3.ɾ����ϵ��********" << endl;
    cout << "******4.������ϵ��********" << endl;
    cout << "******5.�޸���ϵ��********" << endl;
    cout << "******6.�����ϵ��********" << endl;
    cout << "******0.�˳�ͨѶ¼********" << endl;
    cout << "****************************" << endl;
}

// �����ϵ�˺���
void addPerson(addressBook *abs){
    // �ж�ͨѶ¼�Ƿ�Ϊ��
    if(abs->id == MAX_SIZE){
        cout<<"ͨѶ¼�������޷����"<< endl;
    }else{
        // ��Ӿ�����ϵ��
        cout<<"������";
        cin>>abs->peopleArray[abs->id].name;
        cout<<"�Ա�";
        cin>>abs->peopleArray[abs->id].sex;
        cout<<"���䣺";
        cin>>abs->peopleArray[abs->id].age;
        cout<<"�绰��";
        cin>>abs->peopleArray[abs->id].teleNumber;
        cout<<"��ͥ��ַ��";
        cin>>abs->peopleArray[abs->id].address;
        (abs->id)++;
    }
    // ����ϵͳ�ĺ���
    system("pause");
    system("cls");
}

// ��ʾ����
void showPerson(addressBook *p){
    // �ж�ͨѶ¼���Ƿ�����
    // �����Ϊ0����ʾ��¼����ϵ����Ϣ
    if(p->id == 0){
        cout<< "��ǰ��¼Ϊ��"<< endl;
    }
    else{
        cout << "���\t" << "����\t" << "�Ա�\t" << "����\t" << "�绰����" << "\t��ͥסַ" << endl;
        for (int i = 0; i < p->id; i++) {
            cout << i + 1 << "\t" << p->peopleArray[i].name << "\t" << p->peopleArray[i].sex << "\t"
                 << p->peopleArray[i].age << "\t"
                 << p->peopleArray[i].teleNumber << "\t" << p->peopleArray[i].address << endl;
        } 
    }
    system("pause"); //��ָͣ��
    system("cls"); //����ָ��
}

// �����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1
// ����һ ���� �Ա�����
// ��⺯��
int isExist(const addressBook *abs,string name){
    for(int i = 0;i <abs->id;i++){
        if(abs->peopleArray[i].name == name){
            return i;
        }
    }
    return -1;
}

// ɾ������
void deletePerson(addressBook *abs){
    cout<<"��������Ҫɾ������:"<< endl;
    string name;
    cin>>name;
    int ret = isExist(abs,name);
    if(ret == -1){
        cout<<"���޴���"<< endl;
    }else{
        //���ҵ��˽���ɾ������
        for(int i = ret ; i<abs->id;i++){
            //����Ǩ��
            abs->peopleArray[i] = abs->peopleArray[i+1];
            (abs->id)--;
        }
        cout<<"ɾ���ɹ���"<< endl;
    }
    system("pause"); //��ָͣ��
    system("cls"); //����ָ��
}

//���Һ���
void findPerson(addressBook *abs){
    cout<<"��������Ҫ���ҵ���:"<< endl;
    string name;
    cin>>name;
    int ret = isExist(abs,name);
    if(ret == -1){
        cout<<"���޴���"<< endl;
    }else{
        cout<< "\n" << abs->peopleArray[ret].name << "\t" << abs->peopleArray[ret].sex << "\t"<< abs->peopleArray[ret].age << "\t"
        << abs->peopleArray[ret].teleNumber << "\t" << abs->peopleArray[ret].address << endl;
    }
    system("pause"); //��ָͣ��
    system("cls"); //����ָ�� 
}

//�޸ĺ���
void modifyPerson(addressBook *abs){
    cout<<"��������Ҫ�޸ĵ���:"<< endl;
    string name;
    cin>>name;
    int ret = isExist(abs,name);
    if(ret == -1){
        cout<<"���޴���"<< endl;
    }else{
        cout<<"������";
        cin>>abs->peopleArray[ret].name;
        cout<<"�Ա�";
        cin>>abs->peopleArray[ret].sex;
        cout<<"���䣺";
        cin>>abs->peopleArray[ret].age;
        cout<<"�绰��";
        cin>>abs->peopleArray[ret].teleNumber;
        cout<<"��ͥ��ַ��";
        cin>>abs->peopleArray[ret].address;
    }
}
//�����ϵ��
void cleanPerson(addressBook *abs){
    // ���û���һ��
    // if()
    // �߼��ϵ���� ʵ���ϻ��Ǵ��ڵ�
    abs->id=0;
    cout<<"ͨѶ¼�����"<< endl;
    system("pause"); //��ָͣ��
    system("cls"); //����ָ�� 
}


int main()
{
    //����ͨѶ¼�ṹ�����
    addressBook abs;
    // ��ʾ�˵�����
    int select = 0; //�û�ѡ��
    bool flag = true;
    while (flag)
    {
        showMenu();
        cin >> select;
        switch(select){
        case 1: // 1.�����ϵ��
            addPerson(&abs);
            break;
        case 2: // 2.��ʾ��ϵ��
            showPerson(&abs);
            break;
        case 3: // 3.ɾ����ϵ��
            deletePerson(&abs);
            break;
        case 4: // 4.������ϵ��
            findPerson(&abs);
            break;
        case 5: // 5.�޸���ϵ��
            modifyPerson(&abs);
            break;
        case 6: // 6.�����ϵ��
            cleanPerson(&abs);
            break;
        case 0: // 0.�˳�ͨѶ¼
            flag = false;
            cout << "��ӭ�´�ʹ��" << endl;
            break;
        default:
            cout << "����������������" << endl;
            break;
        }
    }
    system("pause");
    return 0;
}