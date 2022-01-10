#include <iostream>
using namespace std;

int main(){
    int a[] = {4,2,8,0,5,7,1,3,9};
    int arr[2][3] = {{1,2,3},{4,5,6}};
    //int x = sizeof(arr[][0]);
    int start = 0;
    int end = sizeof(a) / sizeof(a[0]);
    for(int i = start; i < end ;i++){
        for(int j = i + 1; j < end; j++){
            if(a[j]<a[i]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
        
    }
    for (int i = 0; i < end; i++)
    {
        /* code */
        cout << a[i] <<" ";
    }
    cout << endl;
    
 }