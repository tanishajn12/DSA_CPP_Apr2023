#include<iostream>
using namespace std;

int main() {
    //KADANE ALGORITHM
    int t;
    cin>>t; //input number of test cases

    int n;
    cin>>n; //input the number of elements in array

    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int sum=0;
    for(int i=1; i<n; i++) {
        sum+=arr[i];
    }

    int curr_max=arr[0], max_so_far= arr[0], curr_min=arr[0], min_so_far=arr[0];

    for(int i=1; i<n; i++ ){
        // Kadane's Algorithm to find Maximum subarray sum
        curr_max= max(curr_max+arr[i], arr[i]) ;
        max_so_far=max(max_so_far, curr_max);

        // Kadane's Algorithm to find Minimum subarray sum.
        curr_min = min(curr_min + arr[i], arr[i]);
        min_so_far = min(min_so_far, curr_min);
    }

    if(min_so_far==sum)  {
        cout<<max_so_far;
    }

    cout<<max(max_so_far,sum - min_so_far);
    return 0;


}

