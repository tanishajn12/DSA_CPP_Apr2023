#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t; //input no of test cases

    while(t>0) {
        int n;
        cin>>n;
        int h[n];
        for(int i=0; i<n; i++){
            cin>>h[i];
        }
        
        int left[n];
        left[0]=h[0];
        for(int i=1; i<n; i++){
            left[i]=max(left[i-1],h[i]);
    
        }

        int right[n];
        right[n-1]=h[n-1];
        for(int i=n-2; i>=0; i--) {
            right[i]=max(right[i+1],h[i]);
        }

        int total=0;
        for(int i=0; i<n; i++) {
            int w=min(left[i],right[i])-h[i];
            total+=w;
        }

        cout<<total<<endl;
        t--;
    }
}
