// C++ program to find the index
// of an element in a vector
#include <bits/stdc++.h>

using namespace std;

// print index of element
void print_index(vector<int> v, int element)
{
    auto it = find(v.begin(), v.end(), element);

    // Condition if element found
    if (it != v.end()) {

        // Calculating the index
        // of element
        int index = it - v.begin();
        cout << index << endl;
    }
    // No such element in vector
    else {
        cout << "-1" << endl;
    }
}

int main()
{
    vector<int> v = { 1, 2, 3, 4, 5, 6 };

    int element = 5;
    print_index(v, element);

    return 0;
}
