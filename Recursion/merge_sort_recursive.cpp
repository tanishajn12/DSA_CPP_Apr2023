//constraints  : n<=100
#include<iostream>
using namespace std;

void merge(int* arr,int s, int m, int e) {
    int i=s; //pointer at the starting of first subarray
    int j=m+1; //pointer at the starting of second subarray
    int k=s; //pointer of merged array temp

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

    while(j<=e) {
        temp[k]=arr[j];
        j++;
        k++;
    }

    for(int l=s; l<=e; l++ ){
        arr[l]=temp[l];
    }

}

void mergeSort(int* arr,int s,int e) {

    //base case
    if(s>=e) {
        return;
    }

    //recursive case
    //1. divide the given array into sub arrays arounf two mid point
    int m= s+(e-s)/2; //prevent integer overflow

    //2. recursively sort two sub arrays -> ask your friend
    mergeSort(arr,s,m);
    mergeSort(arr,m+1,e);

    //3. merge the two sorted sub arrays such that the merged array is sorted
    merge(arr,s,m,e);
}

int main() {
    int arr[]={50,40,30,20,10};
    int n = sizeof(arr)/sizeof(int);

    mergeSort(arr,0,n-1);

    for(int i=0; i<n;i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;

    return 0;

}

