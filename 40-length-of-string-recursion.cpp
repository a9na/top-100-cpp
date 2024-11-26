// C++ Program for calculating
// the length of string
#include <iostream>
using namespace std;

int cal(char* str)
{
    // base condition
    if (*str == '\0')
        return 0;
    else
        return 1 + cal(str + 1);
}

int main()
{
    char str[] = "GeeksforGeeks";
    cout << cal(str);
    return 0;
}
