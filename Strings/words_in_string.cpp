#include<iostream>
#include<cstring>
using namespace std;

int main() {
    string str;
    cin>>str;

    int n=str.length();

    for(int i=0; i<n ; i++) {
        if(str[i]>='A' && str[i]<='Z') {
            cout<<'\n'<<str[i];
        }
        else {
            cout<<str[i];
        }
    }

    return 0;
}

