#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int k=0;
    int s=0;
    int sum[n];  //initialising sum array
    int arr[n];

    for (int i=0; i<n; i++) {   //input elements of array
        cin>>arr[i];
    }

    for(int j=0; j<n; j++) {
        s=s+arr[j];
        sum[j]=s;
    }
    

    for(int i=0; i<n; i++){
        cout<<sum[i]<<" ";
    }
    return 0;
}

