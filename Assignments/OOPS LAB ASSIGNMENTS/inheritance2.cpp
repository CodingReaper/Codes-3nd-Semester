#include<iostream>
using namespace std;

class Ashu{
    public:
    Ashu(){
        cout<<"This Is Class Ashu.\n";
    }
    void print(){
        cout<<"Hello World.\n";
    }
};

class Ashu2{
    public:
    Ashu2(){
        cout<<"This IS Ashu2.\n";
    }
};

class Ashu3 : public Ashu,public Ashu2{};
class Ashu4 : public Ashu{};

int main(){
    Ashu3 dfg;
    Ashu4 xd;
    xd.print();
}