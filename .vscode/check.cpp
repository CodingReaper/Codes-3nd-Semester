#include <iostream>
#include<string>
using namespace std;
int main() {
   char str[] = {"Ashu@  2004"};
   int vowels, consonants, digits, spaces,special;
   vowels = consonants = digits = spaces = special= 0;
   for(int i = 0; str[i]!='\0'; ++i) {
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
      str[i]=='o' || str[i]=='u' || str[i]=='A' ||
      str[i]=='E' || str[i]=='I' || str[i]=='O' ||
      str[i]=='U') {
         ++vowels;
      } else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z')) {
         ++consonants;
      } else if(str[i]>='0' && str[i]<='9') {
         ++digits;
      } else if (str[i]==' ') {
         ++spaces;
      } else {
         ++special;
      }  
   }
   cout << "The string is: " << str << endl;
   cout << "Vowels: " << vowels << endl;
   cout << "Consonants: " << consonants << endl;
   cout << "Digits: " << digits << endl;
   cout << "White spaces: " << spaces << endl;
   cout << "Special:" << special << endl;
   return 0;
}