#include <iostream>
using namespace std;
 
int main(){
    float x, y;
    float sum, difference, product;
    float quotient;
    cout << "Enter First Number\n";
    cin >> x;
    cout << "Enter Second Number\n";
    cin >> y;
    
    sum = x + y;
    difference = x - y;
    product = x * y;
    quotient = x / y;

    cout << "\nSum = " << sum;
    cout << "\nDifference  = " <<difference;
    cout << "\nMultiplication = " << product;
    cout << "\nDivision = " << quotient;
    return 0;
}