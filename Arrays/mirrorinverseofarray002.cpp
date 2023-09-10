#include<iostream>
using namespace std;

int main() {
    long n;
    cin>>n;

    long arr[n];
    long brr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    bool flag = false;
    for(int i=0; i<n; i++) {
        int x= arr[i];
        brr[x]=i;
    }    

    for (int i = 0; i < n; ++i) {
        if(arr[i] == brr[i]){
            flag = true;
        }
        
        else {
            flag = false;
            break;
        }
    }

    if (flag==true) {
        cout<<"true";
    }
    else{ 
        cout<<"false";
    }
}


