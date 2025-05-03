// C++ program to find k Maximum elements
#include <bits/stdc++.h>
using namespace std;

// Function to print k Maximum elements
void printMax(int arr[], int n, int k)
{
    int result[n], c[n];

    // Coping the array a
    // into c and initialising
    for (int i = 0; i < n; i++) {
        c[i] = arr[i];
        result[i] = 0;
    }

    for (int i = 0; i < k; i++) {

        int maxi = INT_MIN;
        int index;
        for (int j = 0; j < n; j++) {
            if (arr[j] > maxi) {
                maxi = arr[j];
                index = j;
            }
        }
        // Assigning 1 in order
        // to mark the position
        // of all k maximum numbers
        result[index] = 1;
        arr[index] = INT_MIN;
    }

    // Printing elements
    for (int i = 0; i < n; i++) {
        if (result[i] == 1)
            cout << c[i] << " ";
    }
}

int main()
{
    int arr[] = { 50, 8, 45, 12, 25, 40, 84 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    printMax(arr, n, k);
    return 0;
}
