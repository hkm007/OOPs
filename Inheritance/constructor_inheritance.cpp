#include <iostream>
using namespace std;

class Base 
{
	private:
		int a;

	public:
		Base(int x) { a = x; }

		void get_base() { cout << a << endl; }
};

class Derived : public Base
{
	private:
		int b;

	public:
		Derived(int x, int y) : Base(x) { b = y; }

		void get_derived() { cout << b << endl; }
};

int main()
{
	Derived d1(2, 4);

	d1.get_base();
	d1.get_derived();

	return 0;
}