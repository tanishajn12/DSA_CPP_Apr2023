#include<iostream>
using namespace std;

int main() {
    int arr[]={1,4,2,7,6,3,5};
    int n=sizeof(arr)/sizeof(int);

    int k=4;

    int i=0; //to store the start of window
    int j=0; //to store the end of window

    int w_sum=0; //to store the window sum
    int max_sum;  //track the maximum sum 

    //calculate the sum of first window sum
    while(j<k) {
        w_sum+=arr[j];
        j++;
    }

    max_sum=w_sum;
    //compute the sum for remaining windows

    while(j<n){
        //1. slide the window
        w_sum-=arr[i];
        i++;
        w_sum+=arr[j];

        //2. compare with maxsum
        max_sum=max(max_sum,w_sum);

        j++;
    }

    cout<<max_sum<<endl;
    return 0;
}