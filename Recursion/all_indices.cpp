#include<iostream>
using namespace std;

bool flag=false; //assume t is not present

void f(int* arr,int n, int t, int i ){
    //base case
    if(i==n) {
        if(flag==false) {
            //t is not present in the array
            cout<<-1<<endl;
            return;
        } else{
            return;
        }
    }

    //recursive case
    //search for the index of the all occ of the t in x[i..n-1]
    if(arr[i]==t){
        //you'hv found the one occ of the t at index i
        flag=true;
        cout<<i<<" ";
    }
    //search for the index of the remaining occ of the t in x[i+1...n-1]
    f(arr,n,t,i+1);
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int t;
    cin>>t;
    
    f(arr,n,t,0);
    return 0;
}

