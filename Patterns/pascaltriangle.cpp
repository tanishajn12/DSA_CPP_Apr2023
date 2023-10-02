#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i=1; i<=n; i++) {

        for(int k=n-i; k>=1; k--) {
            cout<< "  ";
        }
        
        int a=1;
        for (int j=1; j<=i; j++) {
            cout<<a<<"   ";
            a=a*(i-j)/j; 
        }
        cout<<endl;
    }
}

