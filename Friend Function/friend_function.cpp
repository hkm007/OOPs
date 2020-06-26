#include <iostream>
using namespace std;

class Complex
{
	private:
		int i, j;

	public:
		void set(int a, int b) { i = a; j = b; }

		// friend function
		friend void fun(Complex &c);
};

void fun(Complex &c) {
	cout << "Before swapping: ";
	cout << "i = " << c.i << " j = " << c.j << endl;
	swap(c.i, c.j);
	cout << "After swapping: ";
	cout << "i = " << c.i << " j = " << c.j << endl;
}

int main()
{
	Complex c1;

	c1.set(2, 5);
	fun(c1);

	return 0;
}