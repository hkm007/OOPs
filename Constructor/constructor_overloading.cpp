#include <iostream>
using namespace std;

class Box
{
    private:
        int l, b, h;
    
    public:
        // default constructor
        Box() { }

        // parametrized constructor
        Box(int x, int y, int z) { l = x; b = y; h = z; }

        // constructor overloaded
        Box(int x, int y) { l = x; b = y; h = 1; }  

        int volume() {
            return l*b*h;
        }
};

int main() 
{
    Box b1(2,4,6); // constructor 1 used
    Box b2(3,5);   // constructor 2 used
    
    cout << b1.volume() << endl;
    cout << b2.volume() << endl;

    return 0;
}