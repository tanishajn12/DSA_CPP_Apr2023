#include<iostream>
using namespace std;

int main() {
    int m,n;

    cout<<"Enter number of rows : ";
    cin>>m;

    cout<<"Enter number of columns : ";
    cin>>n;

    int arr[m][n];

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout<<arr[i][j]<<' ';
            
        }
        cout<<endl;
    }

    for(int j=0; j<n; j++) {

        if (j%2==0) {  //even column
            for(int i=0; i<m; i++) {
                cout<<arr[i][j]<<' ';
            }
        }

        else {
            for(int i=n-1; i>=0; i--) {
                cout<<arr[i][j]<<' ';
            }
        }
    }
    return 0;
}



