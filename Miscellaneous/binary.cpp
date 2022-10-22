#include<iostream>
using namespace std;

class binary{
    public:
    int number1;
    binary(){
        cout<<"Enter number in binary:";
        cin>>number1;
        int de=0,r,i=0;
        int base=1;
        while(number1!=0){
            r=number1%10;
            number1=number1/10;
            de=de+r*base;
            base=base*2;
        }
        number1=de;
    }
    void sum(binary a,binary b){
        int p = a.number1;
        int q = b.number1;
        int z = p+q;
        int k = 0;
        int arr[64];
        while(z>0){
            arr[k]=z%2;
            z=z/2;
            k++;
        }
        for(int j=k-1;j>=0;j--){
            cout<<arr[j];
        }
    }
    void sub(binary a,binary b){
        int p = a.number1;
        int q = b.number1;
        int z = p-q;
        int k = 0;
        int arr[64];
        while(z>0){
            arr[k]=z%2;
            z=z/2;
            k++;
        }
        for(int j=k-1;j>=0;j--){
            cout<<arr[j];
        }
    }
    void mul(binary a,binary b){
        int p = a.number1;
        int q = b.number1;
        int z = p*q;
        int k = 0;
        int arr[64];
        while(z>0){
            arr[k]=z%2;
            z=z/2;
            k++;
        }
        for(int j=k-1;j>=0;j--){
            cout<<arr[j];
        }
    }
    
};

int main()
{
    binary x;
    binary y;
    binary zsum;
    binary msub;
    binary kmul;
    cout<<"sum is:";
    zsum.sum(x,y);    
    cout<<endl;
    cout<<"sub is:";
    msub.sub(x,y);
    cout<<endl;
    cout<<"mul is:";
    kmul.mul(x,y);
    cout<<endl;
    return 0;
}