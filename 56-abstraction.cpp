// C++ Program to implement
// Working of Abstraction
#include <iostream>
using namespace std;

class implementAbstraction {
private:
    int p, q;

public:
    // method to set values of
    // private members
    void setter(int x, int y)
    {
        p = x;
        q = y;
    }

    void display()
    {
        cout << "p = " << p << endl;
        cout << "q = " << q << endl;
    }
};

int main()
{
    implementAbstraction obj;

    obj.setter(1, 2);
    obj.display();

    return 0;
}
