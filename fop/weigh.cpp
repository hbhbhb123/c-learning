#include <iostream>
using namespace std;
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int weight1, weight2, weight3;
    //int maxweight;
    cin >> weight1 >> weight2 >> weight3;
    if (weight1 > weight2)
    {
        if (weight1 > weight3)
            cout << 1 << endl;
        else
            cout << 3 << endl;
    }
    else
    {
        if (weight2 > weight3)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    //cout << maxweight << endl;
}