#include <iostream>
using namespace std;

bool checkToepliz(int mat[10][10],int m, int n)
{
	for (int i = 0; i < m-1; i++){
		for (int j = 0; j < n-1; j++){

			// return false if any diagonal elements have different values
			if (mat[i][j] != mat[i + 1][j + 1]){
				return false;
            }
        }
    }
	return true;
}

int main(){
    int mat[10][10];

    int m,n;
    cin>>m>>n;

    for(int i=0; i<m;i++) {
        for(int j=0; j<n; j++) {
            cin>>mat[i][j];
        }
    }
	checkToepliz(mat,m,n)? cout << "true"<<endl:
    cout << "false"<<endl;

	return 0;
}
