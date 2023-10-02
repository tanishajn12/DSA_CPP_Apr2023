#include<iostream>
using namespace std;

int main() {
    int n;
    cin>> n;
    int num=1;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            while (j<=i){
                cout<<i;
                j++;
            }
            cout<<j;
        }
        cout<<endl;
    }
    return 0;

}