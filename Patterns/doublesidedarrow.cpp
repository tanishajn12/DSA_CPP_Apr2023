#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;  //n should be odd number only
    int m=n/2;

    for (int i=0; i<=m; i++) { 
        for (int j=1; j<=(n-2*i)-1; j++) {    //print spaces n-2*i
            cout<<"  ";
        }

        for (int j=i+1; j>=1; j--) {   //printing numbers from (i+1) to 1 in decreasing order
            cout<<j<<' ';
        }

        for (int j=1; j<=2*i-1; j++ ){  //print 2*i-1 spaces
            cout<< "  ";
            
        }

        for(int j=1;j<=i+1; j++ ) { //print numbers from 1 to i+1 in increasing order
            if (i!=0) {
                cout<<j<<' ';
            }
            
        }
        cout<<endl;
  
    }
    //printing second half of pattern
    for(int i=m-1; i>=0; i--) {
        for (int j=1; j<=(n-2*i)-1; j++) {    //print spaces n-2*i
            cout<<"  ";
        }

        for (int j=i+1; j>=1; j--) {   //printing numbers from (i+1) to 1 in decreasing order
            cout<<j<<' ';
        }

        for (int j=1; j<=2*i-1; j++ ){  //print 2*i-1 spaces
            cout<< "  ";
            
        }

        for(int j=1;j<=i+1; j++ ) { //print numbers from 1 to i+1 in increasing order
            if (i!=0) {
                cout<<j<<' ';
            }  
        }
        cout<<endl;

    }
    return 0;

}

