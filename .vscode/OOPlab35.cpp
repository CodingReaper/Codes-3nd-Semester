#include<iostream>
#include<string>

using namespace std;

int count(string str,char c);

int main(){
    string str="a sh utosh@";
    char c='s';
    cout<<count(str,c)<<endl;
}

int count(string str,char c){
    int a=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==c){
            a++;
        }
    }
    return a;
}

