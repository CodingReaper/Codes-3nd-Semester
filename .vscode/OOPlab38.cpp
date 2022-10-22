#include<iostream>
using namespace std;


int main(){
    string str1;
    cout<<"Enter string 1"<<endl;
    getline(cin,str1);
    int length=str1.length();
    for (int i = 0; i < length; i++)
    {
        if (str1[i]!=str1[length-i-1])
        {
            cout<<"Given string is not palindrome string!"<<endl;
            break;
        }
        else{
            cout<<"Given string is a palindrome string!"<<endl;
            break;
        }
        
    }
    return 0;
}