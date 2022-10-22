#include<iostream>
using namespace std;

class A{
    private:
    int i,j;
    public:
    void get(){
        cin>>i;
    }
    void display(){
        cout<<i;
    }
};

class B:public A{
    private:
    int k;
    public:
    void getf(){
        cin>>k;
    }
    void f1(){
        get();
        display();
        cout<<k;
    }
};

int main(){
    B abc;
    abc.getf();
    abc.f1();
}