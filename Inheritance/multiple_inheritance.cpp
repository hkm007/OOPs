#include <iostream>
using namespace std;

class A
{
	public:
		void show_A() { cout << "Class A member function.\n"; }
};

class B
{
	public:
		void show_B() { cout << "Class B member function.\n"; }
};

class C : public A, public B
{
	public:
		void show_C() { cout << "Class C member function.\n"; }
};

int main()
{
	C c1;

	c1.show_A();   // inherited from A
	c1.show_B();   // inherited from B
	c1.show_C();

	return 0;
}