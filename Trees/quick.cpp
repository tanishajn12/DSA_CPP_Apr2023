#include <iostream>
#include <stack>
using namespace std;

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Partition function for Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Iterative Quick Sort function
void quickSortIterative(int arr[], int low, int high) {
    stack<int> st;
    st.push(low);
    st.push(high);

    while (!st.empty()) {
        high = st.top();
        st.pop();
        low = st.top();
        st.pop();

        int pivotIndex = partition(arr, low, high);

        if (pivotIndex - 1 > low) {
            st.push(low);
            st.push(pivotIndex - 1);
        }

        if (pivotIndex + 1 < high) {
            st.push(pivotIndex + 1);
            st.push(high);
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {9, 5, 1, 8, 3, 2, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    quickSortIterative(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}


