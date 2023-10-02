#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i=n; i>=0; i--) {
        for (int j=n; j>=i; j--){
            cout<<j<<' ';
        }
        
        for (int k=1; k<=2*i-1; k++) {
            cout<<" "<<' ';
        }

        for(int j=i; j<=n; j++) {
            if (j!=0) {
                cout<<j<<' ';
            }
        }
        cout<<endl;

    }
    for (int i=1; i<=n; i++) {
        for (int j=n; j>=i; j--){
            cout<<j<<' ';
        }
        
        for (int k=1; k<=2*i-1; k++) {
            cout<<" "<<' ';
        }

        for(int j=i; j<=n; j++) {
            cout<<j<<' ';
            
        }
        cout<<endl;
    } 
}






