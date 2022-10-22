#include<iostream>

using namespace std;

int main(){
    int year;
    cout<<"Enter the year::"<<endl;
    cin>>year;
    if ((year%4==0)||(year%400==0))
    {
        cout<<"Given year is a leap year!"<<endl;
    }
    else if (year%100!=0)
    {
        cout<<"Given year is not a leap year!"<<endl;
    }
    
    return 0;
}