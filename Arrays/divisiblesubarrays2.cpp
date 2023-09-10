#include<iostream>
using namespace std;

//approach 1 -> time complexity : O(n) 

int main(){
    int t;
    cin>>t; //input no of test cases

    while(t>0) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int freq[1000]= {};
        freq[0]=1;

        int csum=0;
        for(int i=0; i<n; i++) {
            csum+=arr[i];
            freq[csum%n]++;
        }

        int count=0; //to track no of good subarrays

        for(int i=0; i<n; i++) {
            int x_i=freq[i];
            if(x_i>=2) {
                count+=((x_i)*(x_i-1))/2;
            }
        }
        cout<<count<<endl;
        t--;
    }
}