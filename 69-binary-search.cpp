// C++ program to implement
// Binary Search
#include <iostream>
using namespace std;

// Binary Search Function
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        // Middle element
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

int main(void)
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int x = 5;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index " << result;
    return 0;
}
