// C++ Program to implement
// The concept of Encapsulation
#include <iostream>
using namespace std;

class Encapsulation {
private:
    // data hidden from outer functions
    int x;

public:
    // function to set value of
    // variable x
    void setter(int a) { x = a; }

    // function to return value of
    // variable x
    int getter() { return x; }
};

int main()
{
    Encapsulation obj;

    obj.setter(13);

    cout << obj.getter();

    return 0;
}
