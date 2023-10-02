#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int m= n/2;

    //print 1st part of pattern

    for (int i=1; i<=n; i++) {
        cout << '*'<<'\t';
    }
    cout<<endl;

    //print 2nd part of pattern
    for (int i=1; i<=m; i++) {
        //print 'm-i+1' stars
        for (int j=1; j<=m-i+1; j++) {
            cout << '*' <<'\t';
        }

        //print 2i-1 spaces
        for (int j=1; j<=2*i-1; j++) {
            cout<<' '<<'\t';
        }
        //print 'm-i+1' stars
        for (int j=1; j<=m-i+1; j++) {
            cout << '*' <<'\t';
        }
        cout <<endl;
    }
    //print 3rd part of pattern

    for (int i=1; i<=m-1; i++) {

        //print i+1 stars
        for (int j=1; j<=i+1; j++) {
            cout << '*' <<'\t';
        }

        //print 2(m-i)-1 spaces
        for (int j=1; j<=2*(m-i)-1; j++){
            cout<<' '<<'\t';
        }

        //print i+1 stars
        for (int j=1; j<=i+1; j++ ) {
            cout <<'*'<<'\t';

        }
        cout<<endl;
    
    }
    //print 4th part of the pattern

	for(int i=1; i<=n; i++) {
		cout << "*"<<'\t';
	}
	cout << endl;
	return 0;

}

