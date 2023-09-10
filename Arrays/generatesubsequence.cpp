#include<iostream>
using namespace std;

int main() {
    int arr[]={10,20,30};
    int n= sizeof(arr)/sizeof(int);

    for(int num=0; num<(1<<n); num++){  //pow(2,n)
        for(int k=0; k<n; k++ ) {
            if ((num>>k & 1)){
                //indicate kth bit is set
                cout<<arr[k]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}


