#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)  {
        cin>>arr[i];
    }

    int t;
    cin>>t;

    int s=0;  //start of search space
    int e=n-1;   //end of search space


    while (s<=e) {
        int m= (s+e)/2;
        if (arr[m]==t) {   // found the target t at index m
            cout<<m<<endl;
            break;
        }

        else{
            if(arr[m]>t){
            //if value at midpoint is greater than target
            //reduce the search space from [s,e] to [s,m-1]
            e=m-1;
            }
            
            else {
                //else value at midpoint is smaller than target
                //reduce the search space from [s,e] to [m+1,e]
                s=m+1;
            }

        }
    }
    if (s>e) {
        cout<< -1 <<endl;
    }
    return 0;
}

