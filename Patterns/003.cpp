#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i=1;
    while (i<=n) {
        //print i numbers
        int j=1;
        while (j<=i) {
            cout<<j;
            j++;
        }

        //print n-i spaces
        int k=1;
        while (k<=n-i) {
            cout<<'*';
            k++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}


