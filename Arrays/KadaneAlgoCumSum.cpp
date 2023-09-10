//contraints : n<=100
#include<iostream>
using namespace std;

int main() {
    int arr[]= {1,2,6,8} ;
    int n= sizeof(arr) /sizeof(int);

    //approach - time :O(n)  space : O(n)

    int x= arr[0] ; //based on contraints
    int maxSum=x;

    for (int i=1; i<n; i++) {
        x= max(arr[i], x+arr[i]);
        maxSum= max(maxSum, x);
    }

    cout<<"Maximum Subarray Sum is: "<<maxSum<<endl;
    return 0;
}



