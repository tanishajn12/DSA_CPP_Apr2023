#include<iostream>
using namespace std;

int main() {
    int m,n;
    cin>>m;
    cin>>n;

    int mat[m][n];

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin>>mat[i][j];
        }
    }

    int temp[m][n];  //making a copy of matrix
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            temp[i][j]=mat[i][j];
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n ;j++) {
            if (temp[i][j]==1) {
                for(int k=0; k<m; k++) {
                    mat[k][j]=1;
                }

                for(int k=0; k<n; k++) {
                    mat[i][k]=1;
                }

            }
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout<<mat[i][j]<<' ';
        }
        cout<<'\n';
    }
}

