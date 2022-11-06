#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    try
    {
        if (n != 0)
        {
            cout << "Entered no is. " << n;
        }
        else
        {
            throw n;
        }
    }
    catch (int e)
    {
        cout << "Error occured because of no. = "<<n;
    }
}