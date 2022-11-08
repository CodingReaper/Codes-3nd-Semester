// WC++P to swap two numbers without using third variable using 
// function(with return without return type).

#include<iostream>
using namespace std;
void swap(int x,int y){
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<","<<y<<endl;
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;
    cout<<"Before swaping the value of a and b is : "<<a<<","<<b<<endl;
    
    cout<<"After swaping the value of a and b is : "<<endl;
    swap(a,b);

return 0;
}