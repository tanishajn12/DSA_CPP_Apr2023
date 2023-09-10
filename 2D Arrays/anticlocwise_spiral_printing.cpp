//constraints: 0< m,n <=10
#include<iostream>
using namespace std;

int main() {
    int mat[10][10];
    int m,n;
    cin>>m>>n;

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin>>mat[i][j];
        }
    }

    int sr=0;  //start row
    int sc=0;  //start column
    int er=m-1;   //end row
    int ec=n-1;  //end column

    while(sr<=er && sc<=ec) {
        
        //1 print the starting column - iterate from sr to er
        for(int i=sr; i<=er; i++) {
            cout<<mat[i][sc]<<", ";
        }

        sc++;

        //2 print the ending row-  iterate from sc to ec
        for(int i=sc; i<=ec; i++) {
            cout<<mat[er][i]<<", ";
        }

        er--;

        //3 print the ending column - iterate from er to sr
        if(sc<=ec) {
            for(int i=er; i>=sr; i--) {
                cout<<mat[i][ec]<<", ";
            }

            ec--;
        }

        //4 print the starting row - iterate from ec to sc
        if(sr<=er) {
			for(int i=ec; i>=sc; i--) {
				cout << mat[sr][i] << ", ";
			}

			sr++;
		}
    }
    cout<<"END";
    return 0;
}


