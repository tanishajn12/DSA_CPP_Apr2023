#include<iostream>
using namespace std;

//runtime complexity :O(logn)

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int t;
    cin>>t;

    cout<<f(arr,n,t)<<endl;

    return 0;
}