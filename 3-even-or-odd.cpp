// C++ program to check for even or odd
#include <iostream>
using namespace std;

// Returns true if n is
// even, else odd
bool isEven(int n) { return (n % 2 == 0); }

int main()
{
    int n = 247;
    if (isEven(n) == true) {
        cout << "Even" << endl;
    }
    else {
        cout << "Odd";
    }

    return 0;
}
