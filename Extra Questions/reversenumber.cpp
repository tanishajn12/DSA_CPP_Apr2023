#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number :";
    cin>> num;

    int digit=0;
    int rev=0;   //to store the reverse of n

    while (num!=0) {
        digit= (num%10);
        rev= rev*10+ digit;
        num=num/10;
    }
    cout<< "Reversed Number is: "<<rev;
    return 0;
}



