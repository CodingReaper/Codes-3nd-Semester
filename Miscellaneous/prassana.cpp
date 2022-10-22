#include<iostream>
using namespace std;

class employee{
    private:
    int a;
    public:
    void getdata(int a1){
        a=a1;
    }
    void printdata(){
        cout<<"The valuue of a is"<<a<<endl;
    }
};

int main(){
    int a=5;
    employee abc;
    abc.getdata(6);
    cout<<"A is "<<a<<endl;
    abc.printdata();
}