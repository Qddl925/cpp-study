#include <iostream>

using namespace std;
#define MAX_SIZE 1000

//自定义结构体
//联系人结构体
struct people {
    //姓名
    string name;
    //性别
    string sex;
    //年龄
    int age;
    //联系电话
    string teleNumber;
    //家庭住宅
    string address;
};

// 定义通讯录结构体
struct addressBook {
    // 联系人编号
    int id;
    // 联系人数组
    people peopleArray[MAX_SIZE];
};

//显示菜单函数
void showMenu()
{
    cout << "***欢迎使用通讯录管理系统***" << endl;
    cout << "******1.添加联系人********" << endl;
    cout << "******2.显示联系人********" << endl;
    cout << "******3.删除联系人********" << endl;
    cout << "******4.查找联系人********" << endl;
    cout << "******5.修改联系人********" << endl;
    cout << "******6.清空联系人********" << endl;
    cout << "******0.退出通讯录********" << endl;
    cout << "****************************" << endl;
}

// 添加联系人函数
void addPerson(addressBook *abs){
    // 判断通讯录是否为满
    if(abs->id == MAX_SIZE){
        cout<<"通讯录已满，无法添加"<< endl;
    }else{
        // 添加具体联系人
        cout<<"姓名：";
        cin>>abs->peopleArray[abs->id].name;
        cout<<"性别：";
        cin>>abs->peopleArray[abs->id].sex;
        cout<<"年龄：";
        cin>>abs->peopleArray[abs->id].age;
        cout<<"电话：";
        cin>>abs->peopleArray[abs->id].teleNumber;
        cout<<"家庭地址：";
        cin>>abs->peopleArray[abs->id].address;
        (abs->id)++;
    }
    // 调用系统的函数
    system("pause");
    system("cls");
}

// 显示函数
void showPerson(addressBook *p){
    // 判断通讯录中是否有人
    // 如果不为0，显示记录的联系人信息
    if(p->id == 0){
        cout<< "当前记录为空"<< endl;
    }
    else{
        cout << "编号\t" << "姓名\t" << "性别\t" << "年龄\t" << "电话号码" << "\t家庭住址" << endl;
        for (int i = 0; i < p->id; i++) {
            cout << i + 1 << "\t" << p->peopleArray[i].name << "\t" << p->peopleArray[i].sex << "\t"
                 << p->peopleArray[i].age << "\t"
                 << p->peopleArray[i].teleNumber << "\t" << p->peopleArray[i].address << endl;
        } 
    }
    system("pause"); //暂停指令
    system("cls"); //清屏指令
}

// 检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1
// 参数一 人名 对比姓名
// 检测函数
int isExist(const addressBook *abs,string name){
    for(int i = 0;i <abs->id;i++){
        if(abs->peopleArray[i].name == name){
            return i;
        }
    }
    return -1;
}

// 删除函数
void deletePerson(addressBook *abs){
    cout<<"请输入你要删除的人:"<< endl;
    string name;
    cin>>name;
    int ret = isExist(abs,name);
    if(ret == -1){
        cout<<"查无此人"<< endl;
    }else{
        //查找到人进行删除操作
        for(int i = ret ; i<abs->id;i++){
            //数据迁移
            abs->peopleArray[i] = abs->peopleArray[i+1];
            (abs->id)--;
        }
        cout<<"删除成功！"<< endl;
    }
    system("pause"); //暂停指令
    system("cls"); //清屏指令
}

//查找函数
void findPerson(addressBook *abs){
    cout<<"请输入你要查找的人:"<< endl;
    string name;
    cin>>name;
    int ret = isExist(abs,name);
    if(ret == -1){
        cout<<"查无此人"<< endl;
    }else{
        cout<< "\n" << abs->peopleArray[ret].name << "\t" << abs->peopleArray[ret].sex << "\t"<< abs->peopleArray[ret].age << "\t"
        << abs->peopleArray[ret].teleNumber << "\t" << abs->peopleArray[ret].address << endl;
    }
    system("pause"); //暂停指令
    system("cls"); //清屏指令 
}

//修改函数
void modifyPerson(addressBook *abs){
    cout<<"请输入你要修改的人:"<< endl;
    string name;
    cin>>name;
    int ret = isExist(abs,name);
    if(ret == -1){
        cout<<"查无此人"<< endl;
    }else{
        cout<<"姓名：";
        cin>>abs->peopleArray[ret].name;
        cout<<"性别：";
        cin>>abs->peopleArray[ret].sex;
        cout<<"年龄：";
        cin>>abs->peopleArray[ret].age;
        cout<<"电话：";
        cin>>abs->peopleArray[ret].teleNumber;
        cout<<"家庭地址：";
        cin>>abs->peopleArray[ret].address;
    }
}
//清空联系人
void cleanPerson(addressBook *abs){
    // 让用户缓一缓
    // if()
    // 逻辑上的清空 实际上还是存在的
    abs->id=0;
    cout<<"通讯录已清空"<< endl;
    system("pause"); //暂停指令
    system("cls"); //清屏指令 
}


int main()
{
    //创建通讯录结构体变量
    addressBook abs;
    // 显示菜单函数
    int select = 0; //用户选择
    bool flag = true;
    while (flag)
    {
        showMenu();
        cin >> select;
        switch(select){
        case 1: // 1.添加联系人
            addPerson(&abs);
            break;
        case 2: // 2.显示联系人
            showPerson(&abs);
            break;
        case 3: // 3.删除联系人
            deletePerson(&abs);
            break;
        case 4: // 4.查找联系人
            findPerson(&abs);
            break;
        case 5: // 5.修改联系人
            modifyPerson(&abs);
            break;
        case 6: // 6.清空联系人
            cleanPerson(&abs);
            break;
        case 0: // 0.退出通讯录
            flag = false;
            cout << "欢迎下次使用" << endl;
            break;
        default:
            cout << "输入有误，重新输入" << endl;
            break;
        }
    }
    system("pause");
    return 0;
}