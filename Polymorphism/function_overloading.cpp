#include <iostream>
using namespace std;

void func(int a)
{
    cout << "a = " << a << endl;
}

// function overloaded
void func(int a, int b, int c = 0)  // function can accept 2 or 3 arguements
{
    cout << a+b+c << endl;
}

int main() 
{
    func(2);
    func(3,7);  

    return 0;
}