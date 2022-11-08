#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;
    int area;
    public:
    Rectangle(int a,int b){
        length=a;
        breadth=b;
        area=length * breadth;
        cout<<"\nArea is :"<<area;
    }
    Rectangle(Rectangle &x){
        length=x.length;
        breadth=x.breadth;
        area=x.area;
        cout<<"\nArea is :"<<area;
    }
};

int main(){
    Rectangle reaper(4,5);
    Rectangle reaper2(reaper);
}

