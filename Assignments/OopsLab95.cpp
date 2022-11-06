#include <iostream>
using namespace std;

int main()
{
    float x, y, r;
    cout << "Enter X and Y:";
    cin >> x >> y;
    try
    {
        if (y != 0)
        {
            r = x / y;
            cout << "Result: " << r;
        }
        else{
            throw(y);
        }
    }
    catch (int error)
    {
        cout << "Exception occured: Zero Encountered";
    }
    return 0;
}