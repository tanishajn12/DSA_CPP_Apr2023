#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int low=0;  //denotes the start of 2nd part - 1's
    int mid=0;  //denotes the start of 3rd part  - unknown
    int high=n-1;  //denotes the end of 3rd part - 2's

    while(mid<=high) {

        if (arr[mid]==0) {
            swap(arr[mid] , arr[low]);
            low++;
            mid++;
        }

        else if (arr[mid]==1) {
            mid++;
        }

        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
    
}

