#include<iostream>
using namespace std;

//algorithm -> time complexity : 0(M*N)   Auxiliary Space : 0(1)

int m,n;
cin>>m>>n;

int mat[m][n];

void modifymatrix(int mat[m][n]) {
    //variables to check if there are any 1 in forse row and column
    bool row_flag=false;
    bool col_flag= false;

    //updating the first row and col if 1 is there
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(i==0 &&  mat[i][j]==1) {
                row_flag=true;
            }

            if(j==0 && mat[i][j]==1) {
                col_flag=true;
            }

            if(mat[i][j]==1) {
                mat[0][j]=1;
                mat[i][0]=1;
            }
        }
    }

    for(int i=1; i<m; i++) {
        for(int j=1; j<n; j++) {
            if (mat[0][j]==1 || mat[i][0]==1) {
                mat[i][j]=1;
            }
        }

        //modify the first row if there was any 1
        if(row_flag=true) {
            for(int i=0; i<n; i++) {
                mat[0][i]=1;
            }
        }

        //modify first column if there are any 1
        if (col_flag==true) {
            for(int i=0; i<m; i++) {
                mat[i][0]=1;
            }
        }
    }
}

void printMatrix(int mat[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <n; j++)
            cout << mat[i][j] << " ";
        cout << "\n";
    }
}


int main() {

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin>>mat[i][j];
        }
    }

    modifymatrix(mat);
    printMatrix(mat);

    return 0;
}