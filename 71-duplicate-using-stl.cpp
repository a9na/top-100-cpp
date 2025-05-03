// C++ program to remove the
// duplicate elements from the array
// using STL in C++
#include <bits/stdc++.h>

using namespace std;

// Function to remove duplicate elements
void removeDuplicates(int arr[], int n)
{

    int i;

    set<int> s;

    // Insert the array elements
    // into the set
    for (i = 0; i < n; i++) {
        s.insert(arr[i]);
    }

    set<int>::iterator it;

    // Print the array with duplicates removed
    cout << "\nAfter removing duplicates:\n";
    for (it = s.begin(); it != s.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}

int main()
{
    int arr[] = { 1, 2, 2, 4, 3, 3, 2, 1 };

    int n = sizeof(arr) / sizeof(arr[0]);

    // Print array
    cout << "\nBefore removing duplicates:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    removeDuplicates(arr, n);

    return 0;
}
