#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float a, b, c, x1, x2, discriminant,real,imaginary;
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1;
        cout << "\nx2 = " << x2;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1;
    }

    else {
        real=-b/(2*a);
        imaginary=sqrt(-discriminant)/(2*a);  //discriminant is already -ve so taking extra -ve will make it +ve.
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << real<< "+" << imaginary << "i";
        cout << "\nx2 = " << real << "-" << imaginary << "i";
    }

    return 0;
}