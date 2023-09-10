#include <iostream>
using namespace std;

//Time complexity : O(log N) Space complexity : O(1)
//Binary Search Algorithm

int findMin(int arr[], int low, int high){
	if (high < low) {
		return arr[0];
    }

	// If there is only one element left
	if (high == low) {
		return arr[low];
    }

	int mid = low + (high - low) / 2;     /*(low + high)/2;*/

	// Check if element (mid+1) is minimum element. Consider
	// the cases like {3, 4, 5, 1, 2}
	if (mid < high && arr[mid + 1] < arr[mid]) {
		return arr[mid + 1];
    }

	// Check if mid itself is minimum element
	if (mid > low && arr[mid] < arr[mid - 1]){
		return arr[mid];
    }

	// Decide whether we need to go to left half or right half
	if (arr[high] > arr[mid]) {
		return findMin(arr, low, mid - 1);
    }

    else{
        return findMin(arr, mid + 1, high);  
    }
}

int main(){
    int N;
    cin>>N;
	int arr[N];
	
    for(int i=0; i<N; i++) {
        cin>>arr[i];
    }
	cout << findMin(arr, 0, N - 1) << endl;
	return 0;
}
