#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int m= n-n/2;

    for (int i=1; i<=m; i++) {
        for (int j=1; j<=i; j++) {  //print i stars for i row
            cout <<'*'<<' ';
        }
        cout <<endl;
    }
    for (int i=1; i<=m-1; i++) {     //m-1 rows left
        for (int j=1; j<=m-i; j++) {
            cout <<'*' <<' ';

        }
        cout<<endl;
    }
    return 0;
}

