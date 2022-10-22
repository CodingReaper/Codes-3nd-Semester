#include <iostream>
using namespace std;
 
int main() {
    float fahren, celsius;
 
    cout << "Enter the temperature in celsius\n";
    cin >> celsius;
    fahren =(9.0/5.0) * celsius + 32;
 
    cout << celsius <<"Centigrade is equal to " << fahren <<"Fahrenheit";
     
    return 0;
}
