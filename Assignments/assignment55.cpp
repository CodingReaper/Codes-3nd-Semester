#include<iostream>
#include<string>

using namespace std;

class student
{
    private:
    string name;
    int roll;
    int tmarks;
    public:
    void getdata();
    void printdata();
};

void student :: getdata(){
    cout<<"Enter Name:";
    cin>> name;
    cout<<"Enter Roll number:";
    cin>>roll;
    cout<<"Enter Total marks:";
    cin>>tmarks;
}

void student :: printdata(){
    cout<<"---OUTPUT---"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Roll:"<<roll<<endl;
    cout<<"Total Marks:"<<tmarks<<endl;
}


int main(){
    student ashu;
    ashu.getdata();
    ashu.printdata();
}