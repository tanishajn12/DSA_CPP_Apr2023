#include<iostream>
using namespace std;

int main() {
    int arr[]= {10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);

    //Approach 1 : time : O(n^2)

    int t;
    cout<<"Enter sum target :" ;
    cin>> t;

    int count=0;

    for(int i=0; i<=n-2; i++) {
        for(int j=i+1; j<=n-1 ; j++) {
            int sum=0;
            sum=sum+ arr[i]+arr[j];
            if (sum==t) {
                count++;
            }
        }
    }
    cout<<"The pairs with the target sum : "<<count;
    return 0;
}




