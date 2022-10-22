#include <iostream>
using namespace std;
class op
{
    int r;
    public:     
    op(){
        cout<<"Default Constructor created"<<endl;
        r=1;
    }
    op(int a, int b){
        cout<<"2 parameter constructor created."<<endl;
        r=2;
    }  
    op(int a){
        cout<<"Single Paramaterized constructor created."<<endl;
        r=3;
    }
    ~op(){
        cout<<"Destroyed constructor number "<<r<<endl;
    }
};

int main()
{
    op c(2); //r=3
    op z;   //r=1
    op b(1,3); //r=2
    return 0;
}