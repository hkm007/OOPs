#include <iostream>
using namespace std;

class Box
{
    private:
        int l, b, h;
    
    public:
        // parametrized constructor
        Box(int x, int y, int z) { l = x; b = y; h = z; }

        // copy constructor
        Box(Box &c) { l = c.l; b = c.b; h = c.h; }

        int volume() {
            return l*b*h;
        }
};

int main() 
{
    Box b1(2,3,4);
    Box b2(b1);

    cout << b1.volume() << endl;
    cout << b2.volume() << endl;

    return 0;
}