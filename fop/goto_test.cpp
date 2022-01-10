#include <iostream>
using namespace std;

int main(){
    int arr[5] = {300,350,200,400,250} ;
    int maxweight = 0;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        int weight = arr[i];
        maxweight = max(weight,maxweight);
    }
    cout << maxweight << endl;
    

}