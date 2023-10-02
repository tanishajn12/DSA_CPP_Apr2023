#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for (int i=1; i<=n; i++) {
        //print n-i spaces
        for (int j=1; j<=n-i; j++) {
            cout<<' ';
        }
        //print i stars
        for (int k=1; k<=i; k++) {
            cout<<'*';

        }
        cout<<endl;
    }
    return 0;
}

