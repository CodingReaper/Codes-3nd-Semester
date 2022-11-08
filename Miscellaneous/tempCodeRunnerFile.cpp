#include <iostream>
using namespace std;
class A
{
public:
    double add(double x, double y)
    {
        return x + y;
    }
    int add(int x, int y)
    {
        return x + y;
    }
    int add(int x, int y, int z)
    {
        return x + y + z;
    }
};

// progam cont...
int main()
{
    A a;
    cout << a.add(1, 2) << endl;
    cout << a.add(1.5, 2.5) << endl;
    cout << a.add(1, 2, 3) << endl;
    return 0;
}