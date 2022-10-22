#include<iostream>
using namespace std;
class xyz;
class abc{
    private:
    int c;
    public:
    void getdata(){
        cout<<"Enter Value correspoding to first class:";
        cin>>c;
    }
    void printdata(){
        cout<<"Value 1 is:"<<c<<endl;
    }
    friend void swap(abc &,xyz &);
};

class xyz{
    private:
    int m;
    public:
    void gets(){
        cout<<"Enter value corresponding to second class:";
        cin>>m;
    }
    void printop(){
        cout<<"Value 2 is:"<<m<<endl;
    }
    friend void swap(abc &,xyz &);
};

void swap(abc &r,xyz &t){
    int temp=r.c;
    r.c=t.m;
    t.m=temp;
}

int main(){
    abc araf;
    xyz ronit;
    araf.getdata();
    ronit.gets();
    cout<<"Before Swapping:"<<endl;
    araf.printdata();
    ronit.printop();
    cout<<"After Swapping:"<<endl;
    swap(araf,ronit);
    araf.printdata();
    ronit.printop();
}
