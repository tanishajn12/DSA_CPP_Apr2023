#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        int arr[n];

        for(int i=0; i<n; ++i) {
            cin>>arr[i];

        }

        int i,j;
        for(int i=n-2; i>=0; --i) {
            if (arr[i]<arr[i+1]) {
                break;
            }
        }

        if (i<0) {
            reverse (arr,arr+n);
        }

        else {
            for(j=n-1; j>i; --j) {
                if (arr[j]>arr[i]) {
                    break;
                }
            }

            swap(arr[i],arr[j]);

            reverse (arr+i+1, arr+n);
        }

        for(int i=0; i<n; ++i) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;


    
}