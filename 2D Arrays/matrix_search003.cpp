#include<iostream>
using namespace std;

search(int mat[][10],int m, int n,int t){
  //traverse through the matrix

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {

        //if the element is found
            if(mat[i][j]==t) {
                cout<<"Element found at ("<<i<<","<<j<<")\n";
                return 1;
            }
        }
    } 
    cout<<"Element not found";
    return 0;
}

int main() {
    int mat[10][10];

    int m,n;
    int t;

    cin>>m>>n;

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin>>mat[i][j];
        }
    }
    cin>>t;
    search(mat,m,n,t);
}
