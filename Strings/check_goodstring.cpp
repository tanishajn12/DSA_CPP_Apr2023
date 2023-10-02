#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char str[105];
    cin.getline(str,105);

    int n=strlen(str);

    for(int m=0; m<n; m++) {
        char ch=str[m];
        if ((ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u')) {
            continue;
        }
        else {
            cout<<"False";
        }
    }
    cout<<"true";
    
}