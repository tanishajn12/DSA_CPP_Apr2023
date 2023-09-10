#include<iostream>
using namespace std;

bool matrixSearch(int mat[][3], int m, int n, int t) {
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(mat[i][j]==t) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int mat[][3]= { {50 , 80 , 20},{90, 10, 70}, {60, 30, 40}};

    int m=3;
    int n=3;

    int t;
    cin>>t;

    matrixSearch(mat, m,n,t)? cout<<t<<" Found! "<<endl:
    cout<<t<<" Not Found! "<<endl;

    return 0;

}

