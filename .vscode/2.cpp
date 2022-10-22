#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float p,r,t,si,ci;
    cout<<"Enter principal amount: ";
	cin>>p;
	cout<<"Enter rate of interest: ";
	cin>>r;
	cout<<"Enter time period (in years): ";
	cin>>t;
    ci=p*pow((1 + r/100),t);
    si=(p*r*t)/100;
    cout<<"simple interest is:"<<si;
    cout<<"\ncompound interest is: "<<ci;
}
