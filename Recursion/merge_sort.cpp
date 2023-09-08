#include<iostream>
using namespace std;

void merge(int* arr, int s, int m, int e) {
    int i=s;
    int j=m+1;
    int k=s;

    int temp[100];

    while(i<=m and j<=e) {
        if(arr[i]<arr[j]) {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }

    while(i<=m) {
        temp[k]=arr[i];
        i++;
        k++;
    }
}

void mergeSort(int* arr, int n) {
    //base case


    //recursive case
    //1. divide the given array into two sub arrays around the midPoint
    int m=s+(e-s)/2;


    //2. recursively sort the two sub arrays -> ask your frnd
    mergeSort(arr,s,m);
    mergeSort(arr,m+1,e);

    //3. merge the two sorted sub arrays such that merged array is sorted
    merge(arr,s,m,e);

}

int main() {
    int arr[]={50,40,30,20,10};
    int n=sizeof(arr)/sizeof(int);

    mergeSort(arr,n);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}