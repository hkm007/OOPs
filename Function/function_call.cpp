#include <iostream>
using namespace std;

void func1(int a)
{
    cout << "a = " << a << endl;
}

void func2(int *p)
{
    cout << "a = " << *p << endl;
}

void func3(int &x)
{
    cout << "a = " << x << endl;
}

int main() 
{
    int a = 1;
    int *p = &a;
    int &x = a;

    func1(a);  // call by value
    func2(p);  // call by address
    func3(x);  // call by reference

    return 0;
}