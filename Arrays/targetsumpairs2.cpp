#include<iostream>
using namespace std;

int main() {
    int arr[]= {10,20,30,40,50,60};
    int n = sizeof(arr) / sizeof(int);

    int t=60;
    int count=0; //to track the number of pairs that sum to t

    //Approach -2  Two Pointer : Time : O(n)

    for(int i=0, j=n-1; i<j;) {
        int sum= arr[i] +arr[j];
        if (sum==t) {
            count++;
            i++;
            j--;

        }
        else if (sum>t) {
            j--;
        }
        else {
            i++;
        }
    }

    cout<< count<<endl;
}

