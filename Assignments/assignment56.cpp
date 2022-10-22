#include <iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		int inches;
	public:
		void setdistance()
		{
			cout<<"Enter feet: ";
			cin>>feet;
			cout<<"Enter inches: ";
			cin>>inches;
		}
		void getdistance()
		{
			cout<<"Distance is feet= "<<feet<<", inches= "<<inches<<endl;
		}
		void add(Distance d1, Distance d2)
		{
			feet = d1.feet + d2.feet;
			inches = d1.inches + d2.inches;
			feet = feet + (inches / 12);
			inches = inches % 12;
		}
};
int main()
{
	Distance d1, d2, d3;
	d1.setdistance();
	d2.setdistance();
	d3.add(d1, d2);
	d3.getdistance();
	return 0;
}