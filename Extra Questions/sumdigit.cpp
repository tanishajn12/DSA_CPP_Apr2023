#include<iostream>
using namespace std;

int main() {
    int num;
    cout<< "Enter a number:";
    cin>> num;

    int digit=0;
    int sum=0;

    while (num!=0) {
        digit= num%10;
        sum=sum+digit ;
        num=num /10; 
    }
    cout<< "Sum of digits :" << sum;
    return 0;
}



