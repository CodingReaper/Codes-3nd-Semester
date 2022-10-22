#include<iostream>
using namespace std;

class Ashu{
    public:
    void print(){
        cout<<"Hello World.This Is parent Class";
    }
};

class Ashu2:public Ashu{};

int main(){
    Ashu a1;
    a1.print();
}