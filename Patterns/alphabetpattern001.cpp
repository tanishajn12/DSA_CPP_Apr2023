#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i=1; i<=n; i++) {
        //print(n-i+1) characters starting with A in increasing order
        char ch ='A';
        for (int j=1; j<=n-i+1; j++) {
            cout<< ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}



