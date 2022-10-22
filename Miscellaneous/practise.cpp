#include<iostream>
#include<cstring>
using namespace std;

class Account{
    public:
    int accountnumber;
    string name;
    float balance;
    void depositmoney(){
        float x;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Account Number:";
        cin>>accountnumber;
        cout<<"Enter Balance:";
        cin>>x;
        balance = balance + x;
    }
};

class Savings:public Account{
    public:
    float min = 500;
    void withdraw(){
        float x;
        printf("Enter amount to withdraw:");
        cin>>x;
        if(x<min){
            cout<<"Withdrawing Amount is less than minimum Value.";
        }
        else{
            cout<<"Amount Withdrawn.";
            balance = balance - x;
        }
    }
    void currentbalance(){
        cout<<"Current Balance is :"<<balance;
    }
};

class Current:public Account{
    public:
    float rate;
    float interestamount;
    float time;
    void updatebalance(){
        cout<<"Enter Rate:";
        cin>>rate;
        cout<<"Enter Time(in Years):";
        cin>>time;
        interestamount = (balance * rate * time)/100;
        balance = balance + interestamount;
    }


};

int main()
{
    
    return 0;
}