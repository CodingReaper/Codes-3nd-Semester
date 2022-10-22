#include<iostream>
using namespace std;

int main(){
    float radius,side,length,breadth,areaC,areaR,areaS,pC,pR,pS;
    cout<<"Enter radius: ";
	cin>>radius;
	cout<<"Enter Side of square: ";
	cin>>side;
	cout<<"Enter Length of rectangle ";
	cin>>length;
    cout<<"Enter Breadth of rectangle ";
	cin>>breadth;

    areaC=3.14*radius*radius;
    pC=2*3.14*radius;
    areaS=side*side;
    pS=4*side;
    areaR=length*breadth;
    pR=2*(length+breadth);
    areaS=side*side;
    pS=4*side;

    cout<<"\nArea Of Circle: "<<areaC;
    cout<<"\nArea Of Square: "<<areaS;
    cout<<"\nArea Of Rectangle: "<<areaR;
    cout<<"\nPerimeter Of Circle: "<<pC;
    cout<<"\nPerimeter Of Sqaure: "<<pS;
    cout<<"\nPerimeter Of Rectangle: "<<pR;
}