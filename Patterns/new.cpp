#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int b =1;

    for (int i=1; i<=n; i++) {
        for(int j=1; j<=n+1-i; j++){
            cout<<j<<' ';
        }

        for (int a=1; a<i; a++) {
            while (a<=2*b-1) {
                cout << "*" <<" ";
                a++; 
            }
            b++;
        }
        cout<<endl;
    } 
    return 0;   
}





