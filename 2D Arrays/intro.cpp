/* constraints : 0< m , n <=10  here
m : no of rows in 2D array and n: no of columns in 2D array  */

#include<iostream>
using namespace std;

int main() {
    int arr[10][10];

    int m;
    cout<<"Enter no of row : ";
    cin>>m;

    int n;
    cout<<"Enter the no of column : ";
    cin>>n;

    for(int i=0; i<m; i++) {
        //read values in the ith row 
        for(int j=0; j<n; j++) {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;


	for(int j=0; j<n; j++) {
		for(int i=0; i<m; i++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
    return 0;
}

