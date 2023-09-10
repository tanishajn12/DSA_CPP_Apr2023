#include<iostream>
using namespace std;

//time complexity -> O(mn)   Auxiliary Space-> O(mn)

void rectangle0X(int m,int n) {
    int sr=0;
    int sc=0;
    int er=m-1;
    int ec=n-1;

    int row=m;
    int col=n;


    char mat[m][n];
    char x='X';

    while(sr<m && sc<n) {

        //first row
        for(int i=sc; i<n; i++) {
            mat[sr][i]=x;
        }
        sr++;

        //last column
        for(int i=sr; i<m; i++) {
            mat[i][ec]=x;
        }
        ec--;

        //last row
        if(sr<m) {
            for(int i=ec; i>=sc; i--) {
                mat[er][i]=x;
            }
            er--;
        }

        //first column
        if(sc<n) {
            for(int i=er; i>=sr; i--) {
                mat[i][sc]=x;
            }
            sc++;
        }

        //Flip character for next iteration
        if (x == '0') {
            x = 'X';
        } 
        
        else {
            x = '0';
        }

    }
    for (int i = 0; i < row ; i++){
        for (int j = 0; j < col; j++)
            cout << mat[i][j]<<" ";
    
        cout <<"\n";
    }
    

}

int main() {
    int m;
    cin>>m;

    int n;
    cin>>n;

    rectangle0X(m,n);

   
    return 0;
}