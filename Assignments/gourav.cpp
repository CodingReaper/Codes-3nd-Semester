#include<iostream>
using namespace std;

class distanc{
    private:
    int f,i;
    public:
    distanc(int x=0,int y=0){
        f = x;
        i = y;
    }
    // void operator-(){
    //     f = -f;
    //     i = -i;
    // }
    void display(){
        cout<<"Feet:"<<f<<"\t"<<"Inches:"<<i<<endl;
    }
    distanc operator-(){

    }
};

int main()
{
    distanc obj1(3,5);
    -obj1;
    obj1.display();
    
    
    return 0;
}