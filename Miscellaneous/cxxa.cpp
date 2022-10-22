#include<iostream>
using namespace std;

class complex{
    private:
    float real;
    float img;
    public:
    void getdata(float x,float y){
        real = x;
        img = y;
    }
    void show(void){
        cout<<"The complex Number is:"<<real<<"+"<<img<<"I"<<endl;
    }
    void add(complex a,complex b){
        float msum = a.real+b.real;
        float mimg = a.img + b.img;
        cout<<"The complex Number is:"<<msum<<"+"<<mimg<<"I"<<endl;
    }
};

int main()
{
    // complex a;
    // a.getdata(4,6);
    // a.show();
    // complex a[5];
    // int j=1;
    // for(int i=0;i<5;i++){
    //     a[i].getdata(i,j);
    //     j++;
    // }
    // for(int i=0;i<5;i++){
    //     a[i].show();
    // }
    complex a,b,c;
    a.getdata(4,5);
    b.getdata(4,6);
    c.add(a,b);
    return 0;
}

// #include<iostream>
// using namespace std;

// class student{
//     private:
//     string name;
//     int roll;
//     float marks[5];
//     public:
//     void getdata(){
//         cout<<"Enter Name:";
//         cin>>name;
//         cout<<"Enter Roll:";
//         cin>>roll;
//         cout<<"Enter Marks:";
//         for(int i=0;i<5;i++){
//             cin>>marks[i];
//         }
//     }
//     void showdata(){
//         cout<<"NAME:"<<name<<endl;
//         cout<<"ROLL:"<<roll<<endl;
//         cout<<"MARKS:"<<endl;
//         for(int i=0;i<5;i++){
//             cout<<marks[i]<<"\t";
//         }
//         float sum;
//         for(int i=0;i<5;i++){
//             sum = sum + marks[i];
//         }
//         cout<<endl;
//         cout<<"TOTAL:"<<sum<<endl;
//     }
// };

// int main()
// {
//     student a1;
//     a1.getdata();
//     a1.showdata();
//     return 0;
// }