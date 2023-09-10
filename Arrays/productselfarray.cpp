#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    //Approach :  Time Complexity O(n^2)
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int answer[100];
    for(int i=0; i<n; i++) {
        int l=1;
        for(int j=i-1; j>=0; j--) {
            l*=arr[j];
        }

        int r=1;
        for(int j=i+1; j<n; j++) {
            r*=arr[j];
        }

        answer[i] = l*r;
    }

    for(int i=0; i<n; i++) {
        cout<<answer[i]<<' ';
    }
    return 0;

}



