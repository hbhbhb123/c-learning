#include <iostream>
using namespace std;

int main()
{
    int num = rand() % 100 + 1;
    //cout << num << endl;
    int numguess;
    int i = 0 ;
    while (i < 5)
    {
        cin >> numguess;
        if (numguess > num)
            cout << "大了" << endl;
        else if(numguess < num)
            cout << "小了" << endl;
        else{
            cout << "对了" << endl;
            break;
        }
        i++;
    }
    if(i == 5){
        cout << "游戏失败" << endl;
    }
    //cout << "对了" << endl;
}