// C++ program to demonstrate
// Function overloading or
// Compile-time Polymorphism
#include <iostream>

using namespace std;

class Geeks {
public:
    // Function same name different
    // Parameters
    void func(int x)
    {
        cout << "value of x is " << x << endl;
    }

    void func(double x)
    {
        cout << "value of x is " << x << endl;
    }

    void func(int x, int y)
    {
        cout << "value of x and y is " << x << ", " << y
             << endl;
    }
};

int main()
{
    Geeks obj1;

    // Function being called depends
    // on the parameters passed
    // func() is called with int value
    obj1.func(10);

    // func() is called with double value
    obj1.func(5.321);

    // func() is called with 2 int values
    obj1.func(94, 32);
    return 0;
}
