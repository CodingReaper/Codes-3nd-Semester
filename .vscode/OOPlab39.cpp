#include<iostream>

using namespace std;

int main(){
    string mainstr;
    int a,b;
    string substr;
    cout<<"Enter main string :"<<endl;
    getline(cin,mainstr);
    cout<<"Enter sub string position from to where:"<<endl;
    cin>>a>>b;
    cout<<"Substring is :";
    for (int i = a; i <= b; i++)
    {
        cout<<mainstr[i-1];
    }
    
return 0;
}