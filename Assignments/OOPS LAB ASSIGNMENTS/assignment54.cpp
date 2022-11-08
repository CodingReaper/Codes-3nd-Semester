#include<iostream>
#include<cmath>
using namespace std;

class Distance{
    private:
    float x1,y1,x2,y2;
    public:
    void dist();
};

void Distance :: dist(){
    cout<<"Enter x1:";
    cin>>x1;
    cout<<"Enter y1:";
    cin>>y1;
    cout<<"Enter x2:";
    cin>>x2;
    cout<<"Enter y2:";
    cin>>y2;

    float z=sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    cout<<"Distance is:"<<z;
}


int main(){
    Distance ashu;
    ashu.dist();
}