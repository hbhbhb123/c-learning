#include <iostream>
using namespace std;

int main()
{
    //int num;
    for (int num = 1; num <= 100; num++)
    {
        int a = num % 10;
        int b = num / 10;
        //cout << num <<endl;
        if (a == 7 || b == 7 || num % 7 == 0)
            cout << num << "knock" << endl;
        else
        {
            cout << num << endl;
        }
    }
}