#include <iostream>
using namespace std;

//algorith -> time complexity : O(n)   space : O(1)

int maxCircularSum(int arr[], int n)
{
	if (n == 1){
		return arr[0];
    }

    // Initialize sum variable which store total sum of the array.
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	// Initialize every variable with first value of array.
	int curr_max = arr[0], max_so_far = arr[0], 
    curr_min = arr[0], min_so_far = arr[0];

	// Concept of Kadane's Algorithm
	for (int i = 1; i < n; i++) {
		// Kadane's Algorithm to find Maximum subarray sum.
		curr_max = max(curr_max + arr[i], arr[i]);
		max_so_far = max(max_so_far, curr_max);

		// Kadane's Algorithm to find Minimum subarray sum.
		curr_min = min(curr_min + arr[i], arr[i]);
		min_so_far = min(min_so_far, curr_min);
	}

	if (min_so_far == sum){
		return max_so_far;
    }

	// returning the maximum value
	return max(max_so_far, sum - min_so_far);
}


int main()
{
    int t;
    cin>>t; //input the number of test cases

    int n;
    cin>>n; //input size of array

    int arr[n];

	for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

	cout<< maxCircularSum(arr, n) << endl;
	return 0;
}

