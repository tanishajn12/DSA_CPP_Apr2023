#include<iostream>
using namespace std;

void f(int n) {
    //base case
    if (n==0) {
        return;
    }

    //recursive case
    cout<<n << " ";

    //ask your friend to print numbers from n-1 to 1 in decreasing order
    f(n-1);
}

int main(){
    int n;
    cin>>n;

    f(n);

    return 0;

}
