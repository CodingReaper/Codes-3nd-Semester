#include<iostream>
#include<string>
using namespace std;

void swapcase(string str);

int main(){
    string str="AsHu";
    swapcase(str);
}

void swapcase(string str){
    int ln=str.length();
    for (int i = 0; i < ln; i++) {
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        } 
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    cout<<str;
}

