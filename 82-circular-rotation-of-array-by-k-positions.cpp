#include <iostream>
using namespace std;

void Rotate(int arr[], int k, int n)
{
    // temp array
    int temp[n];

    // Keepig track of the current index
    // of temp[]
    int t = 0;

    // Storing the n - d elements of
    // array arr[] to the front of temp[]
    for (int i = k; i < n; i++) {
        temp[t] = arr[i];
        t++;
    }

    // Storing the first d elements of array arr[]
    // into temp
    for (int i = 0; i < k; i++) {
        temp[t] = arr[i];
        t++;
    }

    // Copying the elements of temp[] in arr[]
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    // Function calling
    Rotate(arr, k, N);
    print_array(arr, N);

    return 0;
}
