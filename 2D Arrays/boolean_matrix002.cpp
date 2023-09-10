#include<iostream>
using namespace std;

int main() {
    int m,n;
    cin>>m;
    cin>>n;

    int mat[1000][1000];

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin>>mat[i][j];
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n ;j++) {
            if (mat[i][j]==1) {
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
            cout<<mat[i][j];
        }
    }
}