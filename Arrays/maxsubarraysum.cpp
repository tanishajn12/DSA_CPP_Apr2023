#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[]={1,2,6,8};
    int n= sizeof(arr)/sizeof(int);
    
    int maxSum= INT_MIN;  // to track the max subarray sum

    for(int i=0; i<=n; i++) {
        for(int j=i; j<=n-1; j++) {
            int sum=0;
            for(int k=i ; k<=j; k++) {
                cout<<arr[k]<<" ";
                sum+=arr[k];
            }
            if (sum>maxSum) {
                maxSum=sum;
                
            }
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<"Maximum Subarray Sum : "<<maxSum;
    return 0;
}



