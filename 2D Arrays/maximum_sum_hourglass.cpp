#include<iostream>
using namespace std;

int maxHourglassSum(int mat[][100], int m, int n) {

    if(m<3|| n<3) {
        cout<<"Not possible"<<endl;
    }
    int maxSum=INT8_MIN;

    for(int i=0; i<=m-3; i++) {
        for(int j=0; j<=n-3; j++) {
            
            int sum=mat[i][j]+mat[i][j+1]+mat[i][j+2]+ mat[i+1][j+1]+
            mat[i+2][j]+ mat[i+2][j+1]+mat[i+2][j+2];

            maxSum= max(maxSum,sum );
            
        }
    }

    return maxSum;
}

int main() {
    int m;
    cin>>m;
    int n;
    cin>>n;

    int mat[][100]={{3, 5, 6 , 1, 6, 1}, {1,7,5,1,1,6}, {2, 7,7,10,1,5}, 
    {8,4,2,7,4,2}, {2,10,8,7,6,4},{8,5,6,2,1,6}};


   int ans=maxHourglassSum(mat,m,n);
   cout<<ans<<endl;
}