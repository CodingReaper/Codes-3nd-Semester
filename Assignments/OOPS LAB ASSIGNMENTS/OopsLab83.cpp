#include<iostream>
using namespace std;

class a{
    public:
    virtual void func()=0;
};
class b:public a{
    public:
    void func(){
        cout<<"Functional called for class b\n";
    }
};
class c:public a{
    public:
    void func(){
        cout<<"Functional called for class c\n";
    }
};

int main(){
    b B;
    c C;
    B.func();
    C.func();
}