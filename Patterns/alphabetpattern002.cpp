#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=1; i<=n; i++) {
        //print (n-i+1) characters starting with A in the creasing order
        char ch='A';
        for (int j=1; j<=n-i+1; j++) {
            cout <<ch<<' ';
            ch++;
        }
        //print (n-i+1) more characters with the character with which the 
        //increasing sequence ended in the decreasing order
        ch--;
        for( int j=1; j<=n-i+1; j++){
            cout<< ch<<' ';
            ch--;
        }
        cout<<endl;
    }
    return 0;
}








