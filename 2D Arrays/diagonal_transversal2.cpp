#include<iostream>
using namespace std;


void traverse(int mat[][100],int m, int n) {
    int i=0;
    int j=0;

    bool flag=true;

    for(int k=0;k<n;j++) {
        //print the diagonal at the (i,0)th index
        printDiagonal(mat, m, n, 0,j);
    }

    for(int i=1; i<m; i++) {
        //print the diagonal starting at the (0,j)th index
        printDiagonal(mat, m, n, i,0);
    }
}

int main() {
    int mat[100][100];

    int m,n;
    cin>>m;
    cin>>n;


    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin>>mat[i][j];
        }
    }

    traverse(mat,m,n);
    return 0;
}

