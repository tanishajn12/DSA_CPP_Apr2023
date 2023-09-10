#include<iostream>
using namespace std;

int main() {

    int arr[100];
    int n;    //numbers in array
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;   //target number to be found
    int i;

    for(i=0; i<n; i++) {
        if(arr[i]==t) {
            cout<<i<<endl;
            break;
        }
    }

    if (i==n) {
        //t is not found
        cout<<-1<<endl;
    }

    return 0;
}


