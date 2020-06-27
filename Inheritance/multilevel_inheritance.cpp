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

class Middle : public Base
{
	private:
		int b;

	public:
		Middle(int x, int y) : Base(x) { b = y; }

		void get_middle() { cout << b << endl; }
};

class Derived : public Middle
{
	private:
		int c;

	public:
		Derived(int x, int y, int z) : Middle(x, y) { c = z; }

		void get_derived() { cout << c << endl; }
};

int main()
{
	Derived d1(2, 4, 8);

	d1.get_base();
	d1.get_middle();
	d1.get_derived();

	return 0;
}