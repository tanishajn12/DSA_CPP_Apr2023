#include<iostream>
using namespace std;

int main() {
    int arr[]= {-2,1,-3,4,-1,2,1,-5,4} ;
    int n= sizeof(arr)/ sizeof(int);

    //Approach 2 time: 0(N^2)  space : 0(N)

    int csum[101]; //based on the constraints
    
    csum[0]=0;
    for(int i=1; i<=n; i++) {
        csum[i]=csum[i-1] + arr[i-1] ;
    }

   // for(int i=0; i<=n; i++) {
   //     cout<< csum[i]<< " ";
   // }

   // cout<<endl;

    int maxSum = INT16_MIN;
    //iterate over all the possible indices
    
    for(int i=0; i<n; i++) {
        //iterate over all possible ending indices
        for(int j=i; j<=n-1; j++) {
            //compute the sum of arr[ i... j]
            int sum=csum[j+1]- csum[i];
            if (sum>maxSum) {
                maxSum = sum;
            }
        }
    }
    cout<<maxSum<<endl;
    return 0;
}


