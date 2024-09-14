// C++ program to print whether a character is an alphabet
// or not
#include <cctype>
#include <iostream>
using namespace std;

int main()
{
    char ch;

    ch = 'a';

    if (isalpha(ch)) {
        cout << ch << " is an alphabet." << endl;
    }
    else {
        cout << ch << " is not an alphabet." << endl;
    }

    return 0;
}
