#include<iostream>
using namespace std;

void printDiagonal(int mat[][10], int m, int n, int i, int j) {
    int diagonal_length= min(m-i, n-j);

    for(int k=0; k<diagonal_length; k++) {
        cout<<mat[i+k][j+k]<<" ";
    }
    
}

void traverse(int mat[][10],int m, int n) {
    for(int i=m-1; i>=0; i--) {
        //print the diagonal at the (i,0)th index
        printDiagonal(mat, m, n, i, 0);
    }

    for(int j=1; j<n; j++) {
        //print the diagonal starting at the (0,j)th index
        printDiagonal(mat, m, n, 0, j);
    }
}

int main() {
    int mat[10][10];

    int m=3;
    int n=3;

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin>>mat[i][j];
        }
    }

    traverse(mat,m,n);
    return 0;

}

