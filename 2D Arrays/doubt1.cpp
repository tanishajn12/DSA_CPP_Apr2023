#include<iostream>
using namespace std;

void printDiagonal(int mat[][10], int m, int n, int i, int j) {
    while(i>=0) {
        cout<<mat[i][j]<<' ';
        i--;
        j++;
    }
    
}

void traverse(int mat[][10],int m, int n) {
    for(int i=0; i<=m-1; i++) {
        //print the diagonal at the (i,0)th index
        printDiagonal(mat, m, n, i, 0);
    }

    for(int j=1; j<n; j++) {
        //print the diagonal starting at the (0,j)th index
        printDiagonal(mat, m, n, 0, j);
    }
}

int main() {

    int m=3;
    int n=4;

    int mat[10][10] = {{11, 12, 13, 14},
					   {15, 16, 17, 18},
					   {19, 20, 21, 22}};

    traverse(mat,m,n);
    return 0;

}

