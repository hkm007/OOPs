#include <iostream>
using namespace std;

inline int fun_square(int x) { return x*x; }

int main()
{
	cout << fun_square(4) << endl;

	return 0;
}