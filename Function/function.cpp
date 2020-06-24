#include <iostream>
using namespace std;

void func(int a); // function declaration

int main() 
{
    int a = 1;
    func(a);  // function call

    return 0;
}

// function definition
void func(int a) {
    cout << "a = " << a << endl;
}