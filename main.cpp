#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int n, int arr2[], int m) {
    int i = n - 1; // Index of last element in arr1
    int j = 0;     // Index of first element in arr2

    while (i >= 0 && j < m) {
        if (arr1[i] > arr2[j]) {
            // Swap arr1[i] and arr2[j]
            int temp = arr1[i];
            arr1[i] = arr2[j];
            arr2[j] = temp;
            i--; // Move one step left in arr1
            j++; // Move one step right in arr2
        } else {
            break; // If arr1[i] <= arr2[j], no more swaps needed
        }
    }

    // After merging, sort the modified arr1 and arr2
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main() {
    int n = 4;
    int arr1[] = {1, 3, 5, 7};

    int m = 5;
    int arr2[] = {0, 2, 6, 8, 9};

    mergeArrays(arr1, n, arr2, m);

    cout << "arr1[] = ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "arr2[] = ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
