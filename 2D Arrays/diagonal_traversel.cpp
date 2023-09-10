#include<iostream>
using namespace std;

//time complexity: O(n) and soace complexity: O(1)

void printMatrixDiagonal(int mat[][100],int m, int n) {
    bool directionUp=true; //direction is initially from down to up
    
    int arr[m*n];
    int i=0;
    int row=0, col=0;

    while(row<m && col<n) {

        //if diagonal is going up
        if(directionUp) {
            while(row>0 && col<n-1) {
                arr[i++]=mat[row][col];
                row--; 
                col++;
            }

            arr[i++]=mat[row][col];
            if(col==n-1){
                row++;
            }

            else{
                col++;
            }
        }
        
        else{
            while(col>0 && row<m-1) {
                arr[i++]=mat[row][col];
                row++;
                col--;
            }

            arr[i++]=mat[row][col];
            if(row==m-1) {
                col++;
            }

            else{
                row++;
            }

        }

        directionUp= !directionUp;

    }
    
    for(int i=0; i<m*n; i++) {
        cout<<arr[i]<<' ';
    };

}

int main() {
    int m,n;
    cin>>m>>n;

    int mat[100][100];

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin>>mat[i][j];
        }
    }

    printMatrixDiagonal(mat,m,n);
    return 0;

}