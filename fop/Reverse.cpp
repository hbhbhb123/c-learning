#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 3, 2, 5, 4};
    int start = 0;
    int end = sizeof(a) / sizeof(a[0]) - 1;
    while(start < end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
        //cout << a[4 - i];
        /* code */
    }
    cout << a[4] << endl;
}