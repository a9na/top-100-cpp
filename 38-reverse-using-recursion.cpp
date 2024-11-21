// C++ Program to
// Reverse string using
// recursion
#include <iostream>
using namespace std;

void reverse_str(string& s, int n, int i)
{
    if (n <= i) {
        return;
    }

    swap(s[i], s[n]);
    reverse_str(s, n - 1, i + 1);
}

int main()
{
    string str = "GeeksforGeeks";
    reverse_str(str, str.length() - 1, 0);
    cout << str << endl;
}
