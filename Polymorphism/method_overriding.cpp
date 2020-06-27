#include <iostream>
using namespace std;

class Base 
{
	public:
		void fun() { cout << "Function from base class.\n"; }
};

class Derived : public Base
{
	public:
		// override
		void fun() { cout << "Function from derived class.\n"; }
};

int main()
{
	Base b1;
	Derived d1;

	b1.fun();
	d1.fun();

	return 0;
}