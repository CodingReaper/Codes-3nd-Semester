#include<iostream>
#include<cstring>
using namespace std;

class Student{
    private:
    string name;
    int roll;
    int age;
    public:
    int arr[5];
    void getdata(){
        cout<<"Enter Name:";
        getline(cin,name);
        cout<<"Enter Roll:";
        cin>>roll;
        cout<<"Enter Age:";
        cin>>age;
    }
    void printdata(){
        cout<<"\nDetails:\n";
        cout<<"NAME:"<<name<<endl;
        cout<<"Roll No:"<<roll<<endl;
        cout<<"AGE:"<<age<<endl;
        cout<<"MARKS:"<<endl;
        for(int i=0;i<5;i++){
            cout<<arr[i]<<"\t";
        }
    }
};

class child:public Student{
    public:
    void getmarks(){
        cout<<"Enter Marks:";
        for(int i=0;i<5;i++){
            cin>>arr[i];
        }
    }
};

int main(){
    child xd;
    xd.getdata();
    xd.getmarks();
    xd.printdata();
}