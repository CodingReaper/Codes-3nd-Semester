#include <iostream>
using namespace std;
class distanc
{
private:
    int x;

public:
    distanc(int a = 0)
    {
        x = a;
    }
    friend distanc operator+(distanc d, distanc e)
    {
        distanc m;
        m.x = d.x + e.x;
        return m;
    }
    void display()
    {
        cout << "Distance:" << x << endl;
    }
    friend distanc operator>(distanc l, distanc k)
    {
        if (l.x > k.x)
        {
            cout << "1st Object is Large.\n"
                 << endl;
            return l;
        }
        else
        {
            cout << "2nd Object is Large.\n"
                 << endl;
            return k;
        }
    }
    int operator==(distanc d1)
    {
        int total = x;
        int total1 = d1.x;
        if (total == total1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    distanc obj1(90), obj2(10), obj3, obj4;
    obj3 = obj1 + obj2;
    obj3.display();
    obj4 = obj1 > obj2;
    if (obj1 == obj2)
    {
        cout << "Same." << endl;
    }
    else
    {
        cout << "Not Same." << endl;
    }
    return 0;
}