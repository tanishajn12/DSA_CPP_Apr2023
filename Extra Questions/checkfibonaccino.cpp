#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number:";
    cin>> n;

    if (n==0 || n==1) {
        cout<< "Its a Fibonacci Number "<<endl;
    }
    else {
        int a=0; //to store 0th fibonacci no
        int b=1;  //to store 1st fibonacci no

        while (true) {
            //generate next fibonacci no
            int c= a+b;

            if (c==n) {
                cout<< "Its a Fibonacci Number "<<endl;
                break;
            }
            if (c>n) {
                cout<<"Its not a Fibonacci Number"<<endl;
                break;
            }
            a=b;
            b=c;
        }
    }
    return 0;
}



