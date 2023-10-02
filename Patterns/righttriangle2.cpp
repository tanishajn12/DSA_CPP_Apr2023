#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number:";
    cin>> num;

    int i=1;
    while (i<=num) {
        // print num-i spaces
        int j=1;

        while (j<=num-i) {
            cout << " " ;
            j=j+1;
        }
        //print i stars
        j=1;
        while (j<=i) {
            cout << "*";
            j=j+1;
        }
        i=i+1;
        cout << "\n";  
    }
}

