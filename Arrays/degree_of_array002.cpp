#include<bits/stdc++.h>
using namespace std;

void countFreq(int arr[],int n) {
    int arr2[n];
    for(int i=0; i<n; i++) {
        arr2[i]=arr[i];
    }

    sort(arr,arr+n);
    int maxcount=INT16_MIN;
    int num=arr[0];

    for (int i = 0; i < n; i++){
        int count = 1;

        // Move the index ahead whenever
        // you encounter duplicates
        while (i < n - 1 && arr[i] == arr[i + 1]){
            i++;
            count++;
        }

        if(count>maxcount) {
            maxcount=count;
            num=arr[i];
        }
    }

    cout<<maxcount<<" "<<num<<endl;

    int start_idx=0;
    int end_idx=0;

    for(int i=0; i<n; i++) {
        if(arr2[i]==num) {
            start_idx=i;
            break;
        }
    }

    for(int j=n-1;j>=0; j--) {
        if(arr2[j]==num ){
            end_idx=j;
            break;
        }
    }
    cout<<start_idx<<" "<<end_idx<<endl;
    cout<<((end_idx-start_idx)+1)<<endl;
}

int main(){
    int arr[]={1,2,2,3,1} ;
    int n=sizeof(arr)/sizeof(int);
    countFreq(arr,n);
    return 0;
}