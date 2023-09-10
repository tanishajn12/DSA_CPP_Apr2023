#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int arr[n];
        
        for(int i=0;i<n;i++){
            
            cin>>arr[i];
        }
        
        int i=n-2;
        int flag=0;
        
        for(i=n-2;i>=0;i--){
            
            if(arr[i]>=arr[i+1]){
                continue;
            }
            
            else {
                flag=1;
                break;
            }
        }
        
        sort(arr+i+1,arr+n);
        
        if(flag){
            
            for(int j=i+1;j<n;j++) {
                if(arr[j]>arr[i]){
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
        
        for(int p=0;p<n;p++){
            cout<<arr[p]<<" ";
        }
        
        cout<<endl;
    }
	return 0;                                                     
}

