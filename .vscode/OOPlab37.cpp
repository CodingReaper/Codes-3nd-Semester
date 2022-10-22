#include<iostream>
using namespace std;

void swap(int x ,int y);

int main(){
    int x=5;
    int y=3;
    swap(x,y);
}

void swap(int x,int y){
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"After Swapping:"<<" x="<<x<<" y="<<y;
}