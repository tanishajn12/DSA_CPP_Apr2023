#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char str[101];
    cin.getline(str,101); 

    int i=0; 
    int j= strlen(str)-1;

    while(i<j) {
        if (str[i]==str[j]) {
            i++;
            j--;
        }

        else {
            cout<<"Not a Palidrome";
            break;
        }
    }

    cout<<"Its a palindrome";
    return 0;
}