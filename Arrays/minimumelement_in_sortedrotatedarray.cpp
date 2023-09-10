#include<iostream>
using namespace std;

int main() {
    //Time complexity : O(log N) Space complexity : O(1)
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    if(n==1) { //if the array has only one element return that
        cout<<arr[0];
    }
    
    int left=0; 
    int right= n-1;

    if(arr[n-1]>arr[0]) {
        cout<< arr[0]; //if the last element is greater than first element then there
        //is no rotation
    }

    while(right>=left) {
        //find the mid element
        int mid= left+ (right-left)/2;

        //if the mid element is greater then its next element then mid+1
        //element is smallest
        if(arr[mid]>arr[mid+1]) {
            cout<< arr[mid+1];
        }

        //if the mid element is lesser then its previous element 
        //then mid element is smallest
        if(arr[mid-1]>arr[mid]) {
            cout<<arr[mid];
        } 

        // if the mid elements value is greater than the 0th element this means
        // the least value is still somewhere to the right as 
        //we are still dealing with elements greater than arr[0]

        if(arr[mid]>arr[0]) {
            left=mid+1;
        }
        else {
        // if arr[0] is greater than the mid value then this means the 
        //smallest value is somewhere to the left
        right=mid-1;
        }
    }
    return 0;
}

