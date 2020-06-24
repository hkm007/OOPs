#include <iostream>
using namespace std;

class Car     
{
    // private data members
    private:
        char name[15];
        int top_speed;
        float price;

    // public member functions
    public:
        void set_data() {
            cout << "Enter car details\n\n";
            cout << "Name: ";
            cin >> name;
            cout << "Top Speed: ";
            cin >> top_speed;
            cout << "Price: ";
            cin >> price;
        }

        void get_data();
};

// Member function of class defined outside of class 
// using scope resolution operator
void Car:: get_data() {
    cout << "Car details: \n";
    cout << "Name: " << name << endl;
    cout << "Top Speed: " << top_speed << endl;
    cout << "Price: " << price << endl;
}

int main()
{
    Car c1;   // creating object of class Car

    c1.set_data();   // calling member function
    c1.get_data();

    return 0;
}