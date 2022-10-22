#include<iostream>
using namespace std;
int  main()
{
string string1 = "India was a Great Country";
string string2 = "is";
cout << "The string before replacement is: "<<string1<<'\n';
string1.replace(6,3,string2);
cout << "The string after replacement is: "<<string1<<'\n';
return 0;
}