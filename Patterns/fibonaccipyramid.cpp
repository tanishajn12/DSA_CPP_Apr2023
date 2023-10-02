#include<iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter a number:";
    cin>>n;

    int a=0;
    int b=1;
    int sum=0 ;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout << sum<< ' ';
            a=b;
            b=sum;
            sum=a+b;
        }
        cout <<endl;
    }
    return 0;
}


