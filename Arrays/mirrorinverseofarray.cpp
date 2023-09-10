#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    int brr[n];
    int cnt=0;

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<=n-1; i++) {
        int x= arr[i];
        brr[x]=i;
        if(arr[i]==brr[i]){
            cnt++;
        }
    }    
    cnt==n? cout<<"true"<<endl :
        cout<<"false"<<endl;
    
}


