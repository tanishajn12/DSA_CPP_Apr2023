#include<iostream>
using namespace std;

int main() {
    int row;
    cout<<"Enter no of rows:";
    cin>> row;

    int col;
    cout << "Enter no of columns: ";
    cin>> col;

    for (int i=1; i<=row ; i++) {
        for (int j=1; j<=col; j++){
            if (i==1 || i==row || j==1 || j==col) {
                cout << "*";
            }
            else {
        
                cout << " ";
            }
        }
        cout << "\n";
    }

}

