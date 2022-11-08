#include<iostream>
#include<string>
using namespace std;

class ashu{
    private:
    int len;
    string s1;
    public:
    ashu(){
        cout<<"Default Constructor IS invoked."<<endl;
    }
    ashu(string e){
        s1=e;
        len=e.length();
        cout<<len<<endl;
    }
    ashu(ashu &x){
        len=x.len;
        s1=x.s1;
    }
    ~ashu(){
        cout<<"Destructor Is Invoked"<<endl;
    }
    void concatinate(string s2){
        string s3=s1+s2;
        int oplen=s3.length();
        cout<<"Concatenated String:"<<s3<<"  And its Length is:"<<oplen<<endl;
    }
};

int main(){
    ashu ty;
    ashu ft("Ashu");
    ashu rt("Shubham");
    ashu ui(ft);
    ft.concatinate("Tosh");
    ui.concatinate("Tosha");
}