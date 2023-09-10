#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int k=0;
    int sum=0;

    int arr[n];

    for (int i=0; i<n; i++) {   //input elements of array
        cin>>arr[i];
    }

    for(int j=0; j<n; j++) {
        while(k<=j) {
            sum=sum+arr[k];
            k++;
        }
        cout<<sum<<' ';  
    }
    return 0;
}

