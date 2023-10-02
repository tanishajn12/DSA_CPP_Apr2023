#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i=n;
    while (i<=n) {
        //print i stars
        int j=1;
        while (j<=i) {
            cout <<"*";
            j++;
        }
        i--;
        cout<<endl;
    }
    return 0;
}