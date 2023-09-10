#include<iostream>
using namespace std;

int main() {

    int t;
    cin>>t;  //input no of test cases

    while(t--) {
        int m,n;
        cin>>m>>n;  //input the sixe of array 1 & 2

        int arr[m];
        int brr[n];

        for(int i=0; i<m; i++) {
            cin>>arr[i];  //arrays are already sorted
        }

        for(int i=0; i<n; i++) {
            cin>>brr[i];
        }

        int i=0,j=0; //store the index values of both the arrays

        int sum1=0, sum2=0;
        //store the individual sum of both the arrays until there is a common element in both arrays

        int finalSum=0; //store the final sum

        while(i<m && j<n) {
            if (arr[i] < brr[j]) {
                sum1+= arr[i];
                i++;
            }

            else if(brr[j]<arr[i]) {
                sum2+= brr[j] ;
                j++;
            }

            else {
                finalSum+=max(sum1,sum2)+ arr[i];

                sum1=0; 
                sum2=0;

                i++;  //update i and j to move to next element of each array
                j++;
            }
        }

        if (j == n){
            for (int k = i; k < m; ++k){
                sum1 += arr[k];
            }

            if (sum1 > sum2) {
                finalSum += sum1;
            }

            else {
                finalSum += sum2;
            }
        }

        if (i == m){
            for (int k = j; k < n; ++k)
            {
                sum2 += brr[k];
            }

            if (sum2 > sum1) {
                finalSum += sum2;
            }

            else {
                finalSum += sum1;
            }
        }
        cout<< finalSum << endl;
    }
}