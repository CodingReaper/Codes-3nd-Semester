#include<iostream>
using namespace std;

class ashutosh
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1);
    void getdata();
};


void ashutosh :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

void ashutosh :: getdata(){
    cout<<"The Value of A is:"<<a<<endl;
    cout<<"The Value of B is:"<<b<<endl;
    cout<<"The Value of C is:"<<c<<endl;
    cout<<"The Value of D is:"<<d<<endl;
    cout<<"The Value of E is:"<<e<<endl;
}
int main(){
    ashutosh xd;
    xd.d=0;
    xd.e=1;
    xd.setdata(6,7,8);
    xd.getdata();
}