#include<iostream>
using namespace std;

int find_key(int arr[],int n, int key) {
    int s =0;
    int e= n-1;
    while (s<=e) {
        int mid= (s+e) /2;
        if (arr[mid]==key) {
            return mid;
        }

        else if(arr[s]<=arr[mid]){
            //2 Cases - element lies on the left or the right of the mid
            if(key>=arr[s] and key<=arr[mid]) {
                e=mid-1;

            }
            else {
                s=mid+1;
            }
        }

        else{
            if(key>=arr[mid] and key<=arr[e]){
                s=mid+1;
            }
            else {
                e=mid-1;
            }

        }
    }
    return -1;
}

int main() {
    int n;
    cin>>n;
    
    int arr[1000000];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<find_key(arr,n,key)<<endl;
    return 0; 
}