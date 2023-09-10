#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    long long arr[50000]={1,2,3,2,4,2};
    int n=sizeof(arr)/sizeof(int);

    vector<int> freq={0};
    int count=1;

    for(int i=0; i<n; i++ ) {
        if(freq[arr[i]]1){
            count++;
            freq.insert(arr[i],count);
        }
        
        else{
            count=1;
            freq.insert(arr[i],count);
        }
    }

    int max=0;
    int num=freq[0];

    for(int i=0; i<freq.size();i++) {
        if(freq[i]>max){
            max=freq[i];
            num=i;
        }
    }

    for(int i=0; i<freq.size(); i++) {
        cout<<freq[i]<<" ";
    }

    return 0;



}