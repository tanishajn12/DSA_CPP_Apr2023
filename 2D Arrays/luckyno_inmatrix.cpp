#include<iostream>
using namespace std;

int luckynoMatrix(int mat[][50],int row,int col) {
    
    for(int i=0; i<row; i++) {
        int minValue=INT16_MAX;
        int minIndex=0;

        for(int j=0; j<col; j++) {
            if(mat[i][j]<minValue){
                minValue=mat[i][j];
                minIndex=j;
            }
        }

        int maxValue=INT16_MIN;
        for(int k=0; k<row; k++) {
            if(mat[k][minIndex]>maxValue) {
                maxValue=mat[k][minIndex];
            }
        }

        if(maxValue=minValue) {
            return maxValue;
        }   
    }
    
}

int main() {
    int m,n;
    cin>>m>>n;

    int mat[50][50];

    for(int i=0;i<m; i++){
        for(int j=0; j<n; j++) {
            cin>>mat[i][j];
        }
    }

    cout<<luckynoMatrix(mat,m,n);

}