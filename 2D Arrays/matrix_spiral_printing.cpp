//constraints: 0< m,n <=10
#include<iostream>
using namespace std;

int main() {
    int mat[10][10]={{11,12,13,14}, {22,23,24,15}, {21,26,25,16}, {20,19,18,17}};
    int m=4;
    int n=4;

    int sr=0;  //start row
    int sc=0;  //start column
    int er=m-1;   //end row
    int ec=n-1;  //end column

    while(sr<=er and sc<=ec) {
        //1 print the starting row - iterate from sc to ec
        for(int j=sc; j<=ec; j++) {
            cout<<mat[sr][j]<<" ";
        }

        sr++;

        //2 print the ending column-  iterate from sr to er
        for(int i=sr; i<=er; i++) {
            cout<<mat[i][ec]<<" ";
        }

        ec--;

        //3 print the ending row - iterate from ec to sc
        if(sr<=er) {
            for(int j=ec; j>=sc; j--) {
                cout<<mat[er][j]<<" ";
            }

            er--;
        }

        

        //4 print the starting column - iterate from er to sr
        if(sc <= ec) {
			for(int i=er; i>=sr; i--) {
				cout << mat[i][sc] << " ";
			}

			sc++;
		}
    }
    return 0;
}


