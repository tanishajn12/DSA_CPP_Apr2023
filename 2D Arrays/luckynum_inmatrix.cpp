#include <bits/stdc++.h>
using namespace std;

int main(){
	int m,n;  // m:rows  n:columns
	cin>>m>>n;

	int arr[m][n]; //defining the array

	for (int i = 0; i < m; ++i){
		for (int j = 0; j < n; ++j){	
			cin>>arr[i][j];
		}
	}

	for (int i = 0; i < m; ++i){
        int minVal = INT_MAX;  //minimum value while iterating in a row
        int col = -1; //column number where the lowest value is obtained in that row
        
        //check for the lowest value in the row
		for (int j = 0; j < n; ++j){
            if (minVal > arr[i][j]) {
                minVal = arr[i][j];
                col = j;
			}
		}

		int k;
        //check if the value is largest in the column j or not
        //if a greater value is obtained break
		for (k = 0; k < m; k++) {  
			if (arr[k][col] > minVal) {
				break;
			}
		}
        
        //if the value of k= number of rows i.e it is the largest value of that column
        //hence cout that value
		if (k == m) {
			cout<<arr[i][col];
			break;
		}
	}
	return 0;
}

