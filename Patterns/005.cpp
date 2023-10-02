#include<iostream>
using namespace std;

int main() {
    int n;
    cin>> n;
    int num=1;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (j<=i) {
                cout << i <<' ';
            }
            else {
                cout <<j<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}




