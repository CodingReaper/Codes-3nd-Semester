#include<iostream>
#include<string>

using namespace std;

class student{
    private:
    int roll;
    string name;
    int arr[6];
    int total;
    float percent;
    public:
    void getdata();
    void totalmarks();
    void displaygrade();
};

void student :: totalmarks(){
    int sum=0;
    for(int i=0;i<6;i++){
        sum=sum+arr[i];
    }
    total=sum;
    percent=float((total)/6);
    cout<<"TOTALMARK IS:"<<total<<endl;
    cout<<"Percentage is:"<<percent<<"%"<<endl;
}

void student :: getdata(){
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Roll Number:";
    cin>>roll;
    cout<<"Enter Your Marks:";
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
}

void student :: displaygrade(){
    if(total>=540){
        cout<<"Grade is:"<<"A+";
    }
    else if(total>=400 && total<540){
        cout<<"Grade is:"<<"B";
    }
    else{
        cout<<"Grade is:"<<"C";
    }
}

int main(){
    student ashu;
    ashu.getdata();
    cout<<"---OUTPUT---"<<endl;
    ashu.totalmarks();
    cout<<endl;
    ashu.displaygrade();
}
