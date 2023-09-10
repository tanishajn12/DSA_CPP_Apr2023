#include<iostream>
using namespace std;

//approach 1 -> time complexity : O(n^2)  space:O(n) due to csum array

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

        int csum[100000];
        csum[0]=0;

        for(int i=1; i<=n; i++) {
            csum[i]=csum[i-1]+arr[i-1];
        }

        int count=0;

        for(int i=0; i<n; i++) {
            for(int j=i; j<=n-1; j++) {
                int sum= csum[j+1]-csum[i];
                if(sum%n==0) {
                    //subarray that starts at ith index and
                    //ends at jth index is a good subarray
                    count++;
                }
            }
        }
        cout<<count<<endl;
        t--;
    }
}