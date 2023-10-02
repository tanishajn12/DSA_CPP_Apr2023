#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number:";
    cin>> n;

    int i=2;
    char is_prime=true;

    while (i<n) {
        if (n%i==0) {
            is_prime=false;
            break;
         }
        i++;
    }
    if (is_prime== true) {
        printf("IT IS A PRIME NUMBER");
    }
    else {
        printf("IT IS NOT A PRIME NUMBER");
    }
    
}



