#include<iostream>
using namespace std;

int main() {
    long n;
    cin>>n;

    long arr[n];
    long brr[n];//inverse of array

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

	bool flag=false;

    for(int i=0; i<n; i++) {
        int x= arr[i];
        brr[x]=i;
        if(arr[brr[x]]==i){
			flag = true;
        }
		
    }    
    
    if (flag= true) {
		cout<<"true";
	}
	else{ 
		cout<<"false";
	}
}