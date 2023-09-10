#include<iostream>
using namespace std;

int main() {
    int arr[]={2,0,4,1,3};
    int n= sizeof(arr)/sizeof(int);
    
    int brr[100];  //based on contraints

    for(int i=0; i<=n-1; i++) {
        int x= arr[i];
        brr[x]= i;   //brr[arr[i]]=i
    }

    for(int j=0; j<n; j++) {
        cout<<brr[j] <<" ";
    }
    cout<<endl;
    return 0;
}



