#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i=n; i>=1; i--) {
        //print n-i spaces
        for(int j=1; j<=n-i; j++) {
            cout<<' ';
        }
        //print i stars
        for (int k=1; k<=i; k++) {
            cout<<'*'<<' ';
        }
        cout<<endl;
    }
    return 0;
}