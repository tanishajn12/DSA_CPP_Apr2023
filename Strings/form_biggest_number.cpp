#include<iostream>
#include<algorithm>
using namespace std;

bool myComparator(int a, int b) {
    //this function should return true when swap is not required

    string str_a= to_string(a);
    string str_b= to_string(b);

    // if(str_a<str_b){
    //     //you dont need a swap
    //     return true;
    // }

    // else{
    //     return false;
    // }

    if(str_a > str_b){
        //you dont need a swap
        return true;
    }

    else{
        return false;
    }
}


int main() {

    int t;
    cin>>t;

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    //sort(arr,arr+n);  ascending order
    //reverse(arr, arr+n);  descending order

   // sore(arr, arr+n, greater<int>());

   sort(arr, arr+n, myComparator);

    //lexographically sort
    
    for(int i=0; i<n; i++) {
        cout<<arr[i];
    }

    return 0;
}

