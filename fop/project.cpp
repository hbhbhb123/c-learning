#include <iostream>
#include <string>
using namespace std;
const int MAX = 1000;

struct friends
{
    string name;
    int sex; //1 man; 2 women
    int age;
    string phonenumber;
    string address;
};

struct addressbooks
{
    struct friends friendarray[MAX + 1];
    int friend_num;
};

void ShowMenu()
{
    cout << "1.add a friend" << endl;
    cout << "2.show all friends" << endl;
    cout << "3.delect a friend" << endl;
    cout << "4.find a friend" << endl;
    cout << "5.change the infomation of my friends" << endl;
    cout << "6.empty all friends" << endl;
    cout << "0.quit the project" << endl;
}
void add(struct addressbooks *adb)
{
    //cout << "name:"<< endl;
    if (adb->friend_num == MAX)
    {
        cout << "can't add the friends, because it is full" << endl;
        return;
    }
    //adb->friend_num++;
    string name;
    cout << "please input the name" << endl;
    cin >> name;
    adb->friendarray[adb->friend_num].name = name;
    int sex;
    cout << "please input the sex" << endl;
    while (1)
    {
        cin >> sex;
        if (sex == 1 || sex == 2)
        {
            adb->friendarray[adb->friend_num].sex = sex;
            break;
        }
        cout << "please input the right sex" << endl;
    }
    int age;
    cout << "please input the age" << endl;
    cin >> age;
    adb->friendarray[adb->friend_num].age = age;
    string phonenumber;
    cout << "please input the phonenumber" << endl;
    cin >> phonenumber;
    adb->friendarray[adb->friend_num].phonenumber = phonenumber;
    string address;
    cout << "please input the address" << endl;
    cin >> address;
    adb->friendarray[adb->friend_num].address = address;
    adb->friend_num++;
    cout << "add successfully" << endl;
    //system("pause");
    //system("cls");
}
string sex_convert(int sex)
{
    string sex1;
    switch (sex)
    {
    case 1:
        sex1 = "man";
        break;
    case 2:
        sex1 = "woman";
        break;
    default:
        break;
    }
    return sex1;
}
int find_name(struct addressbooks *adb, string name)
{
    int record = -1;
    for (int i = 0; i < adb->friend_num; i++)
    {
        /* code */
        if (adb->friendarray[i].name == name)
        {
            record = i;
            break;
        }
    }
    return record;
}
void show(struct addressbooks *adb)
{
    if (adb->friend_num == 0)
    {
        cout << "there is no friend" << endl;
        return;
    }
    //if(adb->friendarray[i].sex == 1)
    for (int i = 0; i < adb->friend_num; i++)
    {
        string sex1 = sex_convert(adb->friendarray[i].sex);
        cout << adb->friendarray[i].name << " " << sex1
             << " " << adb->friendarray[i].age << " " << adb->friendarray[i].phonenumber << " " << adb->friendarray[i].address << endl;
    }
}
void delect(struct addressbooks *adb)
{
    cout << "please input a person's name you want to delect" << endl;
    string name;
    cin >> name;
    int record = find_name(adb, name);
    if (record == -1)
    {
        cout << "no one was found" << endl;
    }
    else
    {
        for (int i = record; i < adb->friend_num; i++)
        {
            adb->friendarray[i] = adb->friendarray[i + 1];
        }
        adb->friend_num--;
        cout << "delect successfully" << endl;
    }
}

void find(struct addressbooks *adb)
{
    cout << "please input a person's name you want to find" << endl;
    string name;
    cin >> name;
    int record = find_name(adb, name);
    if (record == -1)
    {
        cout << "no one was found" << endl;
    }
    else
    {
        string sex1 = sex_convert(adb->friendarray[record].sex);
        cout << adb->friendarray[record].name << " " << sex1
             << " " << adb->friendarray[record].age << " " << adb->friendarray[record].phonenumber << " " << adb->friendarray[record].address << endl;
    }
}

void change(struct addressbooks *adb)
{
    cout << "please input a person's name you want to change" << endl;
    string name;
    cin >> name;
    int record = find_name(adb, name);
    int m;
    while (1)
    {
        //cout << 
        cin >> m;
        switch (m)
        {
        case 1:{
            string name_change;
            cin >> name_change;
            adb->friendarray[record].name = name_change;
            /* code */
            break;
        }
        case 2:{
            int sex_change;
            cin >> sex_change;
            adb->friendarray[record].sex = sex_change; 
            break;
        }
        case 3:{
            int age_change;
            cin >> age_change;
            adb->friendarray[record].age = age_change; 
            break;
        }
        case 4:{
            string ph_change;
            cin >> ph_change;
            adb->friendarray[record].phonenumber = ph_change; 
            break;
        }
        case 5:{
            string ad_change;
            cin >> ad_change;
            adb->friendarray[record].address = ad_change; 
            break;
        }     
        case 0:
            cout << "change successfully" << endl;
            return;
        default:
            break;
        }
    }
}
void empty(struct addressbooks *adb){
    adb->friend_num = 0;
    cout << "empty successfully" << endl;
}

int main()
{
    struct addressbooks addressbook;
    addressbook.friend_num = 0;
    int select;
    ShowMenu();
    while (1)
    {
        //ShowMenu();
        cin >> select;
        switch (select)
        {
        case 0:
            /* code */
            cout << "see you next time" << endl;
            return 0;
            break;
        case 1:
            add(&addressbook);
            break;
        case 2:
            show(&addressbook);
            break;
        case 3:
            delect(&addressbook);
            break;
        case 4:
            find(&addressbook);
            break;
        case 5:
            change(&addressbook);
            break;
        case 6:
            empty(&addressbook);
            break;

        default:
            break;
        }
    }
}