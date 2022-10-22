#include<iostream>
using namespace std;
void swap(int *a,int *b);

int main(){
    int x=3,y=5;
    swap(&x,&y);
    cout<<"Value of x="<<x<<"and y="<<y;
}
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}