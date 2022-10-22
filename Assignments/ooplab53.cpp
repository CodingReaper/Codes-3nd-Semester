#include<iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
public:
    Time(){                        // default constructor
       hours = 0;
       minutes = 0;
    }
    Time(int h,int m=0){    
        hours=h;
        minutes=m;   // parameterized constructor
        if(minutes>=60){
            int rem=minutes/60;
            int rem2=minutes%60;
            hours=hours+rem;
            minutes=rem2;
        }
    }
    Time(Time &r){
        hours=r.hours;
        minutes=r.minutes;
    }
    void display(){
        cout<<"TIME:  ";
        cout << hours << ":" << minutes<< endl;
    }  
};

int main(){
    Time time1(00,240);
    Time time2(time1);

    time1.display();
    time2.display();
    return 0;
}


// void add(Time x, Time y) {
//         int tmp=0;
//         seconds = x.seconds + y.seconds;
//          if(seconds > 59){
//             seconds = seconds-60;
//             tmp++;
//        }  
//        minutes = x.minutes + y.minutes+tmp;
//        tmp=0;
//        if(minutes > 59){
//           minutes-=60;
//           tmp++;
//        }
//           hours = x.hours + y.hours+tmp;
//        if(hours >= 24)
//           hours-=24;
//        cout << hours << ":" << minutes << ":" << seconds << endl;  
    
//   }    