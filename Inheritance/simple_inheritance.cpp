#include <iostream>
using namespace std;

class Base 
{
	private:
		int a;

	public:
		void set_base(int x) { a = x; }
		void info_base() { cout << "This is base class with a = " << a << endl; }
};

class Derived : public Base
{
	private:
		int b;

	public:
		void set_derived(int y) { b = y; }
		void info_derived() { cout << "This is derived class with b = " << b << endl; }
};

int main()
{
	Derived d1;
	
	d1.set_base(3);
	d1.set_derived(5);
	d1.info_base();
	d1.info_derived();

	return 0;
}