#include<iostream>
using namespace std;

class complex{
    private:
    int real,imag;
    public:
    complex(int x=0,int y = 0){
        real = x;imag = y;
    }
    friend complex operator+(complex a,complex b){
        complex c;
        c.real = a.real + b.real;
        c.imag = a.imag + b.imag;
        return c;
    }
    complex operator++(){
        complex temp;
        temp.real = real++;
        temp.imag = ++imag;
        return temp;
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    complex obj1(2,3),obj2(4,5),obj3,obj4;
    obj3 = obj1 + obj2;
    obj3.display();
    obj4 = obj3.operator++();
    obj4.display();
    return 0;
}