#include <iostream>
using namespace std;

class Example
{
	private:
		int a;

	public:
		// constructor
		Example(int x) { 
			a = x; 
			cout << "Constructor ran successfully.\n";
		}

		// destructor
		~Example() { cout << "Destructor ran successfully.\n"; }
};

int main()
{
	Example e1(2);

	return 0;
}