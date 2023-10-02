#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number:" ;
    cin >> n;

    int num1=0;  //First fibonacci number is 0
    int num2=1;  //Second fibonacci number is 1

    int sum=0;
    int count=1;

    while (count <=n) {
        count++;  
        num1=num2;
        num2=sum;  
        sum=num1+num2;  
    }
    cout<< "The " <<n<< " fibonacci number is " << sum ;
}









