#include<iostream>
using namespace std;

class A
{
public:
void display()
{
cout<<"Class A";
}
} ;
class B : public A
{
public:
void display()
{
cout<<"Class B" ;
}
} ;

int main()
{
B b;
b.display(); // Calling the display() function of B class.
b.A :: display(); // Calling the display() function defined in A class.
}

 