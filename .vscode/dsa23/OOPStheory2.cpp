#include<iostream>
using namespace std;

class all{
    private:
    int n;
    public:
    void getnumber();
    void factorial();
    void even();
    void prime();
};

void all :: getnumber(){
    cout<<"Enter Number:";
    cin>>n;
}

void all :: factorial(){
    int product=1;
    if(n == 0 || n == 1){
        cout<<"Factorial is 1"<<endl;
    }
    else{
        for(int i=1;i<=n;i++){
            product=product*i;
        }
        cout<<"Factorial is "<<product<<endl;
    }
}

void all :: even(){
    if(n % 2 == 0){
        cout<<"Number is Even."<<endl;
    }
    else{
        cout<<"Number is odd."<<endl;
    }
}

void all :: prime(){
    int count =0;
    for(int i=1;i<=n;i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 2){
        cout<<"Number is Prime"<<endl;
    }
    else{
        cout<<"Number is Not Prime"<<endl;
    }
}

int main(){
    all ashu;
    int x;
    ashu.getnumber();
    do{
        cout<<"1.Check for Even Number."<<endl;
        cout<<"2.Check for prime."<<endl;
        cout<<"3.Calculate Factorial."<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter Choice:";
        cin>>x;
        switch(x){
            case 1:ashu.even();break;
            case 2:ashu.prime();break;
            case 3:ashu.factorial();break;
            case 4:break;
        }
    }while(x != 4);
    return 0;
}