#include<iostream>
using namespace std;

int main() {
    int row;
    cout<< "Enter a number of rows :";
    cin>> row;

    int i=0;

    for (i=row; i>=1 ; i--) {
        for (int j=0; j<=row-i; j++) {
            printf(" ");
        }
        int k=0;
        while (k< (2*i-1)) {
            printf("*");
            k++;
        }
        printf("\n");
    }
    return 0;

}



