#include<iostream>
using namespace std;

int main() {
    float a,b,c;

    cout << "Enter three numbers: ";
    cin>>a>>b>>c;

    if((a <= b) && (a <= c))
        cout << "Smallest number: " << a;
    else if ((b<=a) && (b<=c))
        cout << "Smallest number: " << b;
    else
        cout << "Smallest number: " << c;
    return 0;
}