#include<iostream>
#include <sstream>    //引用stringstream的头文件
#include <string>
#include<math.h>
using namespace std ;

char to_char32(string data){
    char char_tran ;
    int data_length = data.length() ;
    int num = 0 ;
    for(int j = 0; j < data_length; j++){
        num += (data[data_length-1-j] - '0') * pow(2,j);
    }
    //stringstream ss;
    //ss << data ;
    //ss >> num ;
    if(num > 9){
        char_tran = 'A' + num - 10 ;
    }
    else{
        char_tran = num + '0' ;
    }
    return char_tran ;
}
int main(){
    string data = "1011001111111111111111111110100" ;
    string data_split ;
    string data_out ;
    //char char_tran[1000] ;
    int data_length = data.length() ;
    for(int i = 0; data_length > 0 ; i++){
        if(data_length > 5){
            data_split = data.substr(data_length - 5, 5) ;
        }
        else{
            data_split = data.substr(0, data_length) ;
        }
        //data_split = data.substr(data_length - 5, 5) ;
        //to char
        //char_tran = char_tran + to_char32(data_split) ;
        //
        data_out = data_out + to_char32(data_split) ;
        data_length = data_length - 5 ;
    }
    reverse(data_out.begin(), data_out.end());
    cout << data_out << endl ;
}


