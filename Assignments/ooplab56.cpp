#include <iostream>
using namespace std;
class test {
    private:
	static int count;
    public:
	test()
	{
		count++;
	}
	static void printObjCount()
	{
		cout << "count:" << count<< "\n";
	}
};
int test::count;
int main()
{
	test t1, t2;
	test::printObjCount();

	test t3,t5,t6;
	test::printObjCount();
	return 0;
}