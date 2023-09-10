#include<iostream>
using namespace std;

int main() {
    int t;  //input number of test cases
    cin>>t;

    while(t--) {

        int n;
        cin>>n;  //input the size of array

        int arr[n];

        for(int i=0; i<n; i++) 
        {
            cin>>arr[i]; //input elements of array
        }

        int sum=0;

        for(int i=0; i<n; i++)
        {
            sum+=arr[i];
        }
        cout<<sum<<endl;
    }

    return 0;

}


