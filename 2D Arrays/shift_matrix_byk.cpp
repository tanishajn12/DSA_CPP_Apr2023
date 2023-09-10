#include<iostream>
using namespace std;

void shiftMatrix(int mat[][100],int n, int k)  {
    if (k > n) {
        cout << "Cannot shift" << endl;
    }

    else{
        int y = 0;
        while (y < n) {
            
            // Print elements from index k
            for (int x = k; x < n; x++){
                cout << mat[y][x] << " ";
            }
                
            // Print elements before index k
            for (int x = 0; x < k; x++){
                cout << mat[y][x] << " ";
            }

            y++;
            cout<<endl;
        }
    }
}

int main() {
    int n;
    cin>>n;

    int mat[100][100];

    for (int i=0; i<n; i++) {
        for(int j=0; j<n; j++ ) {
            cin>>mat[i][j];
        }
    }

    int k;
    cin>>k;

    shiftMatrix(mat,n,k);
    return  0;
}

