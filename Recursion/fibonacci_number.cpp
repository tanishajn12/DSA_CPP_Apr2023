#include<iostream>
using namespace std;

int f(int n) {
    //base case
    // if(n==0) {
    //     //compute 0th fibbonacci number 
    //     return 0;
    // }
    
    // if(n==1) {
    //     //compute 1st fibbonacci number 
    //     return 1;
    // }

    if(n==0 || n==1) {
        return n;
    }

    //recursive case

    int A = f(n-1) ; //compute (n-1) fibbonacci number
    int B = f(n-2) ; //compute (n-2) fibbonacci number

    return A+B;
}

int main() {
    int n;
    cin>>n;
    cout<<f(n)<<endl;

    return 0;
}
