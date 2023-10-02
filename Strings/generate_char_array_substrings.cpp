#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char str[101];//to read user input

    cin.getline(str,101);

    for(int i=0; i<strlen(str); i++) {
        for(int j=i; (j<=strlen(str)-1); j++) {
            for(int k=i; k<=j; k++) {
                cout<<str[k];
            }
            cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}


