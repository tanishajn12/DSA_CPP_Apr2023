#include<iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    cin>>n;
    
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for (int i=1; i<=n-1; i++) {
        //in the ith pass we will place the largest element
        //in the unsorted part of array to its correct place

        bool flag=true; //assume the array is already sorted

        for (int j=0; j<n-i; j++) {
            if (arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1] );
                flag=false;
            }
        }

        if (flag) {
            //no swap were done in the current pass
            //therefore array is already sorted
            break;
        }
    }
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    return 0;
}


