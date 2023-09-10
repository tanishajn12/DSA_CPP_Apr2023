//Find Max Subarray Sum using Kadane Algorithm
#include<iostream>
using namespace std;

//approach - time :O(n)  space : O(n)

int main() {
    int arr[]= {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n=sizeof(arr)/sizeof(int);

    int currSum=0;  //current sum
    int maxSum= INT16_MIN;  //maximum sum so far

    for(int i=0; i<n; i++ ) {
        currSum= currSum + arr[i];

        if (maxSum< currSum){
            maxSum= currSum;
        }

        if (currSum <0){
            currSum =0;
        }
    }
    cout<<"Maximum Contagious Sum is : "<<maxSum<<endl;
    return 0;
}

