#include<iostream>
#include<algorithm>
using namespace std;

bool myComparator(int a, int b) {

    string str_a= to_string(a);
    string str_b= to_string(b);

    string x=str_a+str_b;
    string y= str_b + str_a;

    if(x>y){
        //you don't need a swap
        return true;
    }

    else{
        //you need a swap
        return false;
    }

    //return x>y;
}


int main() {
    int t;
    cin>>t;

    while (t--){ 

        int n;
        cin>>n;

        int arr[n];

        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        
        sort(arr, arr+n, myComparator);
        
        for(int i=0; i<n; i++) {
            cout<<arr[i];
        }
    }


    return 0;
}

