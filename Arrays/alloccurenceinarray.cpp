#include<iostream>
using namespace std;

int main() {
    int arr[100];

    int n;
    cout<<"Enter the value of n :" ;
    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>arr[i];

    }

    int t;
    cout<<"Enter the target :";
    cin>>t;

    bool flag=false; //assume target is not present in the array

    for (int i=0; i<n; i++ ) {
        if(arr[i] ==t) {
            //target found at index i
            cout<<i<<endl;
            flag=true;
        }
    }

    if(flag==false) {
        //target not found
        cout<<-1<<endl;

    }
    return 0;
}
