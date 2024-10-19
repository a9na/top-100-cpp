// C++ program for checking
// if it is Palindrome or not
#include <iostream>
using namespace std;

string isPalindrome(string S)
{
    for (int i = 0; i < S.length() / 2; i++) {
        if (S[i] != S[S.length() - i - 1]) {
            return "No";
        }
    }

    return "Yes";
}

int main()
{
    string S = "Anuska";

    cout << isPalindrome(S);

    return 0;
}
