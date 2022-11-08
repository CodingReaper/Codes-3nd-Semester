#include<iostream>
using namespace std;

class shape{
    public:
    float area;
    virtual void calculate(){}
    void display(){
        cout<<"Final Area = "<<area<<endl;
    }
};

class circle:public shape{
    public:
    float radius;
    void calculate(){
        cout<<"Enter Radius:";
        cin>>radius;
        area = 3.14 * radius * radius;
    }
};

class square:public shape{
    public:
    float side;
    void calculate(){
        cout<<"Enter Side:";
        cin>>side;
        area = side * side;
    }
};

class triangle:public shape{
    public:
    float base,height;
    void calculate(){
        cout<<"Enter Base and Height:";
        cin>>base>>height;
        area = (base * height)/2;
    }
};

int main()
{
    shape * pt,*pt2,*pt3;
    circle a;
    square b;
    triangle c;
    pt = &a;
    pt2 = &b;
    pt3 = &c;
    pt->calculate();
    pt->display();
    pt2->calculate();
    pt2->display();
    pt3->calculate();
    pt3->display();
    return 0;
}