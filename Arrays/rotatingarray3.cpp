#include<iostream>
using namespace std;

int main() {

    int arr[]= {10,20,30,40,50,60,70};
    int n= sizeof (arr) / sizeof(int);

    int k;
    cout<<"Enter no of times to rotate array: ";
    cin>>k;

    int b=k-1;

    int i=0;
    int j=n-1;

    //reverse whole array
    while (i<j){
        swap (arr[i], arr[j]);
        i++;
        j--;
    }

    //reverse first a values form 0 to k-1
    for (int k=0; k<=b;k++) {
        swap (arr[k], arr[b]);
        k++;
        b--;
    }

    //reverse last n-k values from ath place to n-1th place
    for (k; k<=j; k++) {
        swap(arr[k], arr[n-1]);
        k++;
        j--;
    }

    for (int i=0; i<n; i++)  {
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    return 0;

}
