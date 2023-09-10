#include<iostream>
using namespace std;

void getsum(int n) {
    bool isOdd=(n%2==1) ? true : false;

    int sumOdd=0;
    int sumEven=0;

    while(n!=0) {
        if(isOdd) {
            sumOdd+=n%10;
        }

        else {
            sumEven+=n%10;
        }
        
        isOdd= !isOdd;

        n/=10;
    }
    cout<<sumOdd<<endl;
    cout<<sumEven<<endl;
}

int main() {
    int n;
    cin>>n;
    getsum(n) ;

    return 0;
}


