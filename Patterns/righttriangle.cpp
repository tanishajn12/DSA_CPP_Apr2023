#include<iostream>
using namespace std;

int main() {

    int num;
	cout << "Enter the number : ";
	cin >> num;

    int i=1;

    while (i<=num) {
        //print i stars and n-i spaces
        int j=1;
        while (j<=i) {
            cout << "*";
            j=j+1;
        }
        cout << "\n" ;
        i=i+1;
    }
}



