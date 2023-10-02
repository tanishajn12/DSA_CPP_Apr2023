#include<iostream>
using namespace std;

bool checkprime(int a){
    for(int i=2; i<=a-1; i++) {
        if (a%i==0) {
            //a is not a prime number
            return false;
        }
    }
    //n is a prime number
    return true;
}

int main() {
    int a;
    cout<<"Enter a number :";
    cin>>a;

    if(checkprime(a)) {
        cout<<a <<" is Prime"<<endl;
    } else {
        cout<<a<<" is not Prime" <<endl;
    }
}


