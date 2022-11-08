#include<iostream>
#include<string>

using namespace std;

class student
{
    private:
    string name;
    int roll;
    int tmarks;
    int mark[5];
    float percentage;
    public:
    void getdata();
    void printdata();
};

void student :: getdata(){
    cout<<"Enter Name:";
    cin>> name;
    cout<<"Enter Roll number:";
    cin>>roll;
    cout<<"Enter marks:";
    for(int i=0;i<5;i++){
        cin>>mark[i];
    }
    tmarks=0;
    for(int i=0;i<5;i++){
        tmarks=tmarks+mark[i];
    }
    percentage=tmarks*0.2;
}

void student :: printdata(){
    cout<<"---OUTPUT---"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Roll:"<<roll<<endl;
    cout<<"Marks:"<<endl;
    for(int i=0;i<5;i++){
        cout<<mark[i]<<"\t";
    }
    cout<<"\nTotal Marks:"<<tmarks<<endl;
    cout<<"Percentage:"<<percentage<<endl;
}


int main(){
    student ashu;
    ashu.getdata();
    ashu.printdata();
}