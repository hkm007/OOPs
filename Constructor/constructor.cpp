#include <iostream>
using namespace std;

class Box
{
    private:
        int l, b, h;
    
    public:
        // constructor
        Box(int x, int y, int z) { l = x; b = y; h = z; }

        int volume() {
            return l*b*h;
        }
};

int main() 
{
    Box b1(2,4,6); // object created while passing value to constructor
    
    cout << b1.volume() << endl;

    return 0;
}