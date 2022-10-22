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
    friend distanc operator+(distanc a,distanc b){
        distanc m;
        m.f = a.f+b.f;
        m.i = a.i+b.i;
        if(m.i >= 12){
            m.i = m.i - 12;
            m.f = m.f + 1;
        }
        return m;
    }
    void display(){
        cout<<"Feet:"<<f<<"\t"<<"Inches:"<<i<<endl;
    }
    friend distanc operator+(int m,distanc k){
        k.i = m + k.i;
        if(k.i >= 12){
            k.i = k.i - 12;
            k.f = k.f + 1;
        }
        return k;
    }
    friend distanc operator-(distanc fgh){
        fgh.f = -fgh.f;
        fgh.i = -fgh.i;
        return fgh;
    }
};

int main(){
    distanc obj1(5,6),obj2(5,6),obj3,obj4,obj5(9,7);
    obj3 = obj1+obj2;
    obj3.display();
    obj4 = -obj3;
    obj4.display();
    obj5 = obj5+9;
    obj5.display();
    return 0;
}
