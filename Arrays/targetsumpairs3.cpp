#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int t;
    cin>>t;
   
    for (int i=1; i<=n-1; i++) {   //insertion sort for printing output
        int key= arr[i];           // target sum pairs in ascending order
        int j= i-1;
        while(j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]= key;
    }

    for(int i=0; i<=n-2; i++) {
        for(int j=i+1;j<=n-1; j++ ) {
            int sum=0;
            sum=sum+arr[i]+arr[j];
            if(sum==t) {
                cout<<arr[i]<< " and "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}
