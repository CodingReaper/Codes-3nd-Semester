#include<iostream>
using namespace std;

class ABC{
    public:
    int roll;
    ABC(){
        roll=5;
        cout<<"Roll is="<<roll<<endl;
    }
    ~ABC(){
        roll=-5;
        cout<<"Roll is="<<roll<<endl;
    }
};

int main(){
    ABC ashu;
    return 0;
}

