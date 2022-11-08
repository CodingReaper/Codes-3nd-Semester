#include<iostream>
using namespace std;

int count(){
    static int variable=0;  //Here static keeps the value once initiated once it becomes 1 it will keep 1 and then increase by 1 again i.e 2
    variable++;
    return variable;
}

int main(){
    cout<<count()<<endl;
    cout<<count()<<endl;
    cout<<count();
}
