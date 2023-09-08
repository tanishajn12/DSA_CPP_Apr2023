#include<iostream>
using namespace std;

int f(int n) {
    //base case
    if(n==0){
        return 0;
    }

    //recursive case
    int m=n+f(n-1);
    return m;
}

int main() {
    int n;
    cin>>n;

    cout<<f(n)<<endl;
    return 0;
}


