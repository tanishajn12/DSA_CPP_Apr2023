#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    // base case
    if (n == 1) {
        return;
    }

    // One pass of bubble sort. After this pass, the largest element
    // is moved (or bubbled) to end.
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call to bubbleSort for remaining elements
    bubbleSort(arr, n - 1);
}

int main() {
    int arr[] = {5, 2, 1, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

