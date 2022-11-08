#include<iostream>
#include<string.h>
using namespace std;

class emp{protected:
    string name;
    int id,salary;
    public:
    void setdata(){
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter ID:";
        cin>>id;
    }
    virtual void salaryf() = 0;
    void display(){
        cout<<"Final Salary Of "<<name<<"="<<salary<<endl;
    }
};

class reg:public emp{
    protected:
    int da,hra;
    int basicsalary;
    public:
    void salaryf(){
        cout<<"Enter Basic Salary:";
        cin>>basicsalary;
        da = 0.1 * basicsalary;
        hra = 0.2 * basicsalary;
        salary = basicsalary + da + hra;
    }
};

class part:public emp{
    protected:
    int hrs,pphr;
    public:
    part(){
        pphr = 500;
    }
    void salaryf(){
        cout<<"Number Of Hours:";
        cin>>hrs;
        cout<<"Enter Pay/Hr:";
        cin>>pphr;
        salary = pphr * hrs;
    }
};

int main(){
    emp * pt,*pt2;
    reg ashu;
    part salik;
    pt = &ashu;
    pt2 = &salik;
    pt->setdata();
    pt->salaryf();
    pt->display();

    pt2->setdata();
    pt2->salaryf();
    pt2->display();
    

}