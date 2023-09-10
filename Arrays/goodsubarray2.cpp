#include<iostream>

using namespace std;

int main() {

    //approach time:O(n^2)  space: O(n)
    int arr[]= {1,6,5,2,4,3};
    int n= sizeof(arr)/sizeof(int);

    int csum[101];
    csum[0]= 0;

    for(int i=1; i<=n; i++) {
        csum[i]=csum[i-1] + arr[i-1];
    }

    int count=0; //to track number of good subarrays

    for(int i=0; i<n; i++) {
        for(int j=i; j<=n-1; j++) {
            int sum=csum[j+1]-csum[i];
            if(sum % n==0) {
                //if it gets divisble by n it is a good array
                count++;
            }
        }
    }
    cout<<count<<endl; 
}


