#include <iostream>
using namespace std;

class Time
{
private:
    int h, m, s;
public:
    Time()
    {
        h = 0;
        m = 0;
        s = 0;
    }
    friend Time operator+(Time k, Time L)
    {
        Time ash;
        ash.h = k.h + L.h;
        ash.m = k.m + L.m;
        ash.s = k.s + L.s;
        if (ash.s >= 60)
        {
            ash.s = ash.s - 60;
            ash.m++;
        }
        else if (ash.m >= 60)
        {
            ash.m = ash.m - 60;
            ash.h++;
        }
        return ash;
    }
    int operator==(Time t1) 
    {
        int tot = h * 3600 + m * 60 + s;
        int tot1 = t1.h * 3600 + t1.m * 60 + t1.s;
        if (tot == tot1)
            return 1;
        else
            return 0;
    }
    void display()
    {
        cout << "TIME:-" << h << ":" << m << ":" << s << endl;
    }
    void getdata(){
        cout<<"Enter Hours:";
        cin>>h;
        cout<<"Enter Minutes:";
        cin>>m;
        cout<<"Enter Seconds:";
        cin>>s;
        if (s >= 60)
        {
            s = s - 60;
            m++;
        }
        else if (m >= 60)
        {
            m = m - 60;
            h++;
        }   
    }
    void operator = (const Time &D ) { 
         h = D.h;
         s = D.s;
         m = D.m;
      }
};
int main()
{
    Time obj,obj1,obj3,obj4;
    obj.getdata();
    obj1.getdata();
    obj3 = obj + obj1;
    obj.display();
    obj1.display();
    obj3.display();
    if(obj == obj1){
        cout<<"Same."<<endl;
    }
    else{
        cout<<"Not Same."<<endl;
    }
    obj4 = obj3;obj4.display();
    return 0;}