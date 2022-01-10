#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int * p;//int * 为变量类型
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    p = arr;
    for (int i = 0; i < 10; i++)
    {
        cout << * p << " " ;
        p++;
        /* code */
    }
    cout << endl;
    
}