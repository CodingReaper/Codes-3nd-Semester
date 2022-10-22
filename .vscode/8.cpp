#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter 3 Sides Of Triangle:";
    cin>>a>>b>>c;
    if((a+b)>c && (c+b)>a && (c+a)>b){
        cout<<"It is Feasible";

    }
    else{
        cout<<"Not Feasible";
    }
    return 0;
}