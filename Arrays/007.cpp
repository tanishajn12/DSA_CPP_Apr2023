#include<iostream>
using namespace std;

int main() {
    long int n;
    cin>>n;

    long arr[n];
    long brr[n];

    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for (int i=0; i<n; i++) {
        cin>>brr[i];
    }



    cout<<'[';

    
    for(int i=0; i<n; i++){
        if(arr[i]==brr[i]) {
            cout<<arr[i]<<", ";

        }
    }
    cout<<']';
    return 0;
}