#include <iostream>
using namespace std;

class Example
{
	private:    // access specifier
		int a;

	protected:  // access specifier
		int b;

	public:     // access specifier

		void set(int x, int y) { a = x; b = y; }
		void get() { cout << "a = " << a << " b = " << b << endl; }
};

int main()
{
	Example e1;

	e1.set(2, 4);
	e1.get();

	return 0;
}