#include<iostream>
using namespace std;

int main() {
    int n;
    cin>> n;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-i; j++) {
            cout<< ' ';
        }
        int num=1;
        for (int k=1; k<=i; k++){
            cout<<num;
            num++;
        }
        cout<<endl;    
    }
    return 0;



}

