#include<iostream>
using namespace std;

int main() {
    int arr[]= {-2,1,-3,4,-1,2,1,-5,4} ;
    int n= sizeof(arr)/ sizeof(int); 
    //approch 2 - time: 0(N^2) 

    int csum[101]; //based on the constraints
    csum[0]=0;
    for(int i=1; i<=n; i++) {
        csum[i]=csum[i-1] + arr[i-1] ;
    }

    int maxSum=INT_MIN;
