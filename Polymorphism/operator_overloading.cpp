#include <iostream>
using namespace std;

class Complex
{
	private:
		int i, j;

	public:
		Complex() {  } // default constructor
		Complex(int x, int y) { i = x; j = y; }

		void show() { cout << "i = " << i << " j = " << j << endl; }

		// operator overloading
		Complex operator+(Complex &temp);
};

Complex Complex::operator+(Complex &temp) {
	Complex res;

	res.i = i + temp.i;
	res.j = j + temp.j;

	return res;
}

int main()
{
	Complex c1(2, 3), c2(4, 7), c3;
	c3 = c1+c2;   // c3 = c1.operator+(c2);
	c3.show();
	return 0;
}