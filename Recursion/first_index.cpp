#include<iostream>
using namespace std;

int f(int* x, int n , int t, int i) {
    //base case

    // if(i==n) {
    //     //'t' is not present in array
    //     return -1;
    // }

    if (i==n-1) {
        //search for the index of the first occ of the t in x[n-1..n-1] = {x[n-1]}

        if(x[n-1]==t) {
            //you'hv found the target
            return n-1;
        }
        else{
            //target is not present
            return -1;
        }
    }

    //recursive case
    //search for the index of the first occ of the t in x[i...n-1]

    if(x[i]==t) {
        //you'hv found the index of the first occ of the t at index i;
        return i;
    }

    //search for the index of the first occ of the t in x[i+1...n-1]
    return f(x,n,t,i+1);
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int t;
    cin>>t;

    cout<<f(arr, n,t,0) << endl;

    return 0;
}
