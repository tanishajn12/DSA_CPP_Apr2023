#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    int sq[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++) {
        sq[i]= (arr[i]*arr[i]);
    }
    
    for(int j=1; j<=n-1; j++) {
        int key= sq[j];
        int k=j-1;
        while(k>=0 && sq[k] > key) {
            sq[k+1] = sq[k];
            k--;
        }
        sq[k+1] = key;
    }

    for(int i=0; i<n; i++) {
        cout<<sq[i]<<" ";
    }
    return 0;
}
