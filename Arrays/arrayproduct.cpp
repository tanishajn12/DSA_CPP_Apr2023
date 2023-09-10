#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    long arr[n];
    long prr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++ ){
        int p=1;
        for(int j=0; j<n; j++) {
            if(i!=j) {
                p=(p*arr[j]);
            }   
            prr[i]=p;
            
        }
    }

    for(int i=0; i<n ; i++) {
        cout<<prr[i]<<" ";
    }
    return 0;
}


