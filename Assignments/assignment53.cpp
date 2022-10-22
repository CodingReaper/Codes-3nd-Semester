#include <iostream>
using namespace std;
//12 inch = 1 foot
//1 inch =2.54 cm
//1 m=100cm
class xyz;

class abc{
    float feet,inches;
    public:
     float total;
     void get()
     {
        cout<<"Enter feet"<<"\t"<<"Enter inches"<<endl;
        cin>>feet>>inches;
        total=(feet*12)+inches;
        total=total*2.54;
     }
     friend void cal(xyz,abc);

};

class xyz{
    float mtr,cm;

    public:
      float total;
      void get()
      {
        cout<<"Enter meter"<<"\t"<<"Enter cms"<<endl;
        cin>>mtr>>cm;
        total=mtr*100+cm;

      }
      friend void cal(xyz,abc);
};

void cal (xyz a,abc f){
    if (a.total>f.total){
        cout<<"The larger distance : "<<a.mtr<<"meter"<<a.cm<<"cms"<<endl;
    }
    else {
        cout<<"The larger distance : "<<f.feet<<"feet"<<f.inches<<"inches"<<endl;
    }
}

int main()
{
    xyz a;
    abc f;
    a.get();
    f.get();
    cal(a,f);
    return 0;
}