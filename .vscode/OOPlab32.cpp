#include<iostream>
#include<string>
using namespace std;

void count(string str);

int main(){
    string str = "Ashu@2004";
    count(str);
    return 0;
}

void count(string str){
    int vowel=0,consonant=0,special=0,digit=0;
    for (int i = 0; i < str.length(); i++) {  
        char ch = str[i];
        if ( (ch >= 'a' && ch <= 'z') || 
              (ch >= 'A' && ch <= 'Z') ) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u'){
                    vowel++;
                }
                
            else{
                consonant++;
            }

        }
        else if (ch >= '0' && ch <= '9')
            digit++;
        else
            special++;
    }
    cout << "Vowels:" << vowel << endl;
    cout << "Consonant:" << consonant << endl;
    cout << "Digit:" << digit << endl;
    cout << "Special Character:" << special << endl;
}