#include <iostream>
#include <string>
using namespace std;
struct hero
{
    string name;
    int age;
    string sex;
};




int main(){
    //hero_array 
    hero harray[] = {{"hbin",23,"boy"},{"yanj",21,"girl"},{"xiu",22,"girl"},{"lin",20,"girl"}};
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            if(harray[j].age < harray[i].age){
                hero temp = harray[j];
                harray[j] = harray[i];
                harray[i] = temp;
            }
        }
    }
    for(int i = 0; i < 4; i++){
        cout << harray[i].name <<"\t"<< harray[i].age<<"\t"<<harray[i].sex<<endl;
    }
    //cout << harray[0].name <<" "<< harray[0].age<<" "<<harray[0].sex<<endl;

}