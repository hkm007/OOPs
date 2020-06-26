#include <iostream>
using namespace std;

class B;    // forward declaration

class A
{
	private:
		int a;

	public:
		// constructor
		A(int x) { a = x; }

		// friend function
		friend int fun(A, B);
};

class B 
{
	private:
		int b;

	public:
		// constructor
		B(int y) { b = y; }

		// friend function
		friend int fun(A, B);
};

int fun(A t, B z) {
	return t.a+z.b;
}

int main()
{
	A a1(2);
	B b1(4);

	cout << fun(a1, b1) << endl;

	return 0;
}