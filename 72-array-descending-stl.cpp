// C++ program to sort Array
// in descending order
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Get the array
    int arr[] = { 1, 2, 3, 4, 5, 6 };

    // Compute the sizes
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the array
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // Sort the array in descending order
    sort(arr, arr + n, greater<int>());

    // Print the array
    cout << "\nDescending Sorted Array:";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
