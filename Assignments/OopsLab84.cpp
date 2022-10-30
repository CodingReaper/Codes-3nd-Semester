#include<iostream>
using namespace std;

class distanc{
    int feet;
    int inch;
    public:
    distanc(){
        feet = inch = 0;
    }
    distanc(int x){
        feet = x/12;
        inch = x % 12;
    }
    void display(){
        cout << "Distance = " << feet
             << " feets and "
             << inch << " inches\n";
    }
};
class afgh{
    float a;
    public:
    afgh(){
        a = 10.25;
    }
    operator float(){
        float x;
        x = a;
        return x;
    }
};

int main()
{
    distanc xd;
    int m = 37;
    xd = m; //int to object
    xd.display();


    afgh obj;
    float y = obj;
    cout<<y;
    return 0;
}