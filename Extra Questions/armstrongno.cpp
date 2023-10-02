#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin>>n;

    int sum=0;
    int digit=0;

    int num=n;  //number assigned a new variable num 
    int number=n; 
    int c=0;   //count of digits in the number

    while (n!=0) {
        n=n/10;
        c++;
    }

    while (num!=0) {
        digit=num%10;
        sum=sum+pow(digit,c);
        num=num/10;   
    }

    if(number==sum) {
        cout<<"true";
    }
    else {
        cout<<"false";
    }
}

