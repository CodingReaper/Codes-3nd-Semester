//write a c++ program to Create a class which stores employee name,id 
//and salary Derive two classes from ‘Employee’ class: ‘Regular’ a
//nd ‘Part-Time’. The ‘Regular’ class stores DA, HRA and basic salary. 
//The ‘Part-Time’ class stores the number of hours and pay per hour. 
//Calculate the salary of a regular employee and a par-time employee, using virtual function.

#include<iostream>
using namespace std;

class employee{
    public:
    string name;
    int id;
    float salary;
    void setdata(){
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter ID:";
        cin>>id;
    }
    virtual void calculate();
    virtual void bassal();

};

class regular:public employee{
    public:
    float da;
    float ha;
    float basicsalary;
    void bassal(){
        cout<<"Enter Basic Salary:";
        cin>>basicsalary;
        da = 0.8 * basicsalary;
        ha = 0.1 * basicsalary;
    }
    void calculate(){
        salary = da + ha + basicsalary;
        cout<<"Total Salary:"<<salary;
    }
};
class parttime:public employee{
    public:
    int hrs;
    float pphr;
    void setdata2(){
        cout<<"Enter No. Of Hours:";
        cin>>hrs;
        cout<<"Enter Pay/hour:";
        cin>>pphr;
    }
    void calculate(){
        salary = hrs * pphr;
        cout<<"Total Salary:"<<salary<<endl;
    }
};

int main()
{
    // parttime obj;
    // obj.setdata();
    // obj.setdata2();
    // obj.calculate();
    
    // regular obj2;
    // obj2.setdata();
    // obj2.bassal();
    // obj2.calculate();
    
    employee *ptr;
    parttime d;
    ptr = &d;
    ptr->setdata();
    ptr->bassal();
    ptr->calculate();

    
    return 0;
}