#include<iostream>
using namespace std;

int main() {
    long long arr[1000005], freq[1000005];
    int t;
    cin>>t; //input no of test cases

    while (t>0) {
        int n;
        cin>>n; //input no of element in array

        freq[0]=1;
        //read the element of array

        int sum=0;

        for(int i=0; i<n; i++) {
            cin>>arr[i];
            sum=sum+arr[i];    //cumulative sum
            sum=sum%n ;       //cumulative sum % n
            sum=(sum+n)%n;
            freq[sum]++;     //increment the value of the sum bucket
            
        }
        long long ans=0;
        for(int i=0; i<n; i++) {
            int m= freq[i];
            ans+= m*(m-1);
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}

