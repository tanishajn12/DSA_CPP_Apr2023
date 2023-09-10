#include<iostream>
using namespace std;

int main() {
    int arr[] ={50,40,10,30,20};
    int n= sizeof(arr) / sizeof(int); 

    for(int i=1; i<=n-1; i++) {
        //in the ith pass invert the 1st element in the
        //unsorted part of array to its correct position in sorted part

        int key= arr[i];  //ith element is key in ith pass
        int j=i-1; 
        cout<<"key: "<<key<<endl;
        cout<<"j : "<<j<<endl;
        while (j>=0 && arr[j]>key) {    //j>=0 no negative indexing 
            arr[j+1]= arr[j];
            j--;
        }
        for(int i=0; i<n; i++) {
            cout<<arr[i]<< " ";
        }
        cout<<endl;

        arr[j+1] = key; 
        for(int i=0; i<n; i++) {
            cout<<arr[i]<< " ";
        }
        cout<<endl;
        cout<<"key: "<<key<<endl;
        cout<<"j : "<<j<<endl; 
        cout<<endl;
    }

    cout<<"Final ans "<<endl;
    
    for(int i=0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    return 0;
}
