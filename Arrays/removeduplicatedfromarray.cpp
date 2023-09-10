#include<iostream>
using namespace std;

int main() {
    // Time Complexity : O(n)  Auxiliary Space : O(1)
    long n;
    cin>>n;

    long arr[n];

    for(int i=0; i<n; i++) {  //array is already sorted
        cin>>arr[i];    
    
    }

    if (n==0 || n==1 ) {
        return n;  //return if array is empty or contains one element
    }

    int j=0;

    for(int i=0; i<n-1; i++) {
        if (arr[i] != arr[i+1]) {
            arr[j]=arr[i];
            j++;
            
        }
    }
    
    arr[j++]= arr[n-1]; //store the last element
    cout<<j<<endl;

    for(int i=0; i<j; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
