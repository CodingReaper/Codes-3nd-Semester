// WC++P to check whether a given string input is palindrome or not 
// without using string library function.
#include<iostream>

using namespace std;

int main(){
    string str1;
    string str2;
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