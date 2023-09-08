#include<iostream>
using namespace std;

int convert0to5(int n) {
    //base case
    if(n==0) {
        return 0 ;

    }

    //recursive case
    int digit=n%10;
    if(digit==0) {
        digit=5;
    }
    return convert0to5(n/10) * 10+digit;
}

int replace(int n){
    if(n==0) {
        return 5;
    }
    else{
        return convert0to5(n);
    }
}

int main() {
    int n;
    cin>>n;

    cout<<replace(n)<<endl;

    return 0;
}

