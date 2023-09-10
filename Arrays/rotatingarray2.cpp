#include<iostream>
using namespace std;

int main() {
    int arr[]= {10,20,30,40,50,60,70};
    int n= sizeof (arr) / sizeof(int);
    
    int a;
    cout<<"Enter number of times to rotate array:  "; //rotating array a times
    cin>>a;

    for(int i=1; i<=a; i++) {
        int temp= arr[n-1];
        //shift all the values from 0th index to n-2th index one step to right
        
        for (int i=n-1; i>=1; i--) {
            arr[i] = arr[i-1] ;
        }
        
        arr[0]= temp;
    }

    for (int j=0; j<n; j++)  {  //printing final array
        cout<<arr[j] <<" ";
    }

    cout<<endl;
    return 0;
}


