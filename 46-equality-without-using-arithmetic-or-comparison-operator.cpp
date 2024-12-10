// C++ Program to equality of
// Two numbers without using
// Arithmetic or comparison operator
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 10;

    if (a ^ b)
        cout << "Not-Equal";
    else
        cout << "Equal";

    return 0;
}
