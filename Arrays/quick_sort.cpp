#include<iostream>
using namespace std;

int partition(int* arr, int s, int e) {

	int i = s-1; // represents the boundary of the leftPartition
	int pivot = arr[e];

	for(int j=s, j<=e; j++) {
		if(arr[j] < pivot) {
			// insert the jth element in the leftPartition
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[e]);
	return i+1;

}

void quickSortIterative(int* arr, int s, int e) {
	if(s >= e) {
		return;
	}
	//create an auxiliary stack
    int stack[e-s+1];

    //initialize top of stack
    int top=-1;

    
}

int main() {

	int arr[] = {60, 50, 20, 10, 40, 30};
	int n = sizeof(arr) / sizeof(int);

	quickSort(arr, 0, n-1);

	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
	return 0;
}


