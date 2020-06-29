#include <iostream>
using namespace std;

class Base
{
	public:
		virtual void fun() { cout << "Base class virtual function\n"; }
		void print_base() { cout << "Base class normal function\n"; }
};

class Derived : public Base
{
	public:
		void fun() { cout << "Derived class virtual function\n"; }
		void print_derived() { cout << "Derived class normal function\n"; }
};

int main()
{
	Base *bptr, b1;
	Derived d1;

	bptr = &d1;
	
	b1.fun();
	bptr->fun();
	bptr->print_base();

	return 0;
}