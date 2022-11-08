#include<iostream>
#include<string>
using namespace std;

struct rolex{
    string name;
    int rollno;
    int tmarks;
};

class Student{
    private:
    int n;
    struct rolex a[20];
    public:
    void getdata();
    void printdata();
};

void Student :: getdata(){
    cout<<"Enter Number Of Students:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter Name:";
        cin>>a[i].name;
        cout<<"Enter Roll:";
        cin>>a[i].rollno;
        cout<<"Enter Total Marks:";
        cin>>a[i].tmarks;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i].tmarks;
    }
    float average=sum/n;
    cout<<"\n---Output---\n"; 
    cout<<"Average:"<<average<<endl;
}

void Student :: printdata(){
    for(int i=0;i<n;i++){
        cout<<"Name:"<<a[i].name<<endl;
        cout<<"Roll:"<<a[i].rollno<<endl;
        cout<<"TOTAL MARKS:"<<a[i].tmarks<<endl;
        cout<<endl;
    }
}

int main(){
    Student shubham;
    shubham.getdata();
    shubham.printdata();
    return 0;
}


