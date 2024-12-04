// C++ program to check
// If two numbers are equal
#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    int y = 4;

    cout << "X : " << x << endl;
    cout << "Y : " << y << endl;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << endl;
    cout << "After:" << endl;

    cout << "X : " << x << endl;
    cout << "Y : " << y << endl;

    return 0;
}
