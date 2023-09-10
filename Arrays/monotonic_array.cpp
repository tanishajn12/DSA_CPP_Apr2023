#include<bits/stdc++.h>
using namespace std;

bool IsMonotonic(vector<int>& arr) {
    int n= arr.size();
    bool inc=true;
    bool dec=true;

    for(int i=0; i<n-1; i++) {
        if(arr[i]>arr[i+1]) {
            inc=false;
        }
    }
    for(int i=0; i<n-1; i++) {
        if(arr[i]<arr[i+1]) {
            dec=false;
        }
    }

    if(inc){
        return true;
    }
    else if(dec){
        return true ;
    }
    else{
        return false;
    }
}

int main() {
    vector<int> arr={1,2,3,4};
    bool ans=IsMonotonic(arr);

    if(ans)
        cout<<"True";
    
    else{
        cout<<"False";
    }

    return 0;
}



