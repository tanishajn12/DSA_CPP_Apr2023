#include<iostream>
using namespace std;

int main() {
    int arr[]={7,4,11,8,5};
    int n=sizeof(arr)/sizeof(int);
   
    for (int i=1; i<=n-1; i++) {
        //in the ith pass we have to insert the ith element in
        //unsorted part of array to its correct position in sorted part

        int key= arr[i];
        int j= i-1;
        while(j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]= key;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    return 0;
}


