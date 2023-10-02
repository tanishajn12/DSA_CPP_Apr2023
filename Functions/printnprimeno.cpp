#include<iostream>
using namespace std;

void printprime(int n){
    int count=1;  //to track no of prime no
    int num=2; //variable for printing n prime numbers
    while ( count<=n) {
        
        int div=2;
        while (div<num) {
            if (num%div==0) {
                num++;
            }
            else {
                div++;
            }
        }
        cout<<num<<' ';
        num=num+1;
        count++;  
    }  
}

int main() {
    int n;
    cout<<"Enter a number :";
    cin>>n;

    printprime(n);  //function call
}



