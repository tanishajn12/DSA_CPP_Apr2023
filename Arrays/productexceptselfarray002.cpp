#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    int ans[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int p=1;

    for(int i=0; i<n; i++) {
        p*=arr[i];
    }

    for(int i=0; i<n; i++) {
        ans[i]=p/arr[i];
    }
    
    int k=0;
    while(k<n) {
        cout<<ans[k]<<' ';
        k++;
    }
    return 0;
}

