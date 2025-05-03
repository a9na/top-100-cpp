// C++ program to implement
// Insertion sort
#include <bits/stdc++.h>
using namespace std;

// Function to sort using
// Insertion
void insertion_sort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Print array
void print_array(int arr[], int n)
{
    cout << " Sorted array:";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = { 1, 4, 3, 2, 5 };
    int N = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, N);
    print_array(arr, N);

    return 0;
}
