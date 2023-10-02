#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i=1; i<=n; i++) {
        //print n-i spaces
        for (int j=1; j<=n-i; j++) {
            cout<< " ";
        }
        
        if (i==1 || i==n ) {
            //stars for 1st and nth row
            for (int k=1; k<=n; k++) {
                cout << "*";
            }
        }

        else {
            //stars for middle rows
            for (int j=1; j<=n; j++) {
                if (j==1 || j==n) {
                  cout << "*";   //star for middle rows 
                }
                else {
                    cout<< " ";  //hollow spaces
                }
            }
        }
        cout<<endl;
    }
    return 0;
}



