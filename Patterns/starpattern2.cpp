#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int m=n-n/2;

    for (int i=1; i<=m; i++) {
        //m-i spaces
        for (int j=1; j<=m-i; j++) {
            cout<<' '<<'\t';
        }
        //2i-1 stars
        for (int j=1; j<=2*i-1; j++) {
            cout<< '*'<<'\t';
        }
        cout<<endl;
    }
    for (int i=1;i<=m-1; i++ ) {
        for (int k=1; k<=i; k++) {
            cout<<' '<<'\t';
        }
        for (int k=1; k<=(2*(m-i)-1); k++) {
            cout<<'*'<<'\t';
        }
        cout<<endl;
    }
    return 0;
}


