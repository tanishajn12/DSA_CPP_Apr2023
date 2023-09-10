#include<iostream>
using namespace std;

int main() {
    //approach time: O(n)

    int arr[]= {1,6,5,2,4,3};
    int n= sizeof(arr)/sizeof(int);

    int freq[100]= {} ; //0 initialize
    freq[0]=1;

    int csum=0;

    for(int i=0; i<n; i++) {
        csum+=arr[i];
        freq[csum%n]++;       
    }

    int count=0; // tp track the number of good subarrays

    for(int i=0; i<n; i++) {
        int x_i=freq[i];
        if (x_i>=2) {
            //it will contribute to the number of good subarrays
            count+=((x_i)*(x_i-1))/2;
        }
    }
    cout<<count<<endl;
}


