#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number :" ;
    cin>> num;

    for (int i=num ; i>=1; i--) {
        for (int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}




