#include<iostream>
using namespace std;


class complex{
    private:
    int real,imaginary;
    public:
    complex(){
        cout<<"Default Constructor is Invoked"<<endl;
    }
    complex(int a,int b){
        real=a;
        imaginary=b;
    }
    complex(complex &r){
        real=r.real;
        imaginary=r.imaginary;
    }
    ~complex(){
        cout<<"Destructor is invoked."<<endl;
    }
    void display(){
        cout<<"complex number is:"<<real<<"+"<<imaginary<<"J"<<endl;
    }
};

int main(){
    complex araf(1,2);
    complex ronit(4,5);
    complex xd(araf);
    complex dfg;
    araf.display();
    ronit.display();
    xd.display();
    return 0;
}