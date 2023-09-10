#include<iostream>
using namespace std;

void reverseMatrix(int mat[][100], int m) {
    //reverse each row of matrix
    for(int row=0; row<m; row++) {
        int start_col=0;
        int end_col=m-1;
        
        while(start_col < end_col){
            swap(mat[row][start_col], mat[row][end_col]);
            start_col++;
            end_col--;
        }    
    }
}

void transposeMatrix(int mat[][100], int m){
    for(int i=0; i<m; i++) {
        for(int j=0; j<m; j++) {
            if(i<j){
                swap(mat[i][j],mat[j][i]);
            }

        }
    }
}

int main(){
    int m;
    cin>>m;

    int mat[100][100];

    for(int i=0; i<m; i++) {
        for(int j=0; j<m; j++) {
            cin>>mat[i][j];
        }
    }

    reverseMatrix(mat, m);
    transposeMatrix(mat,m);

    //printing matrix
    for(int i=0; i<m; i++) {
        for(int j=0; j<m; j++) {
            cout<<mat[i][j]<<' ';
        }
        cout<<endl;
    }

    return 0;
}

