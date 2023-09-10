#include<iostream>
using namespace std;

int main() {
    int n1,n2;
    cin>>n1;
    cin>>n2;

    int arr[n1];
    int brr[n2];

    for(int i=0; i<n1; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n2; i++) {
        cin>>brr[i];
    }
    
    int m= max(n1,n2);
    int ans[m];

    int i=n1-1;
    int j=n2-1;
    int k= m-1; 
    int carry=0;

    for(int i=n-1,j=m-1;i>=0,j>=0;i--,j--){
        // int sum= arr[i]+brr[j]+ carry;
        int sum= carry;
        if(i>=0) {
            sum+=arr[i];
        }

        if (j>=0) {
            sum+=brr[j];
        }

        int quotient=sum/10;
        int remainder= sum%10;

        ans[k]=remainder;
        carry=quotient;

        i--;
        j--;
        k--;
    }

    if(carry!=0) {
        cout<<carry;
    }

    for(int i=0; i<m; i++) {
        cout<<ans[i]<<", ";
    }
    cout<<"END";
    return 0;
}

