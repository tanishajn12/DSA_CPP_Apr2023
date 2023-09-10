#include<bits/stdc++.h>
using namespace std;

int compare(int a, int b) {
    string x= to_string(a);
    string y= to_string(b);

    return x+y >= y+x;
}

int main() {

    int t;
    cin>>t;

    while(t>0){
        int n;
        cin>>n;
        
        int arr[n];
        
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        
        sort(arr, arr+n, compare);
        
        for(int i=0; i<n; ++i) {
            cout<<arr[i];
        }

        t--;
    }

    return 0;
}