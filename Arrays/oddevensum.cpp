#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int sumOdd=0;
    int sumEven=0;

    int i=1;
    while (n>0){
        if (i%2==0) {
            sumEven += n%10;
        }

        else {
            sumOdd += n%10;
        }
        i++;
        n=n/10;
    }
    cout<<sumOdd<<endl;
    cout<<sumEven<<endl;

    return 0;
}





